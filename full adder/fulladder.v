`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:00:41 09/07/2022 
// Design Name: 
// Module Name:    full_adder 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module ha(A,B,S,C);
    input A,B;
	output reg S,C;
	always @(A or B)
	  begin
	    S=A^B;
		C=A&B;
	  end
endmodule


module FA (in_1, in_2, Cin, Sum, Carry);
    input in_1, in_2, Cin;
    output Sum, Carry;
    wire w0, w1, w2;
    ha HA1 (in_2, in_1, w0, w1);     // order based inst.
    ha HA2 (w0, Cin, Sum, w2);
    or g1 (Carry, w1, w2);  // assign Carry = w1|w2;
endmodule

