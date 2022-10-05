module JK_FF(clk,rst,J,K,q,qb);
   input clk,rst,J,K;
   output reg q;
   output qb;
   assign qb=~q;
   always @(posedge clk)
    begin
	  if(rst)
	    q<=0;
	  else if(J==0 && K==0)
	    q<=q;
	  else if(J==0 && K==1)
	    q<=0;
          else if(J==1 && K==0)
	    q<=1;
	  else if(J==1 && K==1)
            q<=~q;	
	end
endmodule
     
