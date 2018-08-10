#include <stdbool.h>

struct Fila{
 int primeiro;
 int ultimo;
 int elementos[10];
 int total;








};
     void Cria();
     void Insere(struct Fila *f, int elem);
     int Retira(struct Fila *f);
     int Cheia(struct Fila f);
     int Vazia(struct Fila f);
