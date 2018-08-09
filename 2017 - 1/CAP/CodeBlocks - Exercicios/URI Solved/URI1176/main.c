#include <stdio.h>
#include <stdlib.h>

int main()
{/*  Faça um programa que leia um valor e apresente
    o número de Fibonacci correspondente a este valor lido.
     Lembre que os 2 primeiros elementos da série de Fibonacci
     são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a
     ele. Todos os valores de Fibonacci calculados neste problema
     devem caber em um inteiro de 64 bits sem sinal.
Entrada
A primeira linha da entrada contém um inteiro T, indicando o
número de casos de teste. Cada caso de teste contém um único inteiro
 N (0 ≤ N ≤ 60), correspondente ao N-esimo termo da série de Fibonacci.
Saída
Para cada caso de teste da entrada, imprima a mensagem "Fib(N) = X",
onde X é o N-ésimo termo da série de Fibonacci.
*/
    int  t,  i=0; int  n;

     unsigned long  long  int fib[60];
    fib[0]  =  0;
    fib[1]  =  1;
    for(i=2;i<62;i++){
            int j = i-1; int  k  =  i-2;
        fib[i] = fib[j] +  fib [k];
      }
      scanf("%d",  &t);
    for(i=0;i<t;i++){
        scanf("%d",  &n);
        printf("Fib(%d) = %llu\n",n, fib[n]);
    }



    return 0;
}
