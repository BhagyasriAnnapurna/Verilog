module fsm2(din,dout,rst,clk);
    input rst,clk,din;
	output dout;
	parameter idle=3'b000,s0=3'b001,s01=3'b010,s010=3'b011,s0101=3'b100;
	reg [2:0]cst,nst;
	always @(posedge clk , posedge rst)
	  begin
	    if(rst==1)
		  cst<=idle;
		else
		  cst<=nst;
	  end
	always @(cst,din)
	  begin
	    case(cst)
		  idle: 
		   if(din==0)
			nst<=s0;
		   else
		    nst<=idle;
       	  s0:
		   if(din==0)
            nst<=s0;
           else
            nst<=s01;
		  s01:
           if(din==0)
            nst<=s010;
		   else
		    nst<=idle;
		  s010:
		   if(din==0)
		    nst<=s0;
		   else
		    nst<=s0101;
		  s0101:
		   if(din==0)
		    nst<=s010;
		   else
		    nst<=idle;
		endcase
	   end
	assign dout=(cst==s0101)?1:0;
endmodule		  
	