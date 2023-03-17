`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:06:55 09/07/2022
// Design Name:   FA
// Module Name:   C:/Users/Bhagya Anil/OneDrive/Desktop/Verilog/ful_adder/full_adder_tb.v
// Project Name:  ful_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FA
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module full_adder_tb();
	// Inputs
	reg in_1;
	reg in_2;
	reg Cin;
	// Outputs
	wire Sum;
	wire Carry;
	// Instantiate the Unit Under Test (UUT)
	FA uut (
		.in_1(in_1), 
		.in_2(in_2), 
		.Cin(Cin), 
		.Sum(Sum), 
		.Carry(Carry)
	);

	initial begin
		// Initialize Inputs
		in_1 = 0;
		in_2 = 0;
		Cin = 0;
	end
    always #3 in_1=~in_1;
	 always #6 in_2=~in_2;
	 always #15 Cin=~Cin;

    initial #70 $finish;
 
endmodule

