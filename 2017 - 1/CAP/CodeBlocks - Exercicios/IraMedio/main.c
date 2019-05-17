#include <stdio.h>
#include <stdlib.h>


int acimaMedia(int media, int *pVira, int qtdAlu);
int abaixoMedia(int media, int *pVira, int qtdAlu);
int main()
{   int i;
    int soma = 0, abaixoMedia1 = 0, acimaMedia1 = 0;
    int iramedio;
    int iraAtual;
    int vetorIra[100] = {0};
    int qtdAlunos;
    scanf("%d", &qtdAlunos);
    for(i=0;i<qtdAlunos;i++){
            scanf("%d", &vetorIra[i]);
            soma += vetorIra[i];
    }
    iramedio = soma / qtdAlunos;



    printf("O IRA Medio eh: %d\n", iramedio);
    acimaMedia1 = acimaMedia(iramedio, vetorIra,qtdAlunos);
    abaixoMedia1 = abaixoMedia(iramedio, vetorIra, qtdAlunos);
    printf("Quantidade de alunos com IRA acima da media:  %d\n", acimaMedia1);
    printf("Quantidade de alunos com IRA 60%% abaixo da media:  %d\n", abaixoMedia1);
    return 0;
}


int acimaMedia(int media, int *pVira, int qtdAlu){
    int acimamedia1 = 0; int i;
    for(i=0;i<qtdAlu;i++){
        if(pVira[i] > media)
        acimamedia1++;
    }
    return acimamedia1;


}

int abaixoMedia(int media, int *pVira, int qtdAlu){
    int abaixomedia1 = 0;
    int i;
    for(i=0;i<qtdAlu;i++){
        if(pVira[i] < media * 0.6){
                abaixomedia1++;
            }

    }


return abaixomedia1;
}

