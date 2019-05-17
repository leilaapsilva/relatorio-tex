#include <stdio.h>
#include <stdlib.h>

void OrdenaVetor(int *pVet, int tam);
int main()
{
    int vetor[10] ={1,3,4,8,7,6,9,2,5,0};
    int i;

    OrdenaVetor(vetor,10);

    for(i=0;i<10;i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}

void OrdenaVetor(int *pVet, int tam){

    int j,k, aux;
    for(j=0;j<tam;j++){
        for(k=j+1;k<tam;k++){
            if (pVet[j]>pVet[k]){
                aux = pVet[j];
                pVet[j] = pVet[k];
                pVet[k] = aux;
            }

        }
    }

}
