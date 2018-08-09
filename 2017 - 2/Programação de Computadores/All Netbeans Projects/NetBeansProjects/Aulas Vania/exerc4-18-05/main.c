#include <stdio.h>
#include <stdlib.h>

int main()
{

    float f1;
    float f2;
    float *p1;
    float *p2;
    float aux;
    printf("Informe 2 valores reais, separados por espaco ( use ponto ao inves de virgula para a parte decimal): ");
    scanf("%f %f", &f1 , &f2);
     p1 = &f1;
     p2 = &f2;
     aux = *p1;
     *p1 = *p2;
     *p2 = aux;

          printf(" trocados , f1 vale %f e f2 vale %f ", f1,f2);




























    return 0;
}
