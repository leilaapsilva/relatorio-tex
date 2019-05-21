/*
  Listagem de dados com "nome valor empresa" de arquivo binario,
  com nome e empresa sem espacos (substituidos por sublinha). nome
  e empresa contem 40 caraceres com terminacao '\0'; valor no 
  formato IEEE 754 de precisao simples (float).
  Jander, 2018
*/
#include <stdio.h>

int main(){
	FILE *arquivo;
	char nome[40], empresa[40];
	float fortuna;

	arquivo = fopen("dados.bin", "rb"); // acesso de leitura
	if(arquivo == NULL)
		perror("Erro ao abrir dados.bin");
	else{
		// Varredura do arquivo
		while(fread(nome, sizeof nome, 1, arquivo) > 0 &&
		  fread(&fortuna, sizeof fortuna, 1, arquivo) > 0 &&
		  fread(empresa, sizeof empresa, 1, arquivo) > 0)
			printf("%s, com US$ %g bi (%s)\n", nome, fortuna, empresa);

		fclose(arquivo);
	}

	return 0;
}
