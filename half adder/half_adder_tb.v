`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:32:41 09/07/2022
// Design Name:   half_adder
// Module Name:   C:/Users/Bhagya Anil/OneDrive/Desktop/Verilog/half_adder/half_adder_tb.v
// Project Name:  half_adder
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: half_adder
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module half_adder_tb();
	// Inputs
	reg a;
	reg b;
	// Outputs
	wire sum;
	wire carry;
	// Instantiate the Unit Under Test (UUT)
	half_adder uut (
		.a(a), 
		.b(b), 
		.sum(sum), 
		.carry(carry));
	initial begin
		// Initialize Inputs
		a = 1'b0;
		b = 1'b0;
		end
		always #2 a=~a;
		always #6 b=~b;
		initial $monitor($time, "a=%b,b=%b",a,b);
		initial #50 $finish;
		 
endmodule

