#include "lista.h"
#include <stdio.h>

int main(int argc, char *argv[]){
struct Lista lista;
    create(&lista);

    inserir(&lista, 987);
    inserir(&lista, 712);
    inserir(&lista, 543);
    inserir(&lista, 1276);
    inserir(&lista, 7);
    inserir(&lista, 99);

    inserir(&lista, 987);

    while(!isEmpty(lista)){
        int e = retirar(&lista);
        printf("Elemento retirado = %d \n", e);
    }
    return 0;


}
