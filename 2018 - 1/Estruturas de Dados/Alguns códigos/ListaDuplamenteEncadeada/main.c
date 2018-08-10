#include <stdio.h>
#include <stdlib.h>
#include "listadupla.h"


int main()
{
    //struct DoubleNode listinha = new DoubleNode();
    struct ListaDupla lista;;
    Create(&lista);
    Inserir(&lista, 35);
    Inserir(&lista, 67);
    Inserir(&lista, 14);
    Inserir(&lista, 99);
    exibirNaOrdem(&lista);





    return 0;

}
