module T_FF(clk,T,rst,q,qb);
  input clk,T,rst;
  output reg q,qb;
  always @(posedge clk)
    begin
	  qb<=~q;
	  if(rst)
	    q<=0;
	  else if(T==1'b1)
	    q<=~q;
	  else
	    q<=q;
	end
endmodule


module T_FF_tb(); 
    reg clk,T,rst; 
	wire q; 
	integer j; 
	T_FF uut(.clk(clk),.T(T),.rst(rst),.q(q)); 
	always #5 clk=~clk; 
	task initialise; 
	  begin 
	    rst<=1'b0; 
		clk<=1'b0; 
	  end 
	endtask
	task rst1;
	  begin 
	    @(negedge clk) 
	    rst<=1'b1; 
	    @(negedge clk) 
	    rst<=1'b0; 
	  end 
	endtask 
	task t_tsk(input i); 
	  begin
     	  @(negedge clk) 
		  T<=i;
	   end 
	endtask
	initial 
	  begin 
	    initialise; 
		rst1; 
		t_tsk(1); 
		t_tsk(0); 
		t_tsk(1); 
		rst1; 
		t_tsk(0); 
		t_tsk(1); 
		rst1; 
		$finish; 
	  end
endmodule                            
                  