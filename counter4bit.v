module counter4b(clk,rst,d);
   input clk,rst;
   output reg [3:0]d;
   always @(negedge clk)
    begin
      if(rst==1'b1)
	    d<=4'b0000;
      else
	begin
	    if(d!=4'b1111)
		d<=d+1;
            else
		d<=4'b0000;
         end
    end
endmodule
		  
   
