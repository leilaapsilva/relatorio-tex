#include <stdio.h>

struct Node{
    int valor;
    struct Node *next;


};
struct Pilha{
    struct Node *topo;

};


void Empilha(struct Pilha *p, int elemento);
int Desempilha(struct Pilha *p);
void Cria(struct Pilha *p);
int Vazia(struct Pilha *p);
int Cheia(struct Pilha *p);

