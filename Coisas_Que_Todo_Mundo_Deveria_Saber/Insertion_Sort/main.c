#include <stdio.h>
#include <stdlib.h>


void swap(int *v,int a, int b){
    int aux = a;
    a = b;
    b = aux;

}


void InsertionSort(int *v, int tam){ // manter um subvetor ordenado e ir encaixando os outros valores nele, movendo pra direita quem precisar
    int i; int j;                      // In Place, Estável
    int min; int aux;

    printf("InsertionSorting...\n");

    for(i=1;i<tam;i++){
        aux = v[i];
        for(j=i;j>0 && aux < v[j - 1]; j--)
        {
            v[j] = v[j - 1];
            printVector(v,tam);

        }
        v[j] = aux;

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

    InsertionSort(vetor,10);
    printVector(vetor,10);


     int vetor2[10] = {8,4,6,3,9};
   // printVector(vetor2, 5);

//    BubbleSort(vetor2,5);
    //printVector(vetor2,5);



    return 0;
}
