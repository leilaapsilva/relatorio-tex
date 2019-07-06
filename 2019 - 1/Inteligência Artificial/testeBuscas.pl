% definir regra de sucessao
%Definir Meta
%Definir estado Inicial

pertence(X,[X|_]).
pertence(Z,[_|Y]) :- pertence(Z,Y).

retirar_elemento(Elem,[Elem|Cauda],Cauda).

retirar_elemento(Elem,[Cabeca|Cauda],[Cabeca|Resultado]) :-
	retirar_elemento(Elem,Cauda,Resultado).


concatena([],L,L).
concatena([Cab|Cauda],L2, [Cab|Resultado]) :-
		concatena(Cauda, L2, Resultado).




% sucessoes
s(X, [P1, [C1|L2] |Resto])	:-
	retirar_elemento([C1|P1], X, Outros), 	%acha P1
	retirar_elemento(L2, Outros, Resto),	%acha L2
	not((P1 = [ ], L2 = [ ])). 				%evite formar pilha igual 

meta(X) :- pertence([a,b,c], X).


solucao_bl(Inicial, Solucao) :- 
	bl([[Inicial]], Solucao).

bl([[Estado|Caminho]|_],[Estado|Caminho]) :-
		meta(Estado).

%estende usara s para listar os sucessores e adicionar na fronteira