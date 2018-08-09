#include <stdio.h>
#include <stdlib.h>


void exerc0();
void exerc1();
void exerc2();
void exerc3();
int main()
{

   // exerc0();

     exerc1();
     exerc2();
     exerc3();
    return 0;
}


void exerc1(){
    printf("Informe o nome do arquivo texto: \n");
    char arq[50];

    gets(arq); int contlinhas = 0;
    fflush(stdin); char c;
    FILE *pFile = fopen("texto1.txt","r");
    c = fgetc(pFile);
    while(c != EOF){
        if(c == '\n')
            contlinhas++;
    c = fgetc(pFile);
    }

    printf("Quantidade de linhas: %d \n", contlinhas);
fclose(pFile);

}
void exerc2(){




}
void exerc3(){


}


void exerc0(){
printf("Hello world!\n");
    FILE *pFile; int i; char c;
    pFile = fopen("texto1.txt", "w");
    if(pFile == NULL){
        printf("Ocorreu um erro terrível\n");
        exit(1);
    }
    fputs("Aq111 um textao gigante pa porra men", pFile);
    fclose(pFile);
    fopen("texto1.txt", "r");

    for(i=0;i<2;i++){
        c = fgetc(pFile);
        printf("%c", c);

    }
    fclose(pFile);

}
