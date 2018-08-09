#include <stdio.h>
#include <stdlib.h>


void Ordenar(int *v, int tam);


int main()
{ int i;
    int vetor[10] = {1,3,5,7,9,0,2,4,6,8};


        for(i = 0; i<10;i++){
            printf("%d ", vetor[i]);


    }
    printf("Hello world!\n");
    Ordenar(vetor,10);
    for(i = 0; i<10;i++){
            printf("%d ", vetor[i]);


    }
    return 0;
}

void Ordenar(int *v, int tam){

    int i, temp, j;

   for(i = 0; i<tam; i++){
    for(j=i+1; j<tam;j++){

            if(v[i] > v[j]){

                temp  = v[i];
                v[i] =  v[j];
                v[j] = temp;
            }


    }
   }


}
