#include <stdio.h>
#include <stdlib.h>


 void somaDeMatrizes(int ma1[][8], int ma2[][8], int resultado[8][8]);
void readMat(int matrizRead[][8]);
int main()
{
    int mat1[8][8];
    int mat2[8][8];
    int resultado[8][8];

    readMat(mat1);
    readMat(mat2);


     somaDeMatrizes(mat1, mat2,resultado);

     int i,j;
     for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            printf("%d ", resultado[i][j]);

        } printf("\n");
     }


    return 0;
}

somaDeMatrizes(int ma1[][8], int ma2[][8], int resultado[8][8]){

    int i,j;

    for(i=0;i<8;i++)
    for(j=0;j<8;j++){
            resultado[i][j] = ma1[i][j] + ma2[i][j];

    }

}

void readMat(int matrizRead[][8]){
int i, j;
    for(i=0;i<8;i++)
        for(j=0;j<8;j++){
         printf("Informe posicao %d x %d: ", i+1, j+1);
         scanf("%d", &matrizRead[i][j]);


        }

}


