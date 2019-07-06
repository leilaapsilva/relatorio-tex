%Fatos
mamifero(gato).
mamifero(cachorro).





%%pai_de(joao,pedro).			%joao é pai de pedro
bonita(maria).				%maria é bonita
gosta_de(ana,vinho).		%ana gosta de vinho
ordem(1,3,4,8).				% 1, 3 , 4  e 8 estão numa relação de ordem.

pai_de(henrique_pai, henrique).  %1
pai_de(henrique_pai, maria). 	 %2
pai_de(henrique, elizabeth2).    %3
pai_de(henrique, eduardo).	     %4
homem(henrique_pai).			 %5
homem(henrique).				 %6
homem(eduardo). 				 %7
mulher(catarina). 			     %8
mulher(elizabeth1). 			 %9
mulher(maria). 					 %10
mulher(elizabeth2). 			 %11
mulher(ana). 					 %12
mulher(jane). 					 %13

mulher(ana).
mulher(pat).
mae_de(catarina, maria). 		 %14
mae_de(ana, elizabeth2). 		 %15
mae_de(jane, eduardo).			 %16
mae_de(elizabeth1, henrique).	 %17

%gosta(X,X). % tenha auto-estima, caramba
gosta(joao, jazz).
gosta(joao, marcia).
gosta(joao, feijoada).
gosta(marcia, joao).
gosta(marcia, feijoada).



%Regras
filho_de(Y,X)    :- pai_de(X,Y), homem(Y). 		%18
pai_ou_mae(tom,bob).
pai_ou_mae(tom,liz).
pai_ou_mae(bob,ana).
pai_ou_mae(bob,pat).
pai_ou_mae(pat,jim).
pai_ou_mae(X,Y)  :- pai_de(X,Y). 				%19
pai_ou_mae(X,Y)  :- mae_de(X,Y). 				%20
predecessor(X,Y) :- pai_de(X,Y). 				%21
predecessor(X,Y) :- pai_de(X,Z),
	predecessor(Z,Y). 							%22


irma(X,Y) :- pai_ou_mae(Z,X), pai_ou_mae(Z,Y),
 mulher(X), X \= Y.

positivo(N) :- N>0.
negativo(N) :- N<0.

%%member	
	pertence(X,[X|_]).					% Um elemento pertence à uma lista se ele é a cabeça da lista
	pertence(X,[_|Y]) :- pertence(X,Y). % Um elemento pertence à uma lista se pertence à sua cauda(que é uma lista e também tem cabeça).


%Objetos estruturados ( estruturas) 			funtor(atb1, atb2, atbN)

	%semana(dom,seg,ter,qua,qui,sex,sab)
	%autor(‘Jorge Amado’) 
	%data(22,outubro,2002)
	%pares(2,4,6)
	%diasSemana(util(seg,ter,qua,qui,sex),fim(sab,dom))			%Podem ser compostos por outras estruturas

%Um objeto estruturado tem a MESMA SINTAXE que uma relação (estrutura de predicado), porém, a SEMÂNTICA é DISTINTA 
%data(22,julho,2018). é verdadeiro ou falso?!?!?!?!??!						%Palavra Chave - Contexto
%Objetos estruturados só podem ser termos de relações, não podem ser explicitados ou provados
	%Correto : ama(pai(ricardo), ricardo).
	%Wrong   : pai(ricardo).			

 %  Conseqüente :- Antecedente.
 	% Se Antecedente, então Conseqüente
 		%(cabeça, uma relação simples) :- (corpo, uma composição de relações, conjunções, disjunções, negações etc)
%conjuncao 	,
%disjuncao 	;
%negacao   	not(clausula)

agil(joao).
veloz(joao).
lento(joao).
rapido(joao).
rapido(X) :- agil(X); veloz(X), not(lento(X)).

%Unificação entre valores ou variáveis simples : =
%	– Exemplo: ?- 4 = 4. true
%	  Igualdade entre valores simples ou variáveis que já
%	possuam valores : ==
%		– Exemplo: ?- Y = 2, X = 3, X == Y. false.
%	  Diferença: \= (possui versões com “<>”)
%		– Exemplo: ?- 2 \= 5. true


%atribuicao de aritmetico à variavel simples: is
%	?- 14 is 2*7. true. 

%Quando os dois lados são resultados aritméticos (inclusive tipos diferentes): =:=
% Exemplo: ?- 2*9 =:= 3*6. true.
% Contra-exemplo: ?- 2*9 is 3*6. false

%+,-,(/)/, **


%inserirPrimeiro(X,L,R)
inserirPrimeiro(X,L,[X|L]).

%addUltimo(X,L,R).
addUltimo(X,[],[X]).
addUltimo(X,[Cabeca|Cauda], [Cabeca|CaudaResult]) :- addUltimo(X,Cauda,CaudaResult). 


%%retirarPrimeira Ocorrencia do eleemento
%retirar_Elemento(X,L,R).
%retirar_Elemento(X,[],[]).
retirar_Elemento(X,[X|Y],Y).
retirar_Elemento(X,[Cabeca|Cauda],[Cabeca|Resultado]) :- retirar_Elemento(X, Cauda, Resultado).

%%remove_todos
remove_todos(X,[],[]).											%Se lista vazia, remove todos dá propria lista
remove_todos(X,[X|Cauda1], Resultado) :-
		 remove_todos(X,Cauda1,Resultado).  %Se X e a cabeca, resultado é valido se remove_todos na cauda for o mesmo)

remove_todos(X,[Cabeca|Cauda], [Cabeca|CaudaResposta]) :-		%Se X nao for cabeca, R é [cabeca + resposta do remove na cauda
				 X \== Cabeca, remove_todos(X,Cauda,CaudaResposta).


%Concatena(L1,L2,L3)
concatena([],[],[]).
concatena(X,[],X).
concatena([],X,X).
concatena([Cabeca|Cauda], L2, [Cabeca|Resultado]) :- concatena(Cauda,L2,Resultado).






  

