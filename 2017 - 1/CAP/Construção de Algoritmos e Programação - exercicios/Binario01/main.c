    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>



    int main(){
        char lixo[2];
        FILE *pFile;
        int nro;
        char nomecompleto[50];
        char apelido[20];
        char posicao[20];
        float altura;
        float peso;
        pFile = fopen("jogadores.txt", "w");
        int continuar = 1;

    while(continuar){
        printf("Informe o número do jogador: \n");
        scanf("%d", &nro);
        gets(lixo);
        printf("Informe o nome do jogador(completo) : \n");
        gets(nomecompleto);
        printf("Informe o apelido do jogador : \n");
        gets(apelido);
        printf("Informe a posicao em que ele joga: \n");
        gets(posicao);
        printf("Informe sua altura em metros: \n");
        scanf("%f", &altura);
        printf("Informe seu peso em kg\n");
        gets(lixo);
        scanf("%f", &peso);
        fprintf(pFile,"%d %s %s %s %.2f %.2f\n",nro,nomecompleto,apelido,posicao,altura,peso);


    printf("Deseja continuar? entre 1 para sim, e 0 para n'ao: \n");
    scanf("%d", &continuar);
    gets(lixo);
     fclose(pFile);
    pFile = fopen("jogadores.txt", "a");
    }

fclose(pFile);

    return 0;
        }
    /*Crie um arquivo binário que armazene dados de jogadores de um time de futebol.
    Cada jogador deve ter os seguintes dados armazenados: número da camisa, nome completo,
    apelido, posição que joga, altura (metros) e peso (kg). */

