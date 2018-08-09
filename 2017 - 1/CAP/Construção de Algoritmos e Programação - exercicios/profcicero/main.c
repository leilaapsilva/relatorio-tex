#include <stdio.h>
#include <stdlib.h>


struct Data{
    int dia,mes,ano;


};
void inputData();
void listar();


struct Contato{
    char nome[30];
    char fone[15];
    struct Data dataAniv;



};

void cabecalho();


int main()
{
   // struct Data date;
    struct Contato ctt;


    int opt;





    do{
             cabecalho();
        printf("1 inserir\n");
        printf("2 remover\n");
        printf("3 pesquisar\n");
        printf("4 pesquisar por nome\n");
        printf("5 Listar\n");
        printf("6 listar por inicial\n");
        printf("7 Sair \n\n");
        fflush(stdin);
        printf("Escolha uma opcao: \n");
        scanf("%d", &opt);


        switch(opt){
    case 1:
        inputData();
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        listar();
        break;
    case 5:

        break;
    case 6:
        break;
    case 7:
        printf("Voce saiu men\n"); getch();
        break;
    default: printf("Opcao invalida\n");

        }
    } while(opt != 7);


    return 0;
}


void cabecalho(){
    system("cls");
    printf("!-----------------------------------------------!\n");
    printf("!-----------------------------------------------!\n");
    printf("AGENDA ELETRONICA\n");





}
void inputData(){
    FILE *pFile; struct Contato ctt;
    pFile = fopen("agenda.txt","ab");
    if(pFile == NULL){
            printf("Deu ruim \n");
        exit(1);
        }
    else{
       do{
            printf("Digite o nome: \n");
            fflush(stdin);
            gets(ctt.nome);

            printf("Digite o fone: \n");
            fflush(stdin);
            gets(ctt.fone);

             printf("Digite o aniversario:\n ");
             scanf("%d %d %d", &ctt.dataAniv.dia, &ctt.dataAniv.mes, &ctt.dataAniv.ano);

             fwrite(&ctt , sizeof(ctt), 1, pFile);
             printf("Deseja continuar? \n");


       }while( getch() == 's');
            fclose(pFile);



        }


}

void listar(){
    FILE *pFile = fopen("agenda.txt","rb");
    struct Contato ctt;
    if(pFile == NULL)
        printf("af\n");
    else{
            while(fread(&ctt, sizeof(ctt),1,pFile)){
                printf("Nome: %s\n", ctt.nome);
                printf("Fone: %s\n", ctt.fone);
                printf("Aniversario: %d/%d/%d\n", ctt.dataAniv.dia, ctt.dataAniv.mes,ctt.dataAniv.ano);
                printf("---------------------------------\n");



            }



    }
    fclose(pFile);
    getchar();


}
