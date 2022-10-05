module fifo(dout,din,full,empty,clk,rst,we,re);
    parameter dw=8;     //width
	parameter aw=4;
	parameter rd=16;    //depth
	
	output reg [dw-1:0]dout;
	output full,empty;
	input [dw-1:0]din;
	input we,re,clk,rst;
	
	reg [aw-1:0]wr_pointer;
	reg [aw-1:0]rd_pointer;
	reg [aw-1:0]status_counter;
	reg [dw-1:0]dram;
	
	always @(posedge clk,posedge rst)
	  begin
	    if(rst)
		   wr_pointer=0;
		else 
		    wr_pointer=wr_pointer+1;
	  end
	always @(posedge clk,posedge rst)
	  begin
	    if(rst)
		   rd_pointer=0;
		else 
		   rd_pointer=rd_pointer+1;
	  end
	always @(posedge clk,posedge rst)
	  begin
	    if(rst)
		   dout=0;
		else
		  begin
		    if(re && !we)
			  dout=dram;
		  end
	  end
	always @(posedge clk,posedge rst)
	  begin
	    if(rst)
		   status_counter=0;
		else if((we && !re) && (status_counter != rd))
		   status_counter=status_counter+1;
		else if((re && !we) && (status_counter !=rd))
		   status_counter=status_counter-1;
	  end
	
	assign full=(status_counter==(rd));
	assign empty=(status_counter==0);
	
	dualport_ram one(clk,wr_pointer,rd_pointer,we,re,din,dout);
	
endmodule

module dualport_ram(clk,w_add,r_add,we,re,din,dout);
    input clk,re,we;
	input [3:0]w_add,r_add;
	input [7:0]din;
	output reg [7:0]dout;
	reg [7:0] mem [15:0];
	always @(posedge clk)
	  begin
	    mem[w_add]<=we?din:8'bz;
		dout<=re?mem[r_add]:8'bz;
	  end
endmodule



//testbench


module fifo_tb();
    reg clk,rst,we,re;
    reg [7:0]din;
    wire [7:0]dout;
	wire full,empty;
	fifo f1(dout,din,full,empty,clk,rst,we,re);
	always #5 clk=~clk;
	task initialise;
	  begin 
	    rst<=0;
		we<=0;
		re<=0;
		din<=0;
	  end
	endtask
	task data(input[7:0]a)
	  begin
	    @(negedge clk)
		din=a;
	  end
	endtask
	initial
	  begin
	    initialise;
		#10;
		rst<=1;
		#10;
		rst<=0;
		#10;
		we<=1;
		repeat(16)
		  begin
		    data($random)
		  end
		we<=0;
		#50;
		re<=1;
		#150;
		re<=0;
		#10;
		$finish;
	  end
endmodule
	