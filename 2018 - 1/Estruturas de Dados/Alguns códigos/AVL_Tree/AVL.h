#ifndef AVL_H
#define AVL_H


typedef char TipoChave;

typedef struct {
	TipoChave Chave;
	char Numeral[100];
	/* Outros campos */
} TipoItem;

typedef struct TipoNo {
	TipoItem Item;
	struct TipoNo *esq, *dir;
} TipoNo;

typedef struct TipoNo *TipoApontador;
typedef TipoApontador TipoArvore;


void CriaArvoreAVL(TipoArvore *A);
void CriaRaiz(TipoArvore *A, TipoItem I);

void Insere(TipoArvore *A, TipoItem I);
TipoItem Pesquisa(TipoArvore *A, TipoChave C);
void Remove(TipoArvore *A, TipoChave C);
int consulta(TipoArvore *A, int valor);

void visita(TipoArvore A);
void emOrdem(TipoArvore A);


#endif
