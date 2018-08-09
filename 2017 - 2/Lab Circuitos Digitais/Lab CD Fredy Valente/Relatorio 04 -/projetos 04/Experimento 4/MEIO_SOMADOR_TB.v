module MEIO_SOMADOR_TB;

	reg 	A_tb, B_tb;
	wire  S_tb, C_tb;

MEIO_SOMADOR dut( A_tb, B_tb, S_tb, C_tb);

initial
begin
	A_tb = 1'b0;	B_tb = 1'b0; #1
	A_tb = 1'b0;	B_tb = 1'b1; #1
	A_tb = 1'b1;	B_tb = 1'b0; #1
	A_tb = 1'b1;	B_tb = 1'b1; #1;
end
endmodule