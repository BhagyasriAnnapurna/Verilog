`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:05:52 09/08/2022 
// Design Name: 
// Module Name:    Asynch_counter 
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
module Asynch_counter(clk,rst,T,q);
   input clk,rst,T;
   output [3:0]q;
	
   T_FF t1(clk,rst,T,q[0]);
   T_FF t2(~q[0],rst,T,q[1]);
   T_FF t3(~q[1],rst,T,q[2]);
   T_FF t4(~q[2],rst,T,q[3]);
endmodule

module T_FF(clk,rst,T,q);
  input clk,T,rst;
  output reg q;
  always @(posedge clk)
    begin
	  if(rst)
	    q<=0;
	  else if(T==1'b1)
	    q<=~q;
	  else
	    q<=q;
	end
endmodule
