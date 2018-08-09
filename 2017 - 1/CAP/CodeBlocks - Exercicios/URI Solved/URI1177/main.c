#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*preencha um vetor N[1000] com a sequência de valores de
    0 até T-1 repetidas vezes, conforme exemplo abaixo. Imprima o vetor N.
Entrada
A entrada contém um valor inteiro T (2 ≤ T ≤ 50).
Saída
Para cada posição do vetor, escreva "N[i] = x", onde i é
a posição do vetor e x é o valor armazenado naquela posição.
    */
    int  t,i, j;
    int n[1000];

    scanf("%d", &t);

    for(i=0,j=0;i<1000;i++){
        n[i] = j;
        j++;

        if(j==t)
            j  = 0;
    }

    for(i=0; i<1000;i++){

         printf("N[%d] = %d\n",  i, n[i]);
    }
    return 0;
}
