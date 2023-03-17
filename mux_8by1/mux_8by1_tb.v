`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:10:34 09/07/2022
// Design Name:   mux8by1
// Module Name:   C:/Users/Bhagya Anil/OneDrive/Desktop/Verilog/mux_8by1/mux_8by1_tb.v
// Project Name:  mux_8by1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux8by1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux_8by1_tb;
	// Inputs
	reg [7:0] i;
	reg [2:0] s;
	// Outputs
	wire Y;
	integer j;
	// Instantiate the Unit Under Test (UUT)
	mux8by1 uut (.i(i), .s(s), .Y(Y));
	initial
		begin
      {i,s}=0;
      for(j=0;j<8;j=j+1)
	    begin
		  s=j;
          i[j]=1'b1;
		  #10;
          i[j]=1'b0;
		  #10;
		end
	end
   initial #160 $finish;   
endmodule

