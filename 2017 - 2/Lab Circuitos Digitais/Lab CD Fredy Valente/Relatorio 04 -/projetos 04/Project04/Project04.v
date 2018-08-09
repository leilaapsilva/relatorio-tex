
 
module meio_somador (a, b, s, c);
input  a, b;
output s, c;
assign s = a ^ b;
assign c = a & b;
endmodule



/*

module MEIO_SOMADOR (A, B, S, C);
input  A, B;
output S, C;
wire A_inv, B_inv, D;
nor U1(A_inv, A, A);
nor U2(B_inv, B, B);
nor U3(D, A, B);
nor U4(C, A_inv, B_inv);
nor U5(S, C, D);
endmodule

*/ 