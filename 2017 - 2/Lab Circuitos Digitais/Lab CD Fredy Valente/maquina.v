module inicial ( acao, aberto, fechado, ledVerde, ledVermelho, display,ledA,ledB,ledC,ledD);
	input acao, aberto, fechado;
	output ledVerde, ledVermelho,ledA,ledB,ledC,ledD;
	output [6:0] display;
	
	reg [1:0] estadoFinal;
	
	parameter A = 2'b00, B = 2'b01, C = 2'b10, D = 2'b11;
		
	always@(*) begin
	
		
	
		case( estadoFinal )
			A: if( acao == 1 && aberto == 0 && fechado == 1) estadoFinal = C;
			
			B: if( acao == 0 && aberto == 1 && fechado == 0 ) estadoFinal = D;
			
			C: begin
					if( acao == 1 && aberto == 0 && fechado == 0 ) estadoFinal = B;
					if( acao == 0 && aberto == 0 && fechado == 0 ) estadoFinal = D;
				end
				
			D: begin
					if( acao == 1 && aberto == 0 && fechado == 0 ) estadoFinal = C;
					if( acao == 0 && aberto == 0 && fechado == 0) estadoFinal = A;
				end
				
			default: estadoFinal = A;
			
		endcase
		
		
	end
		
	assign ledVerde = (estadoFinal[1] * ~estadoFinal[0]);
	assign ledVermelho = (estadoFinal[1] * estadoFinal[0]);
	 
	assign ledA = (~estadoFinal[1] * ~estadoFinal[0]);
	assign ledB = (~estadoFinal[1] * estadoFinal[0]);
	assign ledC = (estadoFinal[1] * ~estadoFinal[0]);
	assign ledD = (estadoFinal[1] * estadoFinal[0]);
	
endmodule

module maquina(SW,LEDG,LEDR,HEX0);
	input [3:1] SW;
	output [7:0] LEDG, LEDR;
	output [6:0] HEX0;

	inicial a( SW[3], SW[2], SW[1], LEDG[0], LEDR[0], HEX0,LEDG[7],LEDG[6],LEDG[5],LEDG[4]);
endmodule

/*module B ( acao, aberto, fechado, ledVerde, ledVermelho, display);
	input acao, aberto, fechado;
	output ledVerde, ledVermelho;
	output [6:0] display;

	assign {display} = 7'b0001000;
	assign ledVerde = 0;
	assign ledVermelho = 0;

	always
	begin
		if( acao == 0 ) begin
			if( aberto == 1 ) begin
				if( fechado == 0 ) begin
					//Chama módulo D
				end
			end
		end
	end
endmodule*/

/*module C ( acao, aberto, fechado, ledVerde, ledVermelho, display);
	input acao, aberto, fechado;
	output ledVerde, ledVermelho;
	output [6:0] display;

	assign {display} = 7'b1111111;
	assign ledVerde = 1;
	assign ledVermelho = 0;

	always
	begin
		if( acao == 1 ) begin
			if( aberto == 0 ) begin
				if( fechado == 0 ) begin
					B b( acao, aberto, fechado, ledVerde, ledVermelho, display);
				end
			end
			end
		else begin
			if( aberto == 0) begin
				if( fechado == 0) begin
					D d1( acao, aberto, fechado, ledVerde, ledVermelho, display);
				end
			end
		end
	end
endmodule*/

/*module D ( acao, aberto, fechado, ledVerde, ledVermelho, display);
	input acao, aberto, fechado;
	output ledVerde, ledVermelho;
	output [6:0] display;

	assign {display} = 7'b1111111;
	assign ledVerde = 0;
	assign ledVermelho = 1;
	
	always
	begin
		if( acao == 1 ) begin
			if( aberto == 0 ) begin
				if( fechado == 0 ) begin
					C c( acao, aberto, fechado, ledVerde, ledVermelho, display);
				end
			end
		end
		else begin
			if( aberto == 0) begin
				if( fechado == 0) begin
					A a( acao, aberto, fechado, ledVerde, ledVermelho, display);
				end
			end
		end
	end
endmodule*/
