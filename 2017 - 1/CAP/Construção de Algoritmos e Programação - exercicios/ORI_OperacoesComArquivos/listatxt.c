/*
  Listagem de dados no formato "nome valor empresa" de arquivo texto,
  com nome e empresa sem espacos (substituidos por sublinha).
  Jander, 2018
*/
#include <stdio.h>

int main(){
	FILE *arquivo;
	char nome[40], empresa[40];
	float fortuna;

	arquivo = fopen("dados.txt", "r"); // acesso de leitura
	if(arquivo == NULL)
		perror("Erro ao abrir dados.txt");
	else{
		// Varredura do arquivo, linha a linha
		while(fscanf(arquivo, "%s%f%s", nome, &fortuna, empresa) != EOF)
			printf("%s, com US$ %g bi (%s)\n", nome, fortuna, empresa);

		fclose(arquivo);
	}

	return 0;
}
