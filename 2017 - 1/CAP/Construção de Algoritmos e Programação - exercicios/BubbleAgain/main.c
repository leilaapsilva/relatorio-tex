#include <stdio.h>
#include <stdlib.h>

void printar(int *pVet, int tam);
void ordenar(int *pVet, int tam);
int main()
{
    int Vetor[10] = {1,9,3,4,5,6,7,8,9,10};
    ordenar(Vetor,10);
    printf("\n\n\n print last\n");
    printar(Vetor,10);

    printf("Hello world!\n");
    return 0;
}

void ordenar(int *pVet, int tam){
    int i,j; int aux; int ordenado;
    for(i=0;i<tam;i++) {
            ordenado = 1;
    for(j=0;j<tam-i-1;j++){
        if(pVet[j] > pVet[j+1]){
            ordenado = 0;
            aux = pVet[j];
            pVet[j] = pVet[j+1];
            pVet[j+1] = aux;

        }


    }

    printar(pVet,10);
    if(ordenado == 1){
        break;
            }
        }
    }


void printar(int *pVet, int tam){
    int i;
    for(i=0;i<tam;i++)
        printf("%d ", pVet[i]);
    printf("\n");
}
