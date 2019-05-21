#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<vector>

using namespace std;

int main(){

	//Declaraçao das variaviaveis
	string nome;
	string RA;
	string curso;
	string ano;
	string registro;
	string nome_arquivo;

	char bloco[510];
	char divisor_registro = 10;
	char divisor_campo = 13;
	short int tam = 0;
	int n_bloco = 0;

	int j;
	int qtd;

	fprintf(stderr,"Ola, qual nome você quer dar para o arquivo?\n");

	//Concatenacao do nome do arquivo com .dat
	cin>>nome_arquivo;
	nome_arquivo += ".dat";


	//Abertura do arquivo
	FILE *parq;
	parq = fopen(nome_arquivo.c_str(),"wb+");

	//Verificaçao de erros na abertura do arquivo
	if(parq == NULL)
		fprintf(stderr,"Erro na abertura do arquivo\n");

	fprintf(stderr,"Quantidade de registros:\n");
	cin>>qtd;


	//Insercao de dados no arquivp
	for(int i=0;i< qtd; i++)
	{
		//Seta os campos para 0
		RA.clear();
		nome.clear();
		curso.clear();
		ano.clear();
		registro.clear();

		fprintf(stderr,"Digite o RA, nome completo, curso e ano\n");
		
		cin>>RA;
		RA += divisor_campo;
		
		cin.ignore();
		getline(cin,nome);
		nome += divisor_campo;
		
		cin>>curso;
		curso += divisor_campo;

		cin>>ano;
		ano += divisor_campo;
		ano += divisor_registro;
	
		registro += RA;
		registro += nome;
		registro += curso;
		registro += ano;

		//Verificacao se ainda e possivel colocar registros no bloco
		if(registro.length() + tam <= 510)
		{
			tam += registro.length();
			strcat(bloco,registro.c_str());
			if((i+1) == qtd)
			{
			//preenche o vetor com '_' apos o '\0' 
				memset(bloco+tam,95,510-tam);
				if(n_bloco >= 1)
					fseek(parq,512*n_bloco,SEEK_SET);
				else
					rewind(parq);

				fwrite(bloco,sizeof(char),510,parq);
				fwrite(&tam,sizeof(short int),1,parq);
				fflush(parq);	
			}
		}
		//Caso nao seja possivel adionar mais registros no bloco
		else
		{
			
			memset(bloco+tam,95,510-tam);
			if(n_bloco>=1)
				fseek(parq,512*n_bloco,SEEK_SET);
			else
				rewind(parq);

			//Escrita do bloco atual e tamanho dentro do arquivo
			fwrite(bloco, sizeof(char), 510, parq);
			fwrite(&tam, sizeof(short int), 1, parq);
			fflush(parq);
			
			n_bloco=0;
			memset(bloco,0,sizeof bloco);
			fseek(parq,510,SEEK_SET);
			fread(&tam,sizeof(short int),1,parq);

			//Busca por um bloco com espaço necessario disponivel
			while(510 < registro.length() + tam && feof(parq) == 0)
			{
				n_bloco ++;
				fseek(parq,510,SEEK_CUR);
				fread(&tam,sizeof(short int),1,parq);

				//Caso seja necessario um novo bloco(chegada ao final do arquivo)
				if(feof(parq))
					tam = 0;
				
			}
			
			if(feof(parq) == 0)
				fread(bloco,sizeof(char),tam,parq);

			tam += registro.length();
			strcat(bloco,registro.c_str());
			
			//Se o registro atual for o ultimo
			if((i+1) == qtd)
			{
			//preenche o vetor com '_' apos o \0 
				memset(bloco+tam,95,509-tam);
				if(n_bloco >= 1)
					fseek(parq,512*n_bloco,SEEK_SET);
				
				else
					rewind(parq);
				
				fwrite(bloco,sizeof(char),510,parq);
				fwrite(&tam,sizeof(short int),1,parq);
				fflush(parq);	
			}

		}



	}
	fclose(parq);
	parq = NULL;
//Busca de um registro.




	return 0;
}