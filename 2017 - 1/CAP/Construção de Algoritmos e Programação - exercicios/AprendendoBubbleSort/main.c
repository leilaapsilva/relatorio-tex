#include <stdio.h>
#include <stdlib.h>

int main()
{

    int contpassadas = 0;
    int contswaps = 0;
    int i,j,aux,k;

    int vetor[8] = {0,0,0,0,0,0,1,0};

    for(i=0;i<8;i++){
            int controle = 1;
        printf("i: %d ||", i + 1);
        for(j=0;j<8-i;j++){
            if(vetor[j] > vetor[j+1]){
                aux = vetor[j+1];
                vetor[j+1] = vetor[j];
                vetor[j] = aux;
                contswaps++;
                controle = 0;
            }

        }
        contpassadas++;
        for(k=0;k<8;k++){

           printf("%d ", vetor[k]);


        }
        printf("\n");
    if(controle){
        break;
    }
    }



printf("i terminou em %d e j terminou em %d\n",i,j);

printf("\n\nContPassadas: %d\n\n", contpassadas);

printf("\n\nContSwaps: %d\n\n", contswaps);

        for(k=0;k<8;k++){
           printf("%d ", vetor[k]);

        }


    return 0;
}


