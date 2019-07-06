%% fatos
pai_de(henrique_pai,henrique).
pai_de(henrique_pai,maria).
pai_de(henrique,elizabeth2).
pai_de(henrique,eduardo).

homem(henrique_pai).
homem(henrique).
homem(eduardo).

mulher(catarina).
mulher(elizabeth1).
mulher(maria).
mulher(elizabeth2).
mulher(ana).
mulher(jane).

mae_de(catarina,maria).
mae_de(ana, elizabeth2).
mae_de(jane, eduardo).
mae_de(elizabeth1,henrique).



%regras
filho_de(Y,X) :- pai_de(X,Y), homem(Y).
filha_de(Y,X) :- pai_de(X,Y), mulher(Y).

pai_ou_mae(X,Y) :- pai_de(X,Y).
pai_ou_mae(X,Y) :- mae_de(X,Y).

avo_de(X,Y) :- pai_de(X,Z), pai_ou_mae(Z,Y).
avoh_de(X,Y) :- mae_de(X,Z), pai_ou_mae(Z,Y).


predecessor(X,Y) :- pai_ou_mae(X,Y).
predecessor(X,Y) :- pai_ou_mae(X,Z), predecessor(Z,Y).



pertence(X,[X|Y]).
pertence(X,[Z|Y]) :- pertence(X,Y).







