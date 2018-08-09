  #include <stdio.h>
#include <stdlib.h>

int main()
{

    int p,n; int i,j; int dif;
    // p =  poder  de  pulo
    // n =  canoossss

    dif = 0;

    int win = 1;
    /*Entrada

A entrada é dada em duas linhas. A primeira tem dois inteiros positivos
P e N, a altura do pulo do sapo e o número de canos (1 ≤ P ≤ 5 e 2 ≤ N ≤ 100).
A segunda linha tem N inteiros positivos que indicam as alturas dos canos
ordenados da esquerda para a direita. Não há altura maior do que 10.

Saída
A saída é dada em uma única linha. Se o sapo pode chegar no cano mais à
direita, escreva "YOU WIN". Se o sapo não consegue, escreva "GAME OVER". */
    scanf("%d %d", &p,&n);
    //Decidi entregar a lista primeiro  para depois estudar alocação dinâmica  ;)
    int  vetor[n];
    for(i=0;i<n; i++){
            scanf("%d",  &vetor[i]);

    }

    for(i=0;i<n - 1;i++){
            j = i  +  1;
        if(vetor[i] < vetor[j]){
            dif = (vetor[j] - vetor[i]);
        }
        else if(vetor[j] < vetor[i] ){
            dif = (vetor[i] - vetor[j]);
        }
        else{  dif  =  0;
        }
        if(dif  >  p){
            win = 0;
        }


    }

    if((win == 1)){
        printf("YOU WIN\n");
        }

    else{
    printf("GAME OVER\n");
    }


    return 0;
}
