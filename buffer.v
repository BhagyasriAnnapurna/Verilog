module bibuffer(A,B,C);
  inout A,B;
  input C;
  assign B=(C==1'b1)?A:1'bz;
  assign A=(C==1'b0)?B:1'bz;
endmodule


module bibuffer_tb();
  reg c;
  wire a,b;
  integer i;
  
  reg a_tmp,b_tmp;
  
  bibuffer dut(Atb,Btb,Ctb);
  
  assign a=(c==1)?a_tmp:1'bz;
  assign b=(c==0)?b_tmp:1'bz;
    initial 
      begin
        $dumpfile("bibuffer_tb.vcd");
         $dumpvars(0);
        {c,a_tmp,b_tmp}=0;
        for(i=0;i<8;i=i+1)
          begin
            {c,a_tmp,b_tmp}=i;
             #10;
          end
      end
endmodule
             