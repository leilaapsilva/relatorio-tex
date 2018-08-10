#include "Pilha.h"

void create(struct Pilha *p){
p->topo = -1;

}
void push(struct Pilha *p, int elemento){
p->topo++;
p->valores[p->topo] = elemento;

}
int pop(struct  Pilha *p){
    if(!isEmpty(*p)){
int elemento = p->valores[p->topo];
p->topo--;}
else{printf("Ta vazia animal\n");}
}
int isEmpty(struct Pilha p){
    return (p.topo == -1);
}

int isFull(struct Pilha p){return p.topo == 9;}

