module fsm1(din,dout,rst,clk);
   input din,rst,clk;
   output dout;
   parameter idle=3'b000,s1=3'b001,s11=3'b010,s111=3'b011,s1110=3'b100;
   reg [2:0] cst,nst;
   always @(posedge clk, posedge rst)
    begin
      if(rst)
		   cst<=idle;
	   else
	      cst<=nst;
    end
   always @(cst,din)
    begin
     case(cst)
	  idle:
	  if(din==0)
	    nst<=idle;
	  else
		 nst<=s1;
	  s1:
	  if(din==0)
	    nst<=idle;
	  else
	    nst<=s11;
	  s11:
	  if(din==0)
	    nst<=idle;
	  else
	    nst<=s111;
	  s111:
	  if(din==0)
	    nst<=s1110;
	  else
	    nst<=s111;
	  s1110:
	  if(din==0)
	    nst<=idle;
	  else
	    nst<=s1;
	  endcase
   end
   assign dout=(cst==s1110)?1:0;
endmodule
	  
