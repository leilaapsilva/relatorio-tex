#include <stdio.h>
#include <stdlib.h>

int main()
{    /*Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), correspondente a
    ordem de uma matriz M de inteiros,e construa a matriz de acordo com o exemplo abaixo.
Entrada
A entrada consiste de vários inteiros, um valor por linha, correspondentes as ordens
das matrizes a serem construídas. O final da entrada é marcado por um valor de ordem
igual a zero (0).
Saída
Para cada inteiro da entrada imprima a matriz correspondente, de acordo com o exemplo.
 Os valores das matrizes devem ser formatados em um campo de tamanho 3 justificados
 à direita e separados por espaço. Após o último caractere de cada linha da matriz
  não deve haver espaços em branco. Após a impressão de cada matriz deve ser deixada
   uma linha em branco. */

   int n,i,j, min;
   while(scanf("%d", &n) !=0){
    if(n==0)
        return  0;
    for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                min = i;
            if(n-i+1 < min)
                min = n-i+1;
            if(j<min)
                min  =  j;
            if(n-j+1 < min)
                min = n-j+1;
            printf("%3d" , min);
            if(j<n)
                printf(" ");
            else
                printf("\n");

        }
    }
    printf("\n");


   }

   //int m[n][n];

    return 0;
}
