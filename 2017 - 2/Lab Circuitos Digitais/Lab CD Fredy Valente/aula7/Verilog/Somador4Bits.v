module meio_somador2 ( a, b, soma, cout);
    input a, b;
    output soma, cout;
    
	 assign soma = a ^ b;
    assign cout = a * b;
    
endmodule

module meio_somador3 ( a, b, c, soma, cout);
    input a, b, c;
    output soma, cout;
	 
	 wire carry_1, carry_2, soma_1;
    
    meio_somador2 m1 ( a, b, soma_1, carry_1);
    meio_somador2 m2 (soma_1, c, soma, carry_2);
	 
	 or o (cout, carry_1, carry_2);
    
endmodule

module Somador4Bits (a1, a2, b1, b2, c1, c2, d1, d2, soma1, soma2, soma3, soma4, cout);
	input a1, a2, b1, b2, c1, c2, d1, d2;
	output soma1, soma2, soma3, soma4, cout;
	
	wire carry_1, carry_2, carry_3;
	
	meio_somador2 s1 ( a1, a2, soma1, carry_1);
	meio_somador3 s2 ( b1, b2, carry_1, soma2, carry_2);
	meio_somador3 s3 ( c1, c2, carry_2, soma3, carry_3);
	meio_somador3 s4 ( d1, d2, carry_3, soma4, cout);
	
endmodule

module separa ( A, B, C, D, E, z0, z1, z2, z3, z4);
	input A, B, C, D, E;
	output z0, z1, z2, z3, z4;
	
	assign z0 = (~A&E) | (~B&~C&~D&E);
	assign z1 = (~A&~B&D) | (~A&B&C&~D) | (A&~B&~C&~D);
	assign z2 = (~A&~B&C) | (~A&C&D) | (A&~B&~C&~D);
	assign z3 = (~A&B&~C&~D) | (A&~B&~C&D&~E);
	assign z4 = (~A&B&D) | (~A&B&C) | (A&~B&~C&~D) | (A&~B&~C&~E);

endmodule

module decodificacao ( A, B, C, D, h0, h1, h2, h3, h4, h5, h6);
	input A, B, C, D;
	output h0, h1, h2, h3, h4, h5, h6;
	
	assign h0 = (~A&~B&~C&D) | (~A&B&~C&~D);
	assign h1 = (~A&B&~C&D) | (~A&B&C&~D);
	assign h2 = ~A&~B&C&~D;
	assign h3 = (~A&B&~C&~D) | (~A&~B&~C&D) | (~A&B&C&D);
	assign h4 = (~A&D) | (~A&B&~C) | (~B&~C&D);
	assign h5 = (~A&~B&D) | (~A&C&D) | (~A&~B&C);
	assign h6 = (~A&~B&~C) | (~A&B&C&D);
	
endmodule

module projeto (a1, a2, b1, b2, c1, c2, d1, d2, h00, h01, h02, h03, h04, h05, h06, h10, h11, h12, h13, h14, h15, h16);
	input a1, a2, b1, b2, c1, c2, d1, d2;
	output h00, h01, h02, h03, h04, h05, h06, h10, h11, h12, h13, h14, h15, h16;
	wire z0, z1, z2, z3, z4, z5, z6, z7;
	
	wire s1, s2, s3, s4, cout;
	
	Somador4Bits soma ( a1, a2, b1, b2, c1, c2, d1, d2, s1, s2, s3, s4, cout);
	separa s (s1, s2, s3, s4, cout, z0, z1, z2, z3, z4);
	
	assign z5 = 0;
	assign z6 = 0;
	assign z7 = 0;
	
	decodificacao dec1 ( z3, z2, z1, z0, h00, h01, h02, h03, h04, h05, h06);
	decodificacao dec2 ( z7, z6, z5, z4, h10, h11, h12, h13, h14, h15, h16);
	
endmodule
