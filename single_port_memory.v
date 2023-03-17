module ram_1(clk,data,addr,we,re);
   input clk,re,we;
   input [3:0]addr;
   inout [7:0]data;
   
   reg [7:0]temp;
   
   reg [7:0] MEM [15:0];
   
   assign data=(re && !we)?temp:8'hzz;
   
   always @(posedge clk)
    begin
	  if(we && !re)
	    MEM[addr]<=data;
	  else if(re && !we)
	    temp<=MEM[addr];
	end
endmodule
   
   
//using control input instead of two ports for read and write

module ram_1(clk,data,addr,ct);
   input clk,ct;
   input [3:0]addr;
   inout [7:0]data;
   
   reg [7:0]temp;
   
   reg [7:0] MEM [15:0];
   
   assign data=(!ct)?temp:8'hzz;
   
   always @(posedge clk)
    begin
	  if(ct)
	    MEM[addr]<=data;
	  else
	    temp<=MEM[addr];
	end
endmodule 



//testbench
module ram_tb();
   reg clk,we,re;
   reg [3:0]addr;
   wire [7:0]data;
   reg  [7:0]temp;
   ram_1 ram(clk,data,addr,we,re);
   integer i,j;
  always
     begin
       clk=0;
       #20;
       clk=1;
       #20;
     end
   assign data=(we && !re)?temp:8'hzz;
   task initialise;
    begin
	  temp<=8'h00;
      clk<=0;
	end
   endtask
   task write(input [7:0]A,input [3:0]B);
    begin
	  @(negedge clk)
	    we<=1'b1;
		re<=1'b0;
		temp<=A;
		addr<=B;
    end
   endtask
   task read(input [3:0]C);
    begin
	  @(negedge clk)
	  we<=1'b0;
      re<=1'b1;
      addr<=C;
    end
   endtask
   initial
     begin
       initialise();
	  for(i=0;i<=15;i=i+1)
	  begin
        write(i,i);
        #10;
	  end
      for(j=0;j<=15;j=j+1)
	  begin
        read(j);
        initialise();
        #10;
      end
	  $finish;
    end
endmodule
	  
   	  
   