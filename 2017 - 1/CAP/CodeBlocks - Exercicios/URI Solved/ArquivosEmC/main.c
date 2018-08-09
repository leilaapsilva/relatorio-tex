#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y,z;
    /*FILE  *pFile;
    pFile = fopen("string.txt", "w");
    fprintf(pFile,"Pao com Mortadela");
    fclose(pFile);
    getchar(); */

    FILE *pFile;

    pFile  =  fopen("string.txt", "a");
    if(pFile  ==  NULL){
        printf("Arquivo nao pode ser aberto \n");
        return 0;
    }
    char frase[100];

    while(fgets(frase,100,pFile)!= NULL){
        printf("%s", frase);

    }

    fclose(pFile);

printf("\n");

    return 0;
}
