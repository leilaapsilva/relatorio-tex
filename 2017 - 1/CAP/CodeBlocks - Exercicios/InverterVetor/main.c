#include <stdio.h>
#include <stdlib.h>


void printVet(int *pvet);
int main()
{
    int vetor[100];

    int cont = 99;
    while(cont != (-1)){
        scanf("%d", &vetor[cont]);
        cont--;
    }

    printVet(vetor);


    return 0;
}

void printVet(int *pvet){
    int i;
    for(i=0;i<100;i++){
        printf("%d ", pvet[i]);

    }

}
