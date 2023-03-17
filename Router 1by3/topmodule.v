module topmodule(input clk, resetn, packet_valid, read_enb_0, read_enb_1, read_enb_2,
input [7:0]datain,
output vldout_0, vldout_1, vldout_2, err, busy,
output [7:0]data_out_0, data_out_1, data_out_2);
wire [2:0]w_enb;
wire [2:0]soft_reset;
wire [2:0]read_enb;
wire [2:0]empty;
wire [2:0]full;
wire lfd_state_w;
wire [7:0]data_out_temp[2:0];
wire [7:0]dout;
genvar a;
generate
for(a=0;a<3;a=a+1)
begin:
router_fifo f1(.clk(clk), .resetn(rstn), .soft_reset(soft_reset[a]),.lfd_state(lfd_state), .write_enb(wr_en[a]), .datain(din), .read_enb(rd_en[a]),.full(full[a]), .empty(empty[a]), .dataout(dout[a]));
end
endgenerate
routerregister r1(.clk(clk), .resetn(rstn), .packet_valid(pck_valid), .datain(data_in), .dout(data_out), .fifo_full(fifo_full), .detect_add(detect_addr),.ld_state(ld_state), .laf_state(laf_state),.full_state(full_state), .lfd_state(lfd_state), .rst_int_reg(rst_int_reg), .err(error),.parity_done(parity_done),.low_packet_valid(low_pck_valid));
router_fsm f2(.clk(clk), .resetn(resetn), .packet_valid(packet_valid),.datain(datain[1:0]),.soft_reset_0(soft_reset_0),.soft_reset_1(soft_reset_1), .soft_reset_2(soft_reset_2),.fifo_full(fifo_full), .fifo_empty_0(fifo_empty_0), .fifo_empty_1(fifo_empty_1),.fifo_empty_2(fifo_empty_2), .parity_done(parity_done), .low_packet_valid(low_packet_valid),.busy(busy), .rst_int_reg(rst_int_reg),.full_state(full_state), .lfd_state(lfd_state), .laf_state(laf_state),.ld_state(ld_state),.detect_add(detect_add), .write_enb_reg(write_enb_reg));
router_sync s1(.clk(clk), .resetn(rstn), .datain(d_in), .detect_add(det_add),.full_0(full_0), .full_1(full_1), .full_2(full_2), .read_enb_0(rd_en_0),.read_enb_1(rd_en_1),.read_enb_2(rd_en_2),.write_enb_reg(write_enb_reg), .empty_0(empty_0), .empty_1(empty_1), .empty_2(empty_2),.vld_out_0(valid_out_0), .vld_out_1(valid_out_1), .vld_out_2(valid_out_2), .soft_reset_0(soft_rst_0),.soft_reset_1(soft_rst_1),.soft_reset_2(soft_rst_2), .write_enb(wr_en), .fifo_full(fifo_full));
assign read_enb[0]= read_enb_0;
assign read_enb[1]= read_enb_1;
assign read_enb[2]= read_enb_2;
assign data_out_0=data_out_temp[0];
assign data_out_1=data_out_temp[1];
assign data_out_2=data_out_temp[2];
endmodule


