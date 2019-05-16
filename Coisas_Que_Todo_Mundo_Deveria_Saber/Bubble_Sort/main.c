#include <stdio.h>
#include <stdlib.h>



void swap(int *v,int a, int b){
    int aux = a;
    a = b;
    b = aux;

}


void BubbleSort(int *v, int tam){
    int i; int j;

    int ultimo;
    int houvetroca = 1;
    printf("BubbleSorting...\n");

    for(ultimo = tam - 1;ultimo > 0  && houvetroca == 1; ultimo--){
            houvetroca = 0;
        for(i = 0; i<ultimo; i++){

                if(v[i] > v[i+1]) {
                   // swap(v[i], v[j]);
                        int aux = v[i +1];
                        v[i+1] = v[i];
                        v[i] = aux;
                        houvetroca = 1;

                    }

        }
        printVector(v,tam);
        //qtdswaps++;

    }

}


void printVector(int* v, int tam){
int i;
for(i=0;i<tam;i++)
    printf("%d ", v[i]);
printf("\n");

}



int main()
{
    int vetor[10] = {9,6,5,8,4,2,7,1,3,0};
    printVector(vetor, 10);

    BubbleSort(vetor,10);
    printVector(vetor,10);


     int vetor2[10] = {8,4,6,3,9};
   // printVector(vetor2, 5);

//    BubbleSort(vetor2,5);
    //printVector(vetor2,5);



    return 0;
}
