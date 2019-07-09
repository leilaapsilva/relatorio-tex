#include <stdio.h>
#include <stdlib.h>
#include "Fila.h"

int main()
{
    printf("Aqui somos do banco ISI\n");
    struct Fila f;
    Cria(&f);


    Insere(&f, 345);
    Insere(&f, 917);
    Insere(&f, 14);
    Insere(&f, 872);
    Insere(&f, 5763);
    Insere(&f, 2);

    while(!Vazia(f)){
        int elem = Retira(&f);
        printf("Numero da senha chamada: %d\n", elem);


    }

    return 0;
}
