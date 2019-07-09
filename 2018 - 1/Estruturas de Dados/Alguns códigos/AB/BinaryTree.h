#ifndef BINARYTREE_H
#define BINARYTREE_H

typedef char TipoChave;

typedef struct {
	TipoChave Chave;
	/* Outros campos */
} TipoItem;

typedef struct TipoNo *TipoApontador;

typedef struct TipoNo {
	TipoItem Item;
	struct TipoNo *esq, *dir;
} TipoNo;

typedef TipoApontador TipoArvore;


void CriaArvore(TipoArvore *A);
void CriaRaiz(TipoArvore *A, TipoItem I);
void InsereDireita(TipoArvore A, TipoItem item);
void InsereEsquerda(TipoArvore A, TipoItem item);

void visita(TipoArvore A);
void preOrdem(TipoArvore A);
void emOrdem(TipoArvore A);
void posOrdem(TipoArvore A);


#endif
