module truedp_ram(clk,data_0,data_1,ad_0,ad_1,we_0,we_1,re_0,re_1);
   input clk,we_0,we_1,re_0,re_1;
   input [3:0]ad_0,ad_1;
   inout [7:0]data_0,data_1;
   reg [7:0]temp_0,temp_1;  
   reg[7:0]mem[15:0];  
   assign data_0=(re_0 && !we_0)?temp_0:8'hzz;
   assign data_1=(re_1 && !we_1)?temp_1:8'hzz;
   always @(negedge clk)
	begin
	  if(we_0 && !re_0)
	    mem[ad_0] <= data_0;
	  if(re_0 && !we_0)
	    temp_0 <= mem[ad_0];
   end
   always @(posedge clk)
   begin
     if(we_1 && !re_1)
	    mem[ad_1]<= data_1;
	  if(re_1 && !we_1)
	    temp_1 <= mem[ad_1];
   end
endmodule
