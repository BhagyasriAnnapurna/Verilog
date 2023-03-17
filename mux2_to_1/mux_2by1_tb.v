`timescale 1ns / 1ps
module mux_2by1_tb();
	// Inputs
	reg [1:0]i;
	reg s;
	// Outputs
	wire y;
	// Instantiate the Unit Under Test (UUT)
	mux_2by1 uut(.i(i), .s(s), .y(y));
	initial 
	begin
	 {i,s}=0;
	 i[1]=1'b1;
	 i[0]=1'b0;
	 #10 s=1'b1;
	 #10 s=1'b0;
	end
   initial #30 $finish;  
endmodule

