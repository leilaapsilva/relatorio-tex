#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *pFile;

    pFile  =  fopen("string.txt", "a");
    if(pFile  ==  NULL){
        printf("Arquivo nao pode ser aberto \n");
        return 0;
    }
   fprintf(pFile,"Primeira Linha\n");
    char frase[] = "segunda  linha\n";
    fputs(frase, pFile);
    char carac  =  '3';
    fputc(carac, pFile);
   fclose(pFile);

printf("\n");

    return 0;
}
