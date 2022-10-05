module T_FF(clk,rst,T,q,qb);
  input clk,T,rst;
  output reg q;
  output qb;
  assign qb=~q;
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

module async_count(clk,rst,q,qb);
   input clk,rst;
   output [3:0]q;
   wire [3:0]w;
   T_FF t1(clk,rst,1'b1,q[0],w[0]);
   T_FF t2(w[0],rst,1'b1,q[1],w[1]);
   T_FF t3(w[1],rst,1'b1,q[2],w[2]);
   T_FF t4(w[2],rst,1'b1,q[3],w[3]);
endmodule

module Asynch_counter_tb();
    reg clk,rst,T; 
	wire [3:0]q; 
	Asynch_counter uut(.clk(clk),.rst(rst),.T(T),.q(q)); 
	always #5 clk=~clk; 
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
   