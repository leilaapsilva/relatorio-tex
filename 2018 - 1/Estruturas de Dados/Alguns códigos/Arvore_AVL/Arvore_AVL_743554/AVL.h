#ifndef AVL_H
#define AVL_H

typedef int TipoChave;

typedef struct {
	TipoChave Chave;

	// Outras cossitas
	/* nome, rg, endereco, saldo devedor bla bla bla */
} TipoItem;

typedef struct TipoNo {
	TipoItem Item;
	struct TipoNo *esq, *dir;
	int altura; // altura daquela sub-arvore
} TipoNo;

typedef struct TipoNo *TipoApontador;
typedef TipoApontador TipoArvoreAVL;


void CriaArvore(TipoArvoreAVL *A);
void CriaRaiz(TipoArvoreAVL *A, TipoItem I);

void RotacaoLL(TipoArvoreAVL *A);
void RotacaoRR(TipoArvoreAVL *A);
void RotacaoRL(TipoArvoreAVL *A);
void RotacaoLR(TipoArvoreAVL *A);

int Insere(TipoArvoreAVL *A, TipoItem I);
int altura_NO(TipoNo* no);
int fatBalance_NO(TipoNo* no);
int maior(int x, int y);

TipoItem Pesquisa(TipoArvoreAVL *A, TipoChave C);
int Remove(TipoArvoreAVL *A, int valor);
int consulta(TipoArvoreAVL *A, int valor);

TipoNo* procuraMenor(TipoNo* atual);

void visita(TipoArvoreAVL A);
void PreOrdem(TipoArvoreAVL A);
void emOrdem(TipoArvoreAVL A);
void PosOrdem(TipoArvoreAVL A);

void static achaMenorETroca(TipoArvoreAVL *A, TipoArvoreAVL *Atual);
void static achaMaiorETroca(TipoArvoreAVL *A, TipoArvoreAVL *Atual);

#endif
