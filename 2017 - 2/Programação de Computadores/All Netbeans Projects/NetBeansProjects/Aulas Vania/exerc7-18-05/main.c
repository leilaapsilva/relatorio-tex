#include <stdio.h>
#include <stdlib.h>

int main()
{
   // printf("Hello world!\n");
   // 7. Declare dois ponteiros: um genérico e um para double. Leia um valor para uma variável double. Imprima o conteúdo da variável usando o ponteiro genérico.
    void **vpointer;
    double *dpointer;
    double d;

    printf("Informe um valor decimal: ");
    scanf("%lf", &d);
        dpointer = &d;
        vpointer = (double*)dpointer;
        printf("Endereco:  %d\n outro endereco %d", vpointer, dpointer);
    return 0;
}
