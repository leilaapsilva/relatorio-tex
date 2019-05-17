#include <stdio.h>
#include <stdlib.h>

int main()
{



int n;

FILE *arquivo;
	char nome[40], empresa[40];
	float fortuna;

	arquivo = fopen("dados.bin", "rb"); // acesso de leitura
	if(arquivo == NULL)
		perror("Erro ao abrir dados.bin");
	else{
            scanf("%d",&n);
            GetRegByNumber(arquivo,n);

		/* Varredura do arquivo
		while(fread(nome, sizeof nome, 1, arquivo) > 0 &&
		  fread(&fortuna, sizeof fortuna, 1, arquivo) > 0 &&
		  fread(empresa, sizeof empresa, 1, arquivo) > 0)
			printf("%s, com US$ %g bi (%s)\n", nome, fortuna, empresa);
			*/

		fclose(arquivo);
	}


	return 0;

}



int GetRegByNumber(FILE *pFile, int n){
    int i;
    char nome[40], empresa[40];
    float valor;

       //fseek( pFile, n, SEEK_SET);






            fread(nome, sizeof nome,1,pFile);
            fread(&valor, sizeof valor,1,pFile);
            fread(empresa, sizeof empresa,1,pFile);

    for(i = 0; i < n; i++){

            fread(nome, sizeof nome,1,pFile);
            fread(&valor, sizeof valor,1,pFile);
            fread(empresa, sizeof empresa,1,pFile);

}
    printf("%s, com US$ %.1f bi (%s)\n", nome, valor, empresa);

}

int alteraNaPos(FILE *pFile){
    int n;

    printf("Em qual posicao se quer alterar?");

    scanf("%d", &n);
    GetRegByNumber(pFile, n);



}



