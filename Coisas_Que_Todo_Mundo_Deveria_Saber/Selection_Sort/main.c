#include <stdio.h>
#include <stdlib.h>



void swap(int *v,int a, int b){
    int aux = a;
    a = b;
    b = aux;

}

void SelectionSort(int *v, int tam){
    int i; int j; int tevetroca = 1;

    printf("SelectionSorting...\n");
    int menor;

            for(i = 0; i<tam && tevetroca; i++){ // O(n)
              menor = i;

                  for(j = i+1; j<tam;j++){ //O(n-1) -> O(n)          total: O(n^2/2)
                    if(v[j] < v[menor]) {
                        menor = j;
                    }

                                }
              //swap(v,i,menor);
              int aux = v[i];
              v[i] = v[menor];
              v[menor] = aux;


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

    SelectionSort(vetor,10);
    printVector(vetor,10);


     int vetor2[10] = {8,4,6,3,9};
   // printVector(vetor2, 5);

//    BubbleSort(vetor2,5);
    //printVector(vetor2,5);



    return 0;
}
