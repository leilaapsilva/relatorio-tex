#include <stdio.h>
#include <stdlib.h>

#include "BinaryTree.h"

void CriaArvore(TipoArvore *A) {
	*A = NULL;
}

void CriaRaiz(TipoArvore *A, TipoItem I) {

    *A = (TipoArvore) malloc(sizeof(TipoNo));
    
    (*A)->dir = NULL;
    (*A)->esq = NULL;
    (*A)->Item = I;
    
}

void InsereDireita(TipoArvore A, TipoItem item) {
    CriaRaiz(&A->dir, item);
}

void InsereEsquerda(TipoArvore A, TipoItem item) {
    CriaRaiz(&A->esq, item);
}



void visita(TipoArvore A) {
    printf("%c ", A->Item.Chave);
}

void preOrdem(TipoArvore A) {
    if (A != NULL) {
        visita(A);
        preOrdem(A->esq);
        preOrdem(A->dir);
    }
}

void emOrdem(TipoArvore A) {
    if (A != NULL) {
        emOrdem(A->esq);
        visita(A);
        emOrdem(A->dir);
    }
}

void posOrdem(TipoArvore A) {
    if (A != NULL) {
        posOrdem(A->esq);
        posOrdem(A->dir);
        visita(A);
    }
}






