#include<stdlib.h>
#include<stdio.h>



int main(){

    /*Neste problema sua tarefa será ler vários números e em seguida
    dizer quantas vezes cada número aparece na entrada de dados, ou seja,
     deve-se escrever cada um dos valores distintos que aparecem na entrada
     por ordem crescente de valor.
    Entrada
    A entrada contém apenas 1 caso de teste. A primeira linha de entrada
    contem um único inteiro N, que indica a quantidade de valores que serão lidos
     para X (1 ≤ X ≤ 2000) logo em seguida. Com certeza cada número não aparecerá
     mais do que 20 vezes na entrada de dados.
    Saída
    Imprima a saída de acordo com o exemplo fornecido abaixo, indicando quantas
    vezes cada um deles aparece na entrada por ordem crescente de valor. */

   int n, i, qtd;

   int v[2001] = {0};
   scanf("%d", &qtd);


   for(i=0; i<qtd; i++){
       scanf("%d", &n);
       v[n]++;
   }
   for(i=0;i<2001;i++){
       if(v[i] !=0)
       printf("%d aparece %d vez(es)\n", i, v[i]);
   }

   return 0;
}
