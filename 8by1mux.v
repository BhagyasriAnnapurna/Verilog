module mux8by1(i,s,Y);
  input [7:0]i;
  input [2:0]s;
  output reg Y;
  always @(i or s)
    begin
	  case(s)
	    3'b000:Y=i[0];
		3'b001:Y=i[1];
		3'b010:Y=i[2];
		3'b011:Y=i[3];
		3'b100:Y=i[4];
		3'b101:Y=i[5];
		3'b110:Y=i[6];
		3'b111:Y=i[7];
	   endcase
	end
endmodule




module mux8by1_tb();
  reg [7:0]I;
  reg [2:0]S;
  wire y;
  integer j;
  mux8by1 DUT(I,S,y);
  initial
    begin
      $dumpfile("mux8by1_tb.vcd");
      $dumpvars(0);
      {I,S}=0;
      for(j=0;j<8;j=j+1)
	    begin
		  S=j;
          I[j]=1'b1;
		  #10;
          I[j]=1'b0;
		  #10;
		end
	end
endmodule








