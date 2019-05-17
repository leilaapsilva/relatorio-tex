#include <stdio.h>
#include <stdlib.h>


void OrdenCrescente(int *v, int tam);
int main()
{
    int i;

int vetor[10]  = {4,5,6,1,3,7,2,9,8,0};

OrdenCrescente(vetor, 10);
    for(i = 0;  i<10;  i++){


        printf("%d ", vetor[i]);

    }

    return 0;

   }
   void OrdenCrescente(int *v, int tam){
    int i, j , temp  = 0;

    for(i = 0; i<tam;i++){

        for(j =  i+1;j<tam;j++){

            if(v[i] > v[j]){
           temp = v[i];
           v[i] = v[j];
           v[j] = temp;


            }

        }

    }

   }
