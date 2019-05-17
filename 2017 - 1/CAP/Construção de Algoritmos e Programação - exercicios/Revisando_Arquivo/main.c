#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Hello world!\n");
    FILE* pFile; FILE* pFileBin;


    pFile = fopen("arquivo.txt", "w+");
    if(pFile == NULL)
        exit(1);
    pFileBin = fopen("arquivo2.txt", "wb");

    if(pFileBin == NULL)
        exit(1);

    char nome[20] = "Joelson";
    int idade = 14;
    float a = 1.74;


    int i;


    for(i=0;i<strlen(nome);i++){
        fputc(nome[i], pFile);
        fputc(' ', pFile);
        fputc('\n', pFile);
        // fputc(nome[i+5], pFile);


    }

    fwrite(string,sizeof(string), )
    fputs(nome, pFile);
    //fputs(nome, pFile);


   // fputws(nome, pFileBin);




    fclose(pFile);
    fclose(pFileBin);


    return 0;
}
