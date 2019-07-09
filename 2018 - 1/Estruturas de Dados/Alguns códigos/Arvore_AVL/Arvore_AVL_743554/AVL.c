#include <stdio.h>
#include <stdlib.h>
#include "AVL.h"



void CriaArvore(TipoArvoreAVL *A) {
	*A = NULL;
}

void CriaRaiz(TipoArvoreAVL *A, TipoItem I) {

	*A = (TipoArvoreAVL) malloc(sizeof(TipoNo));

	(*A)->Item = I;
	(*A)->esq = NULL;
	(*A)->dir = NULL;

}

void RotacaoLL(TipoArvoreAVL *A){// duas ultimas inserções ( Left - Left ) , mesmo alinhamento ( ou ainda, sem "joelho")
    printf("RotacaoSimples a Direita!\n");
    TipoNo *B;
    B = (*A)->esq;
    (*A)->esq = B->dir;
    B->dir = *A;
    (*A)->altura = maior(altura_NO((*A)->esq),altura_NO((*A)->dir)) + 1;
    B->altura = maior(altura_NO(B->esq),(*A)->altura) + 1;
    *A = B;
}

void RotacaoRR(TipoArvoreAVL *A){// duas ultimas inserções ( Right - Right ) , mesmo alinhamento ( ou ainda, sem "joelho")

    printf("RotacaoSimples A Esquerda!\n");
    TipoNo *B;
    B = (*A)->dir;
    (*A)->dir = B->esq;
    B->esq = (*A);
    (*A)->altura = maior(altura_NO((*A)->esq),altura_NO((*A)->dir)) + 1;
    B->altura = maior(altura_NO(B->dir),(*A)->altura) + 1;
    (*A) = B;
}

void RotacaoLR(TipoArvoreAVL *A){// Rotações compostas foram implementadas utilizando-se as simples.
    // ultimos inseridos à esquerda e depois direita
    RotacaoRR(&(*A)->esq);
    RotacaoLL(A);
}

void RotacaoRL(TipoArvoreAVL *A){//RL
    // ultimos inseridos à direita e depois esquerda
    RotacaoLL(&(*A)->dir);
    RotacaoRR(A);
}



int Insere(TipoArvoreAVL *A, TipoItem I) {
   int auxil;
    if(*A == NULL){//árvore vazia ou nó folha
        TipoNo *novo;
        novo = (TipoNo*)malloc(sizeof(TipoNo));
        if(novo == NULL)
            return 0;

        novo->Item = I;
        novo->altura = 0;
        novo->esq = NULL;
        novo->dir = NULL;
        *A = novo;
        return 1;
    }

    TipoNo *atual = *A;
    if(I.Chave < atual->Item.Chave){
        if((auxil = Insere(&(atual->esq), I)) == 1){
            if(fatBalance_NO(atual) >= 2){
                if(I.Chave < (*A)->esq->Item.Chave){
                    RotacaoLL(A);
                }else{
                    RotacaoLR(A);
                }
            }
        }
    }else{
        if(I.Chave > atual->Item.Chave){
            if((auxil = Insere(&(atual->dir), I)) == 1){
                if(fatBalance_NO(atual) >= 2){
                    if((*A)->dir->Item.Chave < I.Chave){
                        RotacaoRR(A);
                    }else{
                        RotacaoRL(A);
                    }
                }
            }
        }else{
            printf("Valor duplicado!!\n");
            return 0;
        }
    }

    atual->altura = maior(altura_NO(atual->esq),altura_NO(atual->dir)) + 1;

    return auxil;
}

int altura_NO(TipoNo* no){ // usada pra tratar o balanceamento
    if(no == NULL)
        return -1;
    else
    return no->altura;
}

  int fatBalance_NO(TipoNo* no){
    return labs(altura_NO(no->esq) - altura_NO(no->dir)); // retorna o valor absoluto dos argumentos -> labs

}


int maior(int x, int y){ // auxiliar no balanceamento
    if(x > y)
        return x;
    else
        return y;
}


TipoItem Pesquisa(TipoArvoreAVL *A, TipoChave C) {

    TipoItem I;

    if ((*A) == NULL) { //nao achou
        I.Chave = -1;
//        strcpy(I.Numeral, "|ERRO|");
        return I;
    }

    // ACHOU!
    if (C == (*A)->Item.Chave)
        return (*A)->Item;


    if (C > (*A)->Item.Chave) { // direita
        return Pesquisa(&(*A)->dir, C);
    } else { // esquerda
        return Pesquisa(&(*A)->esq, C);
    }

}

void static achaMenorETroca(TipoArvoreAVL *A, TipoArvoreAVL *Atual) {

    if ((*Atual)->esq == NULL) { // mais a direita possivel
        (*A)->Item = (*Atual)->Item;
        TipoApontador p = (*Atual); // guarda para apagar
        (*Atual) = (*Atual)->dir;
        free(p);
    } else {
        achaMenorETroca(A, &(*Atual)->esq);
    }

}

