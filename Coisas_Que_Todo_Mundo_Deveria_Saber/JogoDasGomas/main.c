#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string.h"



int conta(int *v[]){
    int vetor[50];
   // def organizar(vetor):
    int qtd_swap = 0;
    int i = 1;
    int aux;

    while (i < 50) {

        while (vetor[i] != i) {
            qtd_swap += 1;
            aux = vetor[i];
            vetor[i] = vetor[aux];
            vetor[aux] = aux;
            }

        i++;
    }

    return qtd_swap;
}


int main()
{
//string jogadores = ['Finn','Jake'];
 int valores[100]; int i = 0; int num;

    /* while(1){
        printf("While %d\n",i);
        scanf("%d", valores[i]);
        if(valores[i] == '\n')
            break;
        i++;
    }
    //entrada = [int(x) for x in entrada]

    printf("Sai do While");
    int n = valores[0];

    if (n == 0)return; */


    int qtd_swaped = conta(valores);

    if(qtd_swaped % 2 == 0)
        printf("Finn\n");
    if(qtd_swaped % 2 == 1)
        printf("Jake\n");

    return 0;
}
