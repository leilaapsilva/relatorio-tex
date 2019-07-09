#include <stdio.h>
#include <stdlib.h>

#include "AVL.c"

int main() {


    TipoArvoreAVL tr;
    int i;

    int n = 10, dados[10] = {1,2,3,10,4,5,9,7,8,6};
    printf("\n\n");
    printf("\nSera criada uma arvore com os elementos{1,2,3,10,4,5,9,7,8,6} , inseridos nessa ordem.\n");

    CriaArvore(&tr);

     printf("\nAtencao: as rotacoes duplas/compostas foram implementadas com chamadas das rotacoes simples. \nSe houver alguma duvida sobre o que esta acontecendo na main, eh melhor dar uma olhada no codigo.\n(ou desenhar um pouquinho/visualgo). \n");

    for(i=0;i<n;i++){
        printf("\n========================\n");
        printf("Inserindo: %d\n",dados[i]);
        TipoItem I;
        I.Chave = dados[i];
        Insere(&tr,I);
        printf("\nA Arvore ficou: \nEmOrdem() : \n");
        emOrdem(tr);

    }
    printf("\n========================\n");

    printf("\n\nA Arvore  entao ficou com:\n");
    printf("inOrdem(): ");
    emOrdem(tr);
    printf("\n\n");



    TipoItem ia;
    ia.Chave = 6;
    printf("\nRemovendo 6\n");
    Remove((&tr), ia.Chave);
    printf("inOrdem(): ");
    emOrdem(tr);
    printf("\n\n");


    ia.Chave = 7;
    printf("\nRemovendo 7\n");
    Remove(&tr, ia.Chave);
    printf("inOrdem(): ");
    emOrdem(tr);
    printf("\n\n");


    ia.Chave = 4;
    printf("\nRemovendo 4\n");
    Remove(&tr, ia.Chave);
    printf("inOrdem(): ");
    emOrdem(tr);
    printf("\n\n");


    printf("Abre o main e brinca ai, tchau o/\n");

    return 0;
}


