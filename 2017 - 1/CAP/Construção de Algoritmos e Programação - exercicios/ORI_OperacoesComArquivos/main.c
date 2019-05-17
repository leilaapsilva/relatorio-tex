#include <stdio.h>
#include <stdlib.h>
    /*
  Listagem de dados no formato "nome valor empresa" de arquivo texto,
  com nome e empresa sem espacos (substituidos por sublinha).
  Jander, 2018
*/

int main(){



    int n;

	char nome[40], empresa[40];
	float fortuna;

	FILE *arquivo;

	arquivo = fopen("dados.txt", "r"); // acesso de leitura
	if(arquivo == NULL)
		perror("Erro ao abrir dados.txt");

		else{printf("Abri o  arquivo dados.txt\n");}

		scanf("%d", &n);



        GetRegByNumber(arquivo,n);


	/* else{
		// Varredura do arquivo, linha a linha
		while(fscanf(arquivo, "%s%f%s", nome, &fortuna, empresa) != EOF)
			printf("%s, com US$ %g bi (%s)\n", nome, fortuna, empresa);
*/

		fclose(arquivo);


return 0;
}


int GetRegByNumber(FILE *pFile, int n){
    int i;
    char nome[40], empresa[40];
    float valor;

       //fseek( pFile, n, SEEK_SET);




    fscanf(pFile, "%s%f%s", nome,&valor,empresa);

    for(i = 0; i < n; i++){

            fscanf(pFile, "%s%f%s", nome,&valor,empresa);


    }
    printf("%s, com US$ %.1f bi (%s)\n", nome, valor, empresa);

}



















