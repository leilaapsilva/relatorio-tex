#include <stdio.h>
#include <stdlib.h>

int main()
{
   // printf("Hello world!\n");



   // 5. Leia dois valores double. Imprima quem é o maior e qual é o elemento (maior ou menor) que está em um endereço mais a frente na memória.

double d1,d2;
double maior;
double *pd1;
double *pd2;
double *pdmaior;

 printf("Informe 2 valores reais, separados por espaco e usando ponto no lugar da virgula, para simbolizar o decimal: ");
    scanf("%lf%lf" ,&d1,&d2);
    printf(" %lf \n %lf" ,d1,d2);

    pd1 = &d1;
    pd2 = &d2;
    pdmaior = &maior;

    if(*pd1 == *pd2){

        printf("\nTa tudo errado");
    }

    else {
        if(*pd1 > *pd2){

        *pdmaior = *pd1;

    }
    else{

        *pdmaior = *pd2;
    }

    if(pd1 > pd2){

        pdmaior = &pd1;
    }
    else{

         pdmaior = &pd2;
    }
        printf(" maior valor: %d \nmaior posicao de memoria(mais a frente) %d", pdmaior, *pdmaior);


}











    return 0;
}
