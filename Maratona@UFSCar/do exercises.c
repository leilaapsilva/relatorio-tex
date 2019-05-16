/**

Este governo, como todos os anos, estC! muito preocupado com a folha de pagamentos. Neste ano, porC)m, a maneira que os pagamentos 
serC#o efetuados serC! trocada. Ao invC)s de pagar os funcionC!rios como de costumo, a formula utilizada para calcular os salC!rios 
serC! mais simples: A soma dos divisores do nC:mero de matrC-cula do funcionC!rio.

Para evitar fraudes, ajude o governo a fazer este cC!lculo!

Entrada

A entrada comeC'a com uma linha com um nC:mero 1 <= N <= 104 que C) o nC:mero de funcionC!rios. 
Cada uma das N linhas seguintes representa um funcionC!rio atravC)s de seu numero de matrC-cula 1 <= M <= 108.

SaC-da


https://docs.google.com/presentation/d/17ZkPYQ5D4hlwwTmHZDSXlfIq8OXI6R_0yhT1yOs_PUU/edit#slide=id.g5513526017_0_68



A saC-da consiste de N linhas, cada uma contendo o salC!rio do funcionC!rio na ordem que foram incluC-dos na entrada.
***/


#include <stdio.h>

int
main ()
{
  int i;
  //printf("Hello World");



  int N, M;  scanf ("%d", &N);

  int vetor[N];
  int aux = 0;

  while (aux < N)
    {
      scanf ("%d", &M);

      int soma = 0;
      for (i = 1; i <= M; i++){
	
	  if (M % i == 0)
	    soma += i;
	    
	    
/*	  if(M/i != i)
        soma += M/i;
       */ 

     vetor[aux] = soma;
     aux++;
    
    }
    
  for (i = 0; i < N; i++)
    {
        printf("%d\n", vetor[i]);

    }




  return 0;
}
