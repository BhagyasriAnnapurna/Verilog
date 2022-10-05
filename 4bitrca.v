module FA(A,B,C,S,Cout);
  input A,B,C;
  output reg S,Cout;
  always @(A or B or C)
  begin
    S=A^B^C;
	Cout=(A&B)|(B&C)|(A&C);
  end
endmodule


module rca(A,B,C,S,Co);
  input [3:0]A,B;
  input C;
  output [3:0]S;
  output Co;
  wire [2:0]W;
  FA fa1(A[0],B[0],C,S[0],W[0]);
  FA fa2(A[1],B[1],W[0],S[1],W[1]);
  FA fa3(A[2],B[2],W[1],S[2],W[2]);
  FA fa4(A[3],B[3],W[2],S[3],Co);
endmodule


//testbench

module rca_tb();
  reg [3:0]a,b;
  reg c;
  wire [3:0]s;
  wire co;
  integer i;
  rca dut(a,b,c,s,co);
  initial
  begin
    $dumpfile("rca_tb.vcd");
    $dumpvars(0);
    {a,b,c}=0;
    for(i=501;i<511;i=i+1)
	begin
	   {a,b,c}=i;
	   #10;
	end
  end
endmodule
