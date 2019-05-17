#include <stdio.h>
#include <stdlib.h>


int Ordenar(int *v, int tam);


int main()
{ int i;
    int vetor[7] = {6,6,5,4,3,2,1};
    int retorno = 0;


        for(i = 0; i<7;i++){
            printf("%d ", vetor[i]);


    }
    printf("Hello world!\n");

    retorno = Ordenar(vetor,7);
    for(i = 0; i<7;i++){
            printf("%d ", vetor[i]);


    }
    if(retorno % 2 == 0)
        printf("Finn\n");
    if(retorno % 2 == 1)
        printf("Jake\n");

    return 0;
}

int Ordenar(int *v, int tam){
    int qtdswap = 0;
    int i, temp, j;

   for(i = 0; i<tam; i++){
    for(j=i+1; j<tam;j++){

            if(v[i] > v[j]){

                temp  = v[i];
                v[i] =  v[j];
                v[j] = temp; qtdswap++;
            }


    }
   }

 return qtdswap;
}
