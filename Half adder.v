module ha(A,B,S,C);
    input A,B;
	output reg S,C;
	always @(A or B)
	  begin
	    S=A^B;
		C=A&B;
	  end
endmodule




module ha_tb();
  reg a,b;
  wire s,c;
  integer i;
  ha dut(a,b,s,c);
  initial
  begin
    {a,b}=0;
	for(i=0;i<4;i=i+1)
	begin
	   {a,b}=i;
	end
  end
endmodule

  
  