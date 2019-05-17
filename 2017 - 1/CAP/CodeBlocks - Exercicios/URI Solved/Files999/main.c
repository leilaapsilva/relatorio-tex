#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   int i  = 0;
char texto[1000];
    FILE *pFile =  fopen("arq.txt", "w");
    while(getchar() != '\n'){
        texto[i] = getchar();
        i++;
    }
    i++;
    texto[i]  =  '\n';

    fprintf(pFile, texto);

    return 0;
}
