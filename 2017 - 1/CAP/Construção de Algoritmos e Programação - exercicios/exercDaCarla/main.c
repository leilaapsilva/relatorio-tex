#include <stdio.h>
#include <stdlib.h>

  int m = 0, n = 0;

 void printmm(int pmat[m][n], int mm, int nn);


int main()
{

    int i,j;



    printf("Informe o numero de linhas: ");
    scanf("%d", &m);
    printf("Informe o numero de colunas: ");
    scanf("%d", &n);
    int matriz[m][n];

    for(i=0;i<m;i++){

        for(j=0;j<n;j++){
            printf("Informe o elemento de matriz[%d]{%d} : ", i+1,j+1);
            scanf("%d", &matriz[i][j]);
        }

    }


    printmm(matriz,m,n);

    printf("Hello world!\n");
    return 0;
}

void printmm(int pmat[m][n],int mm, int nn){
    int k,l;
    for(k = 0;k<mm;k++){

        for(l = 0;l<nn;l++){
        printf("%d ", pmat[k][l]);


                    }
                    printf("\n");


    }

}
