#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

   int a = 5;
    int b = 10;
    printf("valor a %d \n", a);
        printf("valor b %d \n", b);

    int aux;
    int *pa;
    //pa = NULL;



    pa = &b;
    aux = a;
    a = *pa;
    b = aux;


        printf("valor trocado a %d \n", a);
        printf("valor trocado b %d \n", b);








    return 0;
}
