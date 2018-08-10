#include <stdio.h>
#include <stdlib.h>
#include "lista.h"



void create(struct Lista *lista){
    lista->inicio = NULL;
}
void inserir(struct Lista *lista,int elemento){
    struct Node *novo;
    novo = (struct Node)* malloc(sizeof(struct Node));
    novo->proximo = NULL;
    novo->elemento = elemento;
    if(lista->inicio == NULL){
        lista->inicio = novo;
    }
    else{
        aux = lista->inicio;
        while(aux->proximo != NULL){
            aux = aux->proximo;
        }
        aux->proximo = novo;
    }

}
int isEmpty(struct Lista lista){
    return(lista.inicio == NULL);
}
int retirar(struct Lista *lista){
    struct Node *aux = lista->inicio;
    int elemento = aux->elemento;
    lista->inicio = aux->proximo;
    free(aux);
    aux = NULL;
    return elemento;
}
void listar(struct Lista lista){

}
