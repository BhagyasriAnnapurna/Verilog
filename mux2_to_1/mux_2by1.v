`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:28:40 09/07/2022 
// Design Name: 
// Module Name:    mux_2by1 
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
module mux_2by1(i,s,y);
  input [1:0]i;
  input s;
  output y;
  assign y=s?i[1]:i[0];
endmodule
