#include "Fila.h"
#include <stdio.h>
#include <stdbool.h>




        void Cria(struct Fila *f){
          f->primeiro = 0;
          f->ultimo = 0;
          f->total = 0;

      }
   void Insere(struct Fila *f, int elem){
            f->elementos[f->ultimo] = elem;
            f->ultimo = (f->ultimo+1) % 10;
            f-> total = f->total + 1;
            printf("Inserindo %d \n", elem );
    }
     int Retira(struct Fila *f ){
        int elem = f->elementos[f->primeiro];
        f->primeiro = (f->primeiro +1 ) %10;
            f-> total = f->total - 1;
        return elem;

    }
     int Cheia(struct Fila f){
        return (f.total == 10);

    }
     int Vazia(struct Fila f){
            return (f.total == 0);
}
