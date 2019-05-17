#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


void cabecalho();
void inputData();
void listar();
void pesquisar();
struct Data{

int dia, mes, ano;


};

struct Contato{
    char nome [30];
    char telefone[15];
    struct Data aniv;

};

int main()
{
    char lixo[2];
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    do{

            cabecalho();
            printf("(1)Inserir\n");
            printf("(2)Remover\n");
            printf("(3)Pesquisar por nome\n");
            printf("(4)Listar \n");
            printf("(5)Listar por uma inicial\n");
            printf("(6)Primeiro Aniv do mês\n");
            printf("(7)Sair\n");

            printf("\nEscolha uma opção:\n");
            scanf("%d", &opcao);
            gets(lixo);

            switch(opcao){

            case 1:
                inputData();
                break;
            case 2:
                //remoiver
            break;
            case 3://pesquisar
                pesquisar();
            break;
            case 4:// listar
                listar();
                getchar();
            break;
            case 5: //listar inicial
            break;
            case 6: //imprimir
            break;
            case 7:
                printf("Obrigado por nos usar\n");
                getchar();
            break;

                default:
                    printf("Opcão inválida\n");
                    getchar();
                    break;
            }




    } while(opcao != 7);


    return 0;
}


void cabecalho(){

    system("cls");
    printf("-------------------------------------\n");
    printf("AGENDA ELETRÔNICA\n");
    printf("-------------------------------------\n");

}

void inputData(){

    FILE *pFile = fopen("agenda.txt", "ab");
  struct  Contato ctt;

    if(pFile == NULL){
        printf("Problemas na abertura do arquivo...\n");
    }
        else{
            do{

                printf("Digite o nome: ");
                fflush(stdin);
                gets(ctt.nome);
                printf("Digite o fone: ");
                gets(ctt.telefone);
                printf("Digite o aniversario: ");
                scanf("%d %d %d ", &ctt.aniv.dia, &ctt.aniv.mes, &ctt.aniv.ano);

                //
                fwrite(&ctt, sizeof(ctt), 1,  pFile);


                printf("Deseja continuar?\n");





            } while(getchar() == 's');
            fclose(pFile);


        }

    }


void listar(){


    FILE *pFile = fopen("agenda.txt", "rb");
  struct  Contato ctt;

    if(pFile == NULL){
        printf("Problemas na abertura do arquivo...\n");

    }
        else{

            while(fread(&ctt, sizeof(ctt),1, pFile) == 1){
                printf("Nome: %s\n", ctt.nome);
                printf("Fone: %s\n", ctt.telefone);
                printf("Aniversário: %d/%d/%d\n", ctt.aniv.dia, ctt.aniv.mes, ctt.aniv.ano);
                printf("--------------------------------\n");


            }


        }
        fclose(pFile);



}
void pesquisar(){
    FILE *pFile = fopen("agenda.txt", "rb");
    struct Contato ctt;
    char nome[30];
    if (pFile == NULL)
        printf("Falha na abertura do arquivo\n");
    else{
        printf("Digite o nome a pesquisar: ");
        fflush(stdin);
        gets(nome);

        while(fread(&ctt,sizeof(ctt), 1, pFile) == 1){
         if(strcmp(nome, ctt.nome) ==0){
            printf("Nome: %s\n", ctt.nome);
            printf("Fone: %s\n", ctt.telefone);
            printf("Aniversário: %d/%d/%d\n", ctt.aniv.dia, ctt.aniv.mes, ctt.aniv.ano);
            printf("--------------------------------\n");


         }



        }


    }


    fclose(pFile);
    getchar();
}