void static achaMaiorETroca(TipoArvoreAVL *A, TipoArvoreAVL *Atual) {

    if ((*Atual)->dir == NULL) { // mais a direita possivel
        (*A)->Item = (*Atual)->Item;
        TipoApontador p = (*Atual); // guarda para apagar
        (*Atual) = (*Atual)->esq;
        free(p);
    } else {
        achaMaiorETroca(A, &(*Atual)->dir);
    }

}

TipoNo* procuraMenor(TipoNo* atual){
    TipoNo* no1 = atual;
    TipoNo* no2 = atual->esq;
    while(no2 != NULL){
        no1 = no2;
        no2 = no2->esq;
    }
    return no1;
}


int Remove(TipoArvoreAVL *A, int valor){
	if(*A == NULL){// valor não existe
	    printf("valor não existe!!\n");
	    return 0;
	}

    int res;
	if(valor < (*A)->Item.Chave){
	    if((res = Remove(&(*A)->esq,valor)) == 1){
            if(fatBalance_NO(*A) >= 2){
                if(altura_NO((*A)->dir->esq) <= altura_NO((*A)->dir->dir))
                    RotacaoRR(A);
                else
                    RotacaoRL(A);
            }
	    }
	}

	if((*A)->Item.Chave < valor){
	    if((res = Remove(&(*A)->dir, valor)) == 1){
            if(fatBalance_NO(*A) >= 2){
                if(altura_NO((*A)->esq->dir) <= altura_NO((*A)->esq->esq) )
                    RotacaoLL(A);
                else
                    RotacaoLR(A);
            }
	    }
	}

	if((*A)->Item.Chave == valor){
	    if(((*A)->esq == NULL || (*A)->dir == NULL)){// nó tem 1 ou 0 filhoss
			struct NO *oldNode = (*A);
			if((*A)->esq != NULL)
                *A = (*A)->esq;
            else
                *A = (*A)->dir;
			free(oldNode);
		}else { // nó tem os 2 filhos
			TipoNo* temp = procuraMenor((*A)->dir);
			(*A)->Item.Chave = temp->Item.Chave;
			Remove(&(*A)->dir, (*A)->Item.Chave);
            if(fatBalance_NO(*A) >= 2){
				if(altura_NO((*A)->esq->dir) <= altura_NO((*A)->esq->esq))
					RotacaoLL(A);
				else
					RotacaoLR(A);
			}
		}
		if (*A != NULL)
            (*A)->altura = maior(altura_NO((*A)->esq),altura_NO((*A)->dir)) + 1;
		return 1;
	}

	(*A)->altura = maior(altura_NO((*A)->esq),altura_NO((*A)->dir)) + 1;

	return res;
}


 /*         OBSOLETE Remove() : ignore
  void Remove(TipoArvoreAVL *A, TipoChave C) {

    if ((*A) == NULL) { // nao achou
        printf("ERRO ao remover: nao encontrou a chave\n");
        return;
    }

    if (C > (*A)->Item.Chave) { // direita
        //printf("(%d, %d) dir ->\n", C, (*A)->Item.Chave);
        return Remove(&(*A)->dir, C);
    } else if (C < (*A)->Item.Chave) { // esquerda
        //printf("(%d, %d) <- esq\n", C, (*A)->Item.Chave);
        return Remove(&(*A)->esq, C);
    }

    // se chegou aqui, eh pq a chave eh igual
    TipoApontador p;

    // Dá para tirar um desses ifs. Respondam como fariam isso.
    if ((*A)->esq == NULL && (*A)->dir == NULL) { //folha
        p = *A;
        *A = NULL; //vai fazer o ponteiro dir ou esq chamado recursivamente apontar para nulo
        free(p);
    } else if ((*A)->esq == NULL) { //soh tem o da direita
        p = *A;
        *A = (*A)->dir;
        free(p);
    } else if ((*A)->dir == NULL) { //soh tem o da esquerda
        p = *A;
        *A = (*A)->esq;
        free(p);
    } else {
        achaMaiorETroca(A, &(*A)->esq); // OU
        //achaMenorETroca(A, &(*A)->dir);
    }

} */

int consulta(TipoArvoreAVL *A, int valor){
if(A == NULL)
    return 0;
struct TipoNo* atual = *A;
while(atual != NULL){
    if(valor == atual->Item.Chave){
        return 1;
    }
    if(valor > atual->Item.Chave){
        atual = atual->dir;
    }
    else {
        atual = atual->esq;
    }
}
return 0;
}

void visita(TipoArvoreAVL A) {
	printf("%d ", A->Item.Chave);
}

void PreOrdem(TipoArvoreAVL A) {
	if (A == NULL) return; // usar pra passar raiva
	visita(A);
	PreOrdem(A->esq);
	PreOrdem(A->dir);
}
void emOrdem(TipoArvoreAVL A) {
	if (A == NULL) return; // usar pra ver sequências bonitas
	emOrdem(A->esq);
	visita(A);
	emOrdem(A->dir);
}
void PosOrdem(TipoArvoreAVL A) {
	if (A == NULL) return; // usar pra apagar toda uma arvore rs
	PosOrdem(A->esq);
	PosOrdem(A->dir);
	visita(A);
}
