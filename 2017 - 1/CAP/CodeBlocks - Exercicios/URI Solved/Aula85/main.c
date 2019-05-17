#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE  *pFile1  = fopen("Arquivo1.txt", "r");
   if(pFile1 ==  NULL){
    printf("Arquivo nao pode  ser  aberto \n");
    return 0;
    }
    FILE *pFile2 = fopen("Arquivo2.txt",  "w");
    if(pFile2 ==  NULL){
    printf("Arquivo nao pode  ser  aberto \n");
    return 0;
    }
    CopiaConteudo(pFile1,pFile2);
    return 0;
}

void CopiaConteudo(FILE *p1,  FILE *p2){
     char  leitor[1000];
     while(fgets(leitor,1000,p1) !=  NULL){
        fputs(leitor,p2);

     }

}

