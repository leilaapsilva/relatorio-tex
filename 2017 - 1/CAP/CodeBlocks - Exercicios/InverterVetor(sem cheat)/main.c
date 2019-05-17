#include <stdio.h>
#include <stdlib.h>


void printVet(int *pvet);
int main()
{
    int vetor[100];
    int aux;
    int i,j;
    for(i=0;i<100;i++){
            scanf("%d", &vetor[i]);

    }

    for(i=0,j=99;i!=j+1;i++,j--){
        aux = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = aux;
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
