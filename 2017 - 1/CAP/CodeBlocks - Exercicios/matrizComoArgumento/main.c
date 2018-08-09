#include <stdio.h>
#include <stdlib.h>

void printMat(int pMatriz[][3]);

int main()
{
   int mAtriz[3][3] = {1,2,3,
                       4,5,6,
                       7,9,8};

    printMat(mAtriz);


    return 0;
}

void printMat(int pMatriz[][3]){

    int i,j;
    for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d ", pMatriz[i][j]);
    }
    printf("\n");
    }
}
