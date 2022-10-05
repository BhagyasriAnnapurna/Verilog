module counter4b(clk,din,ld,rst,d);
   input clk,rst,ld;
   input [3:0]din;
   output reg [3:0]d;
   always @(negedge clk)
    begin
      if(rst==1'b1)
	    d<=4'b0000;
	  else if(ld)
	    d<=din;
	  else
	    begin
		  if(d!=4'b1111)
		    d<=d+1;
		  else
		    d<=4'b0000;
		end
	end
endmodule
  
module counter4b_tb();
    reg clk,ld,rst; 
	reg [3:0] din; 
	wire [3:0] d; 
	counter4b uut (.clk(clk), .din(din), .ld(ld), .rst(rst), .d(d)); 
	always #5 clk=~clk; 
	task initialise; 
	  begin
	    rst<=0; 
		ld<=0; 
		clk<=0;	
	  end	
        endtask 
	task load_in(input [3:0]a); 
	  begin 
	    @(posedge clk) 
		ld<=1'b1; 
		din<=a; 
		@(posedge clk) 
		ld<=1'b0; 
	  end 
	endtask
	task rst_tsk; 
	  begin 
	    @(posedge clk) 
		rst<=1; 
		@(posedge clk)
		rst<=0; 
	  end 
	endtask 
	initial 
	  begin
	     initialise; 
	     rst_tsk; 
	     din<=3'b000; 
	     load_in(3'b110); 
	     rst_tsk;
	     load_in(3'b011);
	  end 
endmodule 
