%Podemos definir um estado utilizando uma estrutura %que combine quatro informações:
	% Posição horizontal do macaco (na_porta, na_janela)
	% Posição vertical do macaco (no_chao, acima_caixa)
	% Posição da caixa (na_porta, na_janela)
	% Se o macaco tem ou não tem a banana (tem,nao_tem)

%Estrutura do estado
	%estado(posicao_horizontal, posicao_vertical, posicao_da_caixa, tem_ou_nao_banana).
%estadoInicial	
	estado(na_porta,no_chao,na_porta,nao_tem).

%estadoObjetivo
	estado(_,_,_,tem).
%Ações alteram Estados
%Estrutura das Ações
	%acao(nome, estado1, estado2).


acao(pegar_banana,estado(na_porta,acima_caixa,na_porta,nao_tem),
			      estado(na_porta,acima_caixa,na_porta,tem)) :- write('1 ').

acao(subir, estado(Pos,no_chao,Pos,Banana),
			estado(Pos,acima_caixa,Pos,Banana)) :- write('2 ').

acao(empurrar_janela, estado(na_porta,no_chao,na_porta,Banana),
				     estado(na_janela,no_chao,na_janela,Banana)) :- write('3 ').

acao(empurrar_porta, estado(na_janela,no_chao,na_janela,Banana),
				     estado(na_porta,no_chao,na_porta,Banana)):- write('5 ').

acao(mover_janela, estado(na_porta, no_chao,Caixa,Banana), 
				   estado(na_janela,no_chao,Caixa,Banana)) :- write('5 ').

acao(mover_porta, estado(na_janela,no_chao,Caixa,Banana),
				  estado(na_porta,no_chao,Caixa,Banana)) :- write('6 ').


consegue(estado(na_porta,no_chao,na_janela,nao_tem)) :- write('7 ').


consegue(Estado2):- write('8.1 '), 
	consegue(Estado1), write('8.2 '),
	acao(_,Estado1,Estado2). 
