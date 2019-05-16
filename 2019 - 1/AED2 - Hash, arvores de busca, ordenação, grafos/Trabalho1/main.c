#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct  Word{
    char palavra[30];
    int valor;


} Word;

int main()
{


    int n;               //nro de palavras escolhidas pelos profs
    int m;              //nto de participantes na competicao
    int aux,i;

    scanf("%d", &n);
    scanf("%d", &m);

    int pontuacao = 0; int achei;

    Word palavras[n];



    aux = n; i = 0;

    while(aux > 0){
    scanf("%s", palavras[i].palavra);
    //printf("scaneei %s e meu i eh %d\n",palavras[i].palavra,i);

    scanf("%d", &palavras[i].valor);
    //printf("scaneei %d e meu i eh %d\n",palavras[i].valor,i);

        i++;
        aux--;
    }




    char texto[50];
   // scanf("%s", texto);
  //  printf("%s", texto);


while(m > 0){
        pontuacao = 0;


    do{

        achei = 0;


        scanf("%s", texto);
        //printf("%s\n", texto);

        if(strcmp(texto, ".\0") == 0)
            break;

        for(i=0;i<n;i++){
            if(strcmp(palavras[i].palavra,texto) == 0){
                 achei = 1;
                 break;
        }
        }

    if(achei == 1){pontuacao += palavras[i].valor;}
    else{pontuacao -= 10;}


    } while(strcmp(texto, ".\0") != 0);


printf("%d\n", pontuacao);

m--;

}

    return 0;
}
