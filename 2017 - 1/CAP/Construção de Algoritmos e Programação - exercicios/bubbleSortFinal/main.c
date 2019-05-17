#include <stdio.h>
#include <stdlib.h>


void ordena(int *vet);
void printa(int *vet);
int main()
{
    int vetor[10] = {9,8,7,6,5,4,3,2,1,0};



    printa(vetor);
    ordena(vetor);
    printa(vetor);

    return 0;
}

void ordena(int *vet){
    int i,j; int trocou = 1; int aux; int contTrocas = 0, contCorriVet = 0;
    for(i=0;i<10 && trocou == 1;i++)
    { contCorriVet++;
        trocou = 0;
        for(j=0;j<10;j++){

            if(vet[j] > vet[j+1]){

                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
                trocou = 1;
                contTrocas++;
            }

        }

    }
    printf("cont trocas: %d\nCont corri vet : %d\n", contTrocas, contCorriVet);

}
void printa(int *vet){
    int i;
    printf("\n");
    for(i=0;i<10;i++)
        printf("%d ", vet[i]);

    printf("\n");


}
