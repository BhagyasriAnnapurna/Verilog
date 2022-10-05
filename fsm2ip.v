module fsm2ip(din,dout,clk,rst);
    input clk,rst;
	input [1:0] din;
	output [1:0] dout;
	reg [2:0] cst,nst;
	parameter idle=3'b000,s0=3'b001,s1=3'b010,s2=3'b011,s3=3'b100;
	always @(posedge clk,posedge rst)
	  begin
	    if(rst)
		  cst<=idle;
		else
		  cst<=nst;
	  end
	always 
	  begin
	    case(cst)
		  idle:
		    if(din==2'b00)
			  nst<=s0;
			else if(din==2'b01)
			  nst<=s1;
			else if(din==2'b10)
			  nst<=s2;
			else
			  nst<=s3;
		  s0:
		    if(din==0)
			  nst<=s0;
			else if(din==2'b01)
			  nst<=s1;
			else if(din==2'b10)
			  nst<=s2;
			else
			  nst<=s3;
		  s1:
		    if(din==0)
			  nst<=s1;
			else if(din==2'b01)
			  nst<=s1;
			else if(din==2'b10)
			  nst<=s2;
			else
			  nst<=s3;
		  s2:
		    if(din==0)
			  nst<=s2;
			else if(din==2'b01)
			  nst<=s2;
			else if(din==2'b10)
			  nst<=s2;
			else
			  nst<=s3;
		  s3:
		    if(din==0)
			  nst<=s3;
			else if(din==2'b01)
			  nst<=s3;
			else if(din==2'b10)
			  nst<=s3;
			else
			  nst<=s3;
		endcase
	  end
endmodule
