#include <stdio.h>
#include <stdlib.h>
#define linhas 3
#define colunas 3
#

void matriz(){



    //declare


    int matriz[linhas][colunas] = {0};
    int i, j;

    // input
    for(i=0;i<linhas;i++)
        for(j=0;j<colunas;j++)
        scanf("%d", &matriz[i][j]);


    //output
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++)
            printf("%d ", matriz[i][j]);
        printf("\n");
        }



}
int main()
{
    matriz();

    return 0;
}
