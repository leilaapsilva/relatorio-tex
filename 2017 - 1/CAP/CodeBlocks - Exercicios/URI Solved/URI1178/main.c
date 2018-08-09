#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n[100];
    double x;
    int  i,j;
    double xsobre2;

    /*Leia um valor X. Coloque este valor na primeira
    posição de um vetor N[100]. Em cada posição subsequente
    de N (1 até 99), coloque a metade do valor armazenado na
    posição anterior, conforme o exemplo abaixo. Imprima o vetor N.
Entrada
A entrada contem um valor de dupla precisão com 4 casas decimais.
Saída
Para cada posição do vetor N, escreva "N[i] = Y",
onde i é a posição do vetor e Y é o valor armazenado
naquela posição. Cada valor do vetor deve ser apresentado com 4 casas decimais. */

scanf("%lf", &x);
n[0] = x;
for(i = 1; i<100;i++){
        j = i - 1;
    n[i] = (n[j] / 2);
}
for(i=0; i<100;  i++){
    printf("N[%d] = %.4lf\n", i,  n[i]);
}

    return 0;
}
