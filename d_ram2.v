module ram_2(clk,din,w_addr,dout,r_addr,we,re);
   input clk,re,we;
   input [3:0]w_addr,r_addr;
   input [7:0]din;
   output reg [7:0]dout;
   
   reg [7:0] MEM [15:0];
   
   always @(posedge clk)
    begin
	  if(we)
	    MEM[w_addr]<=din;
	  if(re)
	    dout<=MEM[r_addr];
	end
endmodule


module ram_2_tb;
	reg clk,we,re;
	reg [7:0] din;
	reg [3:0] w_addr;
	reg [3:0] r_addr;
	wire [7:0] dout;
	ram_2 uut (.clk(clk), .din(din), .w_addr(w_addr), .dout(dout), .r_addr(r_addr), .we(we), .re(re));
   integer i,j;
   always
    begin
       clk=0;
       #10;
       clk=1;
       #10;
    end
   task initialise;
    begin
     clk<=0;
	  w_addr<=0;
	  r_addr<=0;
	  we<=0;
	  re<=0;
	end
   endtask
   task write(input [7:0]A,input [3:0]B);
    begin
	  @(negedge clk)
	    we<=1'b1;
		 re<=1'b0;
	    din<=A;
		 w_addr<=B;
    end
   endtask
   task read(input [3:0]C);
    begin
	  @(negedge clk)
	   we<=1'b0;
      re<=1'b1;
      r_addr<=C;
    end
   endtask
   initial
     begin
       initialise;
	    for(i=0;i<=15;i=i+1)
	      begin
          write(i,i);
		    read(i);
	      end
	    $finish;
    end
endmodule