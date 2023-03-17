`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:22:20 09/08/2022
// Design Name:   Asynch_counter
// Module Name:   C:/Users/Bhagya Anil/OneDrive/Desktop/Verilog/Asynch_counter/Asynch_counter_tb.v
// Project Name:  Asynch_counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Asynch_counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Asynch_counter_tb();
	reg clk,rst,T;
	wire [3:0]q;
	Asynch_counter uut(.clk(clk),.rst(rst),.T(T),.q(q));
	always 
   #5 clk=~clk;
	initial 
	begin
	  T=0;
	  clk=0;
	  rst=0;
	end
	task rst_tsk;
    begin
	  @(negedge clk)
	    rst<=1;
	  @(negedge clk)
	    rst<=0;
	end
   endtask 
	initial 
	begin
	rst_tsk;
	T=1'b1;
	#30 rst_tsk;
	end
      
endmodule

