    #include <stdio.h>
    #include <stdlib.h>

    int main()
    {

        int vetor[10] = {0,8,2,5,9,7,6,1,4,3};
        printf("Vetor original:\n");
        printa(vetor,10);
        printf("\n\n");
        BubbleSort(vetor,10);
        printf("Vetor ordenado: \n");
        printa(vetor,10);

        return 0;
    }

    void swap(int *v, int x, int y){

    int aux;
    aux = v[x];
    v[x] = v[y];
    v[y] = aux;
    }

    void BubbleSort(int *v, int tam){

    int i,j = 0; int trocou;
    for(i=0;i<tam;i++){ // corre o vetor todo n vezes
    trocou = 0;
        for(j=0;j<tam;j++){ // corre o vetor todo n vezes
            if(v[j] > v[j+1]){ // se x > x+1, troca
                swap(v,j,j+1);
                trocou = 1;

            }
                 //printf("swapei\n");

        }
        if(trocou == 0)
            break;
        printa(v,10);

    }

    }

    void printa(int *v, int tam){
    int i = 0;
    for(i=0;i<tam;i++)
        printf("%d ", v[i]);
        printf("\n");
    }
