%fatos


retirar_elemento(Elem,[Elem|Cauda],Cauda).
retirar_elemento(Elem,[Elem1|Cauda],[Elem1|
Cauda1]) :- retirar_elemento(Elem,Cauda,Cauda1).

%regras


remover_todos(E,[],[]).
remover_todos(E,[E|Y],Res) :- remover_todos(E,Y,Res).
remover_todos(E,[Cabeca|Cauda], [Cabeca|CaudaResp]) :- remover_todos(E,Cauda,CaudaResp), Cabeca \= E.




%Concatena(L1,L2,L3)
concatena([],[],[]).
concatena(X,[],X).
concatena([],X,X).
concatena([Cabeca|Cauda], L2, [Cabeca|Resultado]) :- concatena(Cauda,L2,Resultado).

%soma(listaNumeros, resp).
soma([],0).
soma([X],X).
soma([X|Y],N) :- soma(Y,N1), N is N1 + X.


conta([],0).
%conta([X],1).
conta([X|Y], N) :- conta(Y,N1), N is N1 + 1.

conta_Ocorr(E,[],0).
conta_Ocorr(E,[E|Y], N) :- conta_Ocorr(E,Y,N1), N is N1 + 1.
conta_Ocorr(E,[H|Y], N) :- conta_Ocorr(E,Y,N), E \= H.

%com Cut
conta_ocorrr(Elem,[ ],0) :- !.
conta_ocorrr(Elem,[Elem|Y],N) :- conta_ocorrr(Elem,Y,N1), N is N1 + 1, !.
conta_ocorrr(Elem,[Elem1|Y], N) :- conta_ocorrr(Elem,Y,N).



%separa pos e neg
%separa(Lista,P,N).
separa([],[],[]).

separa([X|Y],[X|Z],    W) :- X > 0, separa(Y,Z,W).
separa([X|Y],  Z,  [X|W]) :- X < 0, separa(Y,Z,W).
separa([X|Y],Z,W) :- X==0, separa(Y,Z,W).


fatorial(N,F) :- N>=0, fat(N,F).
fat(0,1) :- !.
fat(N,F) :- N1 is N - 1, fat(N1,F1), F is F1 * N.


factorial(0,1). 
factorial(N,F) :-
   N>0,
   N1 is N-1,
   factorial(N1,F1),
   F is N * F1.



%Retorne o último elemento de uma lista
getLast([X],X).
getLast([X|Y],Z) :- getLast(Y,Z).
%Indique que dois elementos são consecutivos consec(L,X,Y)
not(consec([],X,Y)).
not(consec([_],X,Y)).
consec([X,Y|_],X,Y).
consec([_|Cauda],X,Y) :- consec(Cauda,X,Y). 

%Insira um elemento em qualquer posição da lista

















s(X, [P1, [C1|L2] | Resto ]):-
retirar_elemento([C1|P1], X, Outros),	 %acha P1
retirar_elemento(L2, Outros, Resto),		%acha L2
not((P1 = [ ], L2 = [ ])). 						%evite formar pilha igual 