module router_fifo(clk,rstn,soft_reset,lfd_state,wr_en,rd_en,din,full,empty,dout); 
          parameter w=9,d=16; 
          input clk, rstn, wr_en, rd_en, lfd_state, soft_reset; 
          input [w-2:0]din; 
          output reg [w-2:0]dout; 
          output reg full,empty; 
          reg [3:0]rd_ptr; 
          reg [3:0]wr_ptr; 
          reg [5:0]count; 
          reg temp; 
          reg [4:0]incrementer; 
          integer i; 
          reg [w-1:0] mem [d-1:0]; 
          //lfd state 
         always @(posedge clk) 
         begin 
              if(!rstn) 
                   temp <= 1'b0; 
              else
                   temp <= lfd_state; 
          end 
          //pointer logic 
          always @(posedge clk) 
          begin 
                if(!rstn || soft_reset) 
                     wr_ptr = 0; 
               else if(wr_en && !full) 
                     wr_ptr = wr_ptr+1; 
          end 
          always @(posedge clk) 
          begin 
                if(!rstn || soft_reset) 
                      rd_ptr = 0; 
              else if(rd_en && !empty) 
                     rd_ptr = rd_ptr+1; 
           end 
            //incrementer logic 
           always @(posedge clk) 
           begin 
                 if(!rstn) 
                        incrementer <= 0; 
                 else if(wr_en && !full) 
                        incrementer <= incrementer+1; 
                 else if(rd_en && !empty) 
                        incrementer <= incrementer-1; 
                else if((wr_en && !full) && (rd_en && !empty)) 
                        incrementer <= incrementer; 
            end
            //full and empty logic 
           always @(incrementer) 
           begin 
                 if(incrementer==0) 
                         empty<=1'b1; 
                 else
                         empty<=1'b0; 
                if(incrementer==16) 
                          full<=1'b1; 
                else
                          full<=1'b0; 
          end 
          //write logic 
          always @(posedge clk) 
          begin 
                 if(!rstn || soft_reset) 
                      begin
                             for(i=0;i<=15;i=i+1) 
                                     mem[i]<=0; 
                      end 
                else if(wr_en && !full) 
                       begin
                             mem [wr_ptr][7:0] <= din; 
                             mem [wr_ptr][8] <= temp; 
                       end 
         end 
         //counter logic 
         always @(posedge clk) 
          begin 
                if(rd_en && !empty) 
                      begin
                           if(mem[rd_ptr][8]) 
                                count <= mem[rd_ptr][7:2]+1'b1; 
                          else if(count != 0) 
                                count <= count - 1; 
                       end 
          end 
          //read logic 
          always @(posedge clk ) 
          begin
               if(!rstn) 
                       dout <= 0; 
               else if(soft_reset) 
                       dout <= 8'hzz; 
               else
               begin 
                      if(rd_en && !empty) 
                      begin 
                            if(count==0) 
                                   dout <= 8'hzz; 
                            else 
                                   dout <= mem[rd_ptr]; 
                       end
                end 
          end 
endmodule


module router_sync(clk, rstn, wr_en_reg, det_add, rd_en_0, rd_en_1, rd_en_2, empty_0,empty_1,empty_2,full_0,full_1,full_2,d_in,valid_out_0,valid_out_1,valid_out_2, wr_en,fifo_full,soft_rst_0,soft_rst_1,soft_rst_2); 
input clk, rst, wr_en_reg, det_add, rd_en_0, rd_en_1, rd_en_2, empty_0,   empty_1,empty_2,full_0, full_1,full_2; 
input[1:0]d_in; 
output wire valid_out_0,valid_out_1,valid_out_2 ; 
output reg [2:0]wr_en; 
output reg  fifo_full, soft_rst_0, soft_rst_1, soft_rst_2; 
reg[1:0]temp; 
reg[4:0]count_0, count_1, count_2; 
//data 
always@(posedge clk,posedge rst) 
begin 
    if(!rst) 
 		temp<=2'd0; 
    else if(det_add) 
temp<=d_in; 
end 
//valid 
assign valid_out_0 = ~empty_0; 
assign valid_out_1 = ~empty_1; 
assign valid_out_2 = ~empty_2; 
//soft reset 
always@(posedge clk) 
begin 
   if(!rst) 
count_0<=5'b0; 
   else if(valid_out_0) 
   begin 
if(!rd_en_0) 
begin 
   if(count_0==5'b11110) 
         begin 
soft_rst_0<=1'b1; 
count_0<=1'b0; 
   end 
                else 
   begin 
     count_0<=count_0+1'b1; 
     soft_rst_0<=1'b0; 
   end 
       end
       else 
    count_0<=5'd0; 
   end 
         else 
     count_0<=5'd0; 
end 
always@(posedge clk) 
begin 
   if(!rst) 
count_1<=5'b0; 
   else if(valid_out_1) 
   begin 
if(!rd_en_1) 
begin 
   if(count_1==5'b11110) 
   begin 
soft_rst_1<=1'b1; 
count_1<=1'b0; 
   end 
else 
begin 
   count_1<=count_1+1'b1; 
   soft_rst_1<=1'b0; 
end 
   end 
   else 
      count_1<=5'd0; 
    end 
    else 
      count_1<=5'd0; 
end 
always@(posedge clk) 
begin 
   if(!rst) 
count_2<=5'b0; 
   else if(valid_out_2) 
   begin 
if(!rd_en_2) 
 		begin 
//count_2<=(count_2<29)?0:count_2+1'b1; 
   if(count_2==5'b11110) 
   begin 
soft_rst_2<=1'b1;count_2=1'b0; 
   end 
      else 
      begin 
count_2<=count_2+1'b1; 
soft_rst_2<=1'b0; 
 		   end 
      end 
  else 
           count_2<=5'd0; 
  end 
        else 
     count_2<=5'd0; 
 	end 
//write 
always@(*) 
begin 
   if(wr_en_reg) 
   begin 
	  case (temp) 
       2'b00:wr_en = 3'b001; 
       2'b01:wr_en = 3'b010; 
       2'b10:wr_en = 3'b100; 
       default:wr_en = 3'b000; 
	  endcase 
   end 
   else 
	wr_en<=3'b000; 
end 
//fifo full 
always@(*) 
begin 
   case(temp) 
2'b00:fifo_full = full_0; 
2'b01:fifo_full = full_1; 
2'b10:fifo_full = full_2; 
default:fifo_full = 1'b0; 
   endcase 
end 
endmodule


module fsm(input clk,resetn,packet_valid, 
input [1:0] datain, 
input fifo_full,  fifo_empty_0,fifo_empty_1, fifo_empty_2,soft_reset_0,soft_reset_1,soft_reset_2,parity_done,low_packet_valid, 
output write_enb_reg, detect_add, ld_state, laf_state, lfd_state, full_state,rst_int_reg,busy); 
parameter decode_address = 3'b000, wait_till_empty = 3'b001, load_first_data = 3'b010, load_data=3'b011, load_parity= 3'b100, fifo_full_state = 3'b101, load_after_full = 3'b110, check_parity_error = 3'b111; 
reg [2:0] present_state, next_state; 
reg [1:0] temp; 
//datain logic 
always@(posedge clk) 
begin 
      if(!resetn) 
temp<=2'b00; 
      else if(detect_add) 
temp<=datain; 
end 
// state update logic 
always@(posedge clk) 
begin 
      if(!resetn) 
present_state<=decode_address; 
else if (((soft_reset_0) && (temp==2'b00)) || ((soft_reset_1) && (temp==2'b01)) || ((soft_reset_2) &&  (temp==2'b10))) 
present_state<=decode_address; 
      else 
present_state<=next_state; 
end 
//state machine logic 
always@(*) 
begin 
      case(present_state) 
decode_address: 
begin 
if((packet_valid && (datain==2'b00) && fifo_empty_0)|| (packet_valid && (datain==2'b01)     && fifo_empty_1)|| (packet_valid && (datain==2'b10) && fifo_empty_2)) 
 next_state<=load_first_data; 
     else if((packet_valid && (datain==2'b00) && !fifo_empty_0)||(packet_valid &&        (datain==2'b01) && !fifo_empty_1)|| (packet_valid && (datain==2'b10) && !fifo_empty_2)) 
next_state<=wait_till_empty; 
else 
     next_state<=decode_address; 
end 
load_first_data: 
begin 
      next_state<=load_data; 
end 
wait_till_empty: 
begin 
if((fifo_empty_0 && (temp==2'b00))||(fifo_empty_1 && (temp==2'b01))||(fifo_empty_2    && (temp==2'b10))) 
                next_state<=load_first_data; 
else 
      next_state<=wait_till_empty; 
end 
load_data: 
begin 
      if(fifo_full==1'b1) 
next_state<=fifo_full_state; 
      else 
      begin 
            if (!fifo_full && !packet_valid) 
      next_state<=load_parity; 
            else 
                     next_state<=load_data; 
       end 
end 
load_after_full: 
begin 
      if(!parity_done && low_packet_valid) 
next_state<=load_parity; 
      else if(!parity_done && !low_packet_valid) 
next_state<=load_data; 
      else 
      begin 
 		             if(parity_done==1'b1) 
    next_state<=decode_address; 
                            else 
    next_state<=load_after_full; 
       end 
end 
load_parity: 
begin 
      next_state<=check_parity_error; 
end 
check_parity_error: 
begin 
      if(!fifo_full) 
  	next_state<=decode_address; 
      else 
next_state<=fifo_full_state; 
end 
default: 
next_state<=decode_address; 
endcase 
end 
// output logic 
assign busy= ((present_state==load_first_data)|| (present_state==load_parity)|| (present_state== fifo_full_state)||(present_state==load_after_full)||(present_state==wait_till_empty)||(present_state==check_parity_error))?1'b1:1'b0; 
assign detect_add=(present_state==decode_address)?1'b1:1'b0; 
assign lfd_state=(present_state==load_first_data)?1'b1:1'b0; 
assign ld_state=(present_state==load_data)?1'b1:1'b0; 
assign write_enb_reg=((present_state==load_data)||(present_state==load_after_full)||(present_state==load_parity))?1'b1:1'b0; 
assign full_state=(present_state==fifo_full_state)?1'b1:1'b0; 
assign laf_state=(present_state==load_after_full)?1'b1:1'b0; 
assign rst_int_reg=(present_state==check_parity_error)?1'b1:1'b0; 
endmodule


module routerregister(clk,rstn,pck_valid, data_in, fifo_full, rst_int_reg, detect_addr, lfd_state, ld_state, full_state, laf_state, parity_done,low_pck_valid,error,data_out); 
input clk, rst, pck_valid, fifo_full, rst_int_reg, detect_addr, lfd_state, full_state, laf_state,ld_state; 
input [7:0]data_in; 
output reg error,parity_done,low_pck_valid; 
output reg [7:0]data_out; 
reg [7:0] hold_header,hold_payload,internal_parity,pck_parity; 
//parity done 
always@(posedge clk) 
begin 
       if(!rst) 
parity_done<=1'b0; 
       else if(ld_state && !fifo_full && !pck_valid) 
parity_done<=1'b1; 
       else if(laf_state && !parity_done && low_pck_valid) 
parity_done<=1'b1; 
end 
//dout logic 
always@(posedge clk) 
begin 
       if(!rst) 
data_out<=8'b0; 
        else if(pck_valid && detect_addr) 
 hold_header<=data_in; 
         else if(lfd_state) 
data_out<=hold_header; 
         else if(ld_state && !fifo_full) 
data_out<=data_in; 
         else if(ld_state && fifo_full) 
hold_payload<=data_in; 
         else if(laf_state) 
data_out<=hold_payload; 
end 
//low_pck_valid logic 
always@(posedge clk) 
begin 
      if(!rst) 
low_pck_valid<=1'b1; 
       else 
       begin 
if(rst_int_reg) 
       low_pck_valid<=1'b1; 
else if(lfd_state || ld_state && pck_valid) 
                       low_pck_valid<=1'b0; 
else 
                       low_pck_valid<=1'b1; 
          end 
end 
//internal_parity logic 
always@(posedge clk) 
begin
        if(!rst) 
internal_parity<=8'b0; 
        else if(lfd_state) 
internal_parity<=internal_parity^hold_header; 
        else if(ld_state && !fifo_full && pck_valid) 
internal_parity<=internal_parity^data_in; 
        else if(detect_addr) 
internal_parity<=8'b0; 
end 
//pck_parity 
always@(posedge clk) 
begin 
        if(!rst) 
pck_parity<=8'b0; 
        else if(!lfd_state && !ld_state && !pck_valid) 
pck_parity<=data_in; 
end 
//error logic 
always@(posedge clk) 
begin 
       if(!rst) 
error<=1'b0; 
       else 
       begin 
if(parity_done) 
begin 
       if(pck_parity==internal_parity) 
 	error<=1'b0; 
       else 
error<=1'b1; 
end 
          end 
 end 
endmodule
