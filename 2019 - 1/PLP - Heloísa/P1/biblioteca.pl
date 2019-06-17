

livro(nome('Paradigmas de LP'), autor('Schildt'), pal_chave([linguagemc, programacao,
computacao])).

livro(nome('LISP'), autor('Winston, P. ; Horn, B.'), pal_chave([lisp, programacao, list])).

livro(nome('Introdução à Programação Orientada a Objetos usando JAVA'), autor('Santos,
R.'), pal_chave([poo, classes, objetos])).


%pertence(X,[X|Y].
%pertence(X,[Z|Y]) :- pertence(X,Y).


busca_livro(Lista, Nome, Autor):-
 livro(nome(Nome), autor(Autor), pal_chave(Pal_chave)),
 tem_palavra(Lista,Pal_chave).

tem_palavra([X | Y], Lista):-
 member(X, Lista), !.

tem_palavra([X | Y], Lista):-
 tem_palavra(Y, Lista).


 comprimento([],0) :- !.
 comprimento([X|L],N) :- 
 	comprimento(L,N1), N is N1 + 1.

nPar(L) :- comprimento(L,C), C mod 2 =:= 0.
nImpar(L) :- comprimento(L,C), C mod 2 =\= 0.
