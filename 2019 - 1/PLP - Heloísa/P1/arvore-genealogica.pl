%%%%fatos
progenitor(maria,joao).
progenitor(jose,joao).
progenitor(maria,ana).
progenitor(jose,ana).
progenitor(joao,mario).
progenitor(ana,helena).
progenitor(ana,joana).
progenitor(helena,carlos).
progenitor(mario,carlos).

sexo(ana,feminino).
sexo(maria,feminino).
sexo(joana,feminino).
sexo(helena,feminino).
sexo(mario,masculino).
sexo(joao,masculino).
sexo(jose,masculino).
sexo(carlos,masculino).

%%%%%regras

irma(X,Y) :- progenitor(A,X), progenitor(A,Y), X\==Y, sexo(X,feminino). 

irmao(X,Y) :- progenitor(A,X), progenitor(A,Y), X\==Y, sexo(X,masculino). 

avo(X,Y) :- progenitor(X,A), progenitor(A,Y), sexo(X,masculino).
mae(X,Y) :- progenitor(X,Y), sexo(X,feminino).
pai(X,Y) :- progenitor(X,Y), sexo(X,masculino).

tio(X,Y) :- irmao(X,A), progenitor(A,Y).
tio(X,Y) :- irma(X,A), progenitor(A,Y).
primo(X,Y) :- irmao(A,B), progenitor(A,X), progenitor(B,Y), X\==Y.
primo(X,Y) :- irma(A,B),  progenitor(A,X), progenitor(B,Y), X\==Y.

filho(X,Y) :- progenitor(Y,X).



