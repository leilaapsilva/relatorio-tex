#include "f

void create(struct Fila *f){
    f->inicio = 0;
    f->fim = 0;
    f->total = 0;


}
 void inserir(struct Fila *f, int ele){{
    f->elementos[f->fim] = elementos;
    f->fim = (f->fim + 1) % 10;
    f->total++;

}
int retirar(struct Fila *f){
    int el = f->inicio;
    f->inicio = (f->inicio + 1)%10;
    f->total--;
    return el;

}
int isEmpty(struct Fila f){
    return (f.total == 0);

}
int isFull(struct Fila f){
    return (f.total == 10);


}
