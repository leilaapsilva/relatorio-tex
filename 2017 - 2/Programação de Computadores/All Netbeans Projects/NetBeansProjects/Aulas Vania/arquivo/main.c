#include <stdio.h>
#include <stdlib.h>






struct Data{

     int dia, mes, ano;


};

struct Cliente{

    int codigo;
    char nome[30];
    double saldo;
    struct Data dataAniv;





};
int main()
{
    struct Cliente cli; struct Cliente cl2;
    printf("Hello world!\n");
    FILE *pFile;
    pFile = fopen("arquivo.txt", "wb");


    cli.codigo = 065;
    printf("Informe o nome do safado \n");
    fflush(stdin);
    gets(cli.nome);
    cli.saldo = 10.0;
    cli.dataAniv.dia = 06;
    cli.dataAniv.mes = 12;
    cli.dataAniv.ano = 1996;


    fwrite(&cli,sizeof(cli),1,pFile);




    fclose(pFile);
    pFile = fopen("arquivo.txt", "rb");
    fread(&cl2, sizeof(cl2), 1, pFile);
    printf("nome %s saldo %lf dia %d mes %d ano %d\n", cl2.nome, cl2.saldo, cl2.dataAniv.dia, cl2.dataAniv.mes, cl2.dataAniv.ano);

    fclose(pFile);





    return 0;

}
