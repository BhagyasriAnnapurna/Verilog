module D_FF(clk,D,q,qb);
   input clk,D;
   output reg q,qb;
   always @(posedge clk)
    begin
	  if(rst)
	    q<=0;
	  else
        begin
		 q=D;
		 qb=~q;
		end
	end
endmodule
