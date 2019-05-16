%Autores: Vitor Hugo Chaves Cambui - 744358 & João Vitor Azevedo Marciano - 743554


%Remove os parenteses de tudo da lista, deixando tudo no mesmo nÃ­vel.
desparentiza([],[]):-!.																
desparentiza([X|Y],[X|Z]):- atomic(X), desparentiza(Y,Z).
desparentiza([X|Y],Z):- is_list(X),desparentiza(X,L),
				desparentiza(Y,L1),append(L,L1,Z),!.
desparentiza([X|Y],Z):- var(X), desparentiza(Y,Z).
desparentiza([X|Y],[X|Z]):- desparentiza(Y,Z).


%Tira elementos duplicados em uma lista.
tira_duplicatas([],[]).
tira_duplicatas([X|Y],Lout):-member(X,Y),tira_duplicatas(Y,Lout).
tira_duplicatas([X|Y],[X|Lout]):-not(member(X,Y)),
								tira_duplicatas(Y,Lout).

%Pega duas listas, e salva em uma terceria todos os elementos da primeira que nÃ£o estÃ£o na segunda.
remove_comuns([],_,[]):-!.
remove_comuns([X|Y],L2,Lout):-member(X,L2),
		remove_comuns(Y,L2,Lout),!.
remove_comuns([X|Y],L2,[X|Lout]):-remove_comuns(Y,L2,Lout),!.

%Pega duas listas, e coloca em uma terceira os elementos que nÃ£o estÃ£o na intersecÃ§Ã£o das duas primeiras.
remove(L1,L2,L3):-remove_comuns(L1,L2,L4),remove_comuns(L2,L1,L5), append(L4,L5,L3).

%Conta quantas vezes o elemento X se repete na lista L e retorna em N
contador(_,[],0):-!.
contador(X,[X|L],N):-contador(X,L,NewN), N is NewN+1,!.
contador(X,[_|L],N):-contador(X,L,N).

%Pega um elemento X e um numero N e monta um par da forma [X,N]
montar_pares(X,N,[X,N]).

% Pega uma lista L, conta os átomos na lista, e monta uma lista com o
% par de [Átomo, Numero de ocorrências]
conta_atomos([],_,[]):-!.
conta_atomos([X|Y],L1,[L2|Lout]):-contador(X,L1,N), 
			montar_pares(X,N,L2), conta_atomos(Y,L1,Lout).

% Pega uma Lista e retorna em L2 a lista após contar os pares e remover
% as repetições
monta_pares(Lin,Lout):-conta_atomos(Lin,Lin,Lt),
		tira_duplicatas(Lt,Lout).

% Lê duas listas de entrada, faz o nivelamento nas duas, remove os
% elementos comuns às duas listas, e monta os pares conforme o
% enunciado.
main(Lout):-read(L1),read(L2),desparentiza(L1,L3),
						desparentiza(L2,L4),remove(L3,L4,L5),
						monta_pares(L5,Lout).

