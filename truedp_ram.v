module truedp_ram(clk,data0,data1,ad0,ad1,we0,we1,re0,re1);
   input clk,we0,we1,re0,re1;
   input [3:0]ad0,ad1;
   inout [7:0]data0,data1;
   reg [7:0]temp0,temp1;
   
   reg [7:0] MEM[15:0];
   
   assign data0=(re0 && !we0)?temp0:8'hzz;
   assign data1=(re1 && !we1)?temp1:8'hzz;
   
   always @(posedge clk)
   begin
    if(we0 && !re0)
	  MEM(ad0)<=data0;
	else if(re0 && !we0)
	   temp0<=MEM(ad0);
   end
   
   always @(negedge clk)
   begin
    if(we1 && !re1)
	  MEM(ad1)<=data1;
	else if(re1 && !we1)
	  temp1<=MEM(ad1);
   end

endmodule





module truedp_ram_tb;
	reg clk;
	reg [3:0]ad_0;
	reg [3:0]ad_1;
	reg we_0,we_1,re_0,re_1;
	wire [7:0]data_0;
	wire [7:0]data_1;
	truedp_ram uut (.clk(clk), .data_0(data_0), .data_1(data_1), .ad_0(ad_0), .ad_1(ad_1), .we_0(we_0), .we_1(we_1), .re_0(re_0), .re_1(re_1));
	reg [7:0]temp0,temp1;
	assign data_0=(re_0 && !we_0)?temp0:8'hzz;
   assign data_1=(re_1 && !we_1)?temp1:8'hzz;
   integer i,j;
   always
    begin
       clk=0;
       #5;
       clk=1;
       #5;
    end
   task initialise;
    begin
	  {we_0,we_1,re_0,re_1}<=0;
	  temp0<=0;
	  temp1<=0;
	  ad_0<=0;
	  ad_1<=0;
	 end
   endtask
   task write;
    begin
	  @(negedge clk)
	  we_0<=1'b1;
	  re_0<=1'b0;
	  @(posedge clk)
	  we_1<=1'b1;
	  re_1<=1'b0;
	 end
   endtask
   task read;
    begin
	  @(negedge clk)
	  we_0<=1'b0;
	  re_0<=1'b1;
	  @(posedge clk)
	  we_1<=1'b0;
	  re_1<=1'b1;
	 end
   endtask
   task stimulus_0(input[3:0]a0,input[7:0]d0);
    begin
	  @(negedge clk)
	  ad_0<=a0;
	  temp0<=d0;
	 end
   endtask
   task stimulus_1(input[3:0]a1,input[7:0]d1);
    begin
	  @(posedge clk)
	  ad_1<=a1;
	  temp1<=d1;
	 end
   endtask
   initial
    begin
     initialise;
	  write;
    end
   initial
    fork
     #20 for(i=0;i<16;i=i+2)
	       begin
	        stimulus_0(i,$random);
	       end
	  #20 for(j=1;j<16;j=j+2)
	       begin
	        stimulus_1(j,$random);
	       end
    join 
   initial 
    begin
	  #170 read;
	 end
   initial
    fork
     #200 for(i=0;i<16;i=i+2)
	        begin
	         stimulus_0(i,i);
	        end
	  #200 for(j=1;j<16;j=j+2)
	        begin
	         stimulus_1(j,j);
	        end
    join 
   initial 
    begin
	  #400 $finish;
	 end     
endmodule
