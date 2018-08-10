#include <stdio.h>
#include "Pilha.h"
#include <stdlib.h>



void Empilha(struct Pilha *p, int elemento){
        struct Node *novo = (struct Node*)malloc(sizeof(struct Node));
        novo->valor = elemento;
        novo->next = p->topo;
        p->topo = novo;

}
int Desempilha(struct Pilha *p){

        int elem;
        struct Node *topoAtual = p->topo;
        p->topo = topoAtual->next;
        elem = topoAtual->valor;
        free(topoAtual); // libera memória
        return elem;

}
void Cria(struct Pilha *p){
    p->topo = NULL;

}
int Vazia(struct Pilha *p){
    return p->topo == NULL;

}
int Cheia(struct Pilha *p){

    return 1;

}
