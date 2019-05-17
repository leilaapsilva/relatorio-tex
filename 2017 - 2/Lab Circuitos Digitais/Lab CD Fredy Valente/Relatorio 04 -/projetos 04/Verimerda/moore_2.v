module moore_2(clk, in, reset, out_S);
	input clk;
	input reset;
	input in;
	output out_S;
	reg out_S;
	reg [1:0] state;
	parameter [1:0] state_A = 0, state_B = 1;

always@(posedge clk or posedge reset)
	begin
		if (reset)
			state = state_A;
		else
			case(state)
				state_A: if (in==0)
					state = state_B;
				else
					state = state_A;
				state_B: if (in==1)
					state = state_A;
				else
					state = state_B;
			endcase
	end

always@(state)
	begin
		case(state)
				state_A: out_S = 0;
				state_B: out_S = 1;
				default: out_S = 0;
		endcase
	end

endmodule