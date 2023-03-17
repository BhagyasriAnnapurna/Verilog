`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:08:27 09/07/2022 
// Design Name: 
// Module Name:    mux_8by1 
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
module mux8by1(i,s,Y);
  input [7:0]i;
  input [2:0]s;
  output reg Y;
  always @(i or s)
    begin
	  case(s)
	   3'b000:Y=i[0];
		3'b001:Y=i[1];
		3'b010:Y=i[2];
		3'b011:Y=i[3];
		3'b100:Y=i[4];
		3'b101:Y=i[5];
		3'b110:Y=i[6];
		3'b111:Y=i[7];
	   endcase
	end
endmodule
