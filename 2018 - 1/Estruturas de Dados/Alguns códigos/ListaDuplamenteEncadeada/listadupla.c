#include "listadupla.h"
#include <stdio.h>
#include <stdlib.h>





void Create(struct ListaDupla *lista){
    lista->inicio = NULL;



}
int isEmpty(struct ListaDupla *lista){
    return (lista->inicio == NULL);


}
void Inserir(struct ListaDupla *lista, int elemento){
        struct DoubleNode *novo = (struct  DoubleNode*) malloc(sizeof(struct DoubleNode));
        novo->elemento = elemento;

        if(lista->inicio == NULL){
            novo->dir = novo;
            novo->esq = novo;
            lista->inicio = novo;
        }
        else{
            struct DoubleNode *aux = lista->inicio;
            while(aux->dir != lista->inicio) {
                aux = aux->dir;
            }
                novo->dir = lista->inicio;
                aux->dir = novo;
                novo->esq = aux;
                lista->inicio->esq = novo;





            }


        }


void exibirNaOrdem(struct ListaDupla *lista){
    struct DoubleNode *tmp = lista->inicio;
    do{
       printf("Elemento da linha = %d\n", tmp->elemento);
       tmp = tmp->dir;


    }while(tmp != lista->inicio);


}
