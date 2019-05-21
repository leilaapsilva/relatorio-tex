#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<vector>

using namespace std;

int main(){

string nome;
string RA;
string curso;
string ano;
string registro;
char divisor_registro = 10;
char divisor_campo = 13;
short int tam = 0;
int n_bloco = 0;
int j;

fprintf(stderr,"Ola, qual nome você quer dar para o arquivo?");
  
  string nome_arquivo;
  cin>>nome_arquivo;
  nome_arquivo += ".dat";

  FILE *parq;
  parq = fopen(nome_arquivo.c_str(),"wb+");

   if(parq == NULL)
    fprintf(stderr,"Erro na abertura do arquivo\n");

 fprintf(stderr,"Quantidade de registros:");
  int qtd;
  cin>>qtd;

char bloco[510];

for(int i=0;i< qtd; i++){
/*	memset(RA,0,sizeof RA);
	memset(nome,0,sizeof nome);
	memset(curso,0,sizeof curso);
	memset(ano,0,sizeof ano);
	memset(registro,0,sizeof registro);*/
	RA.clear();
	nome.clear();
	curso.clear();
	ano.clear();
	registro.clear();
	fprintf(stderr,"Digite o RA, nome completo, curso e ano\n");
	cin.ignore();
	getline(cin,RA);
	RA += divisor_campo;
	getline(cin,nome);
	nome += divisor_campo;
	getline(cin,curso);
	curso += divisor_campo;
	getline(cin,ano);
	ano += divisor_campo;
	ano += divisor_registro;
	/*strcat(registro,RA);
	strcat(registro,nome);
	strcat(registro,curso);
	strcat(registro,ano);*/
	registro += RA;
	registro += nome;
	registro += curso;
	registro += ano;
	if(sizeof registro/sizeof(char) <= 510-tam){
		tam += sizeof registro/sizeof(char);
		strcat(bloco,registro.c_str());
		if(i+1 == qtd){
			//preenche o vetor com '_'apos o caracter nulo 
			memset(bloco+tam,95,509-tam);
			fseek(parq,512*n_bloco+1,SEEK_SET);
			fwrite(bloco,sizeof(char),510,parq);
			fwrite(&tam,sizeof(short int),1,parq);
			fflush(parq);	
		}
	}
	else{
		memset(bloco+tam,95,509-tam);
		fseek(parq,512*n_bloco+1,SEEK_SET);
		fwrite(bloco,sizeof(char),510,parq);
		fwrite(&tam,sizeof (short int),1,parq);
		fflush(parq);
		n_bloco=0;
		//memset(bloco,0,sizeof bloco);
		bloco[0] = 0;
		fseek(parq,511,SEEK_SET);
	    fread(&tam,sizeof(short int),1,parq);
	    while(510-tam < sizeof registro/sizeof(char) || feof(parq) == 0){
	    	n_bloco ++;
	        fseek(parq,511,SEEK_CUR);
	        fread(&tam,sizeof(short int),1,parq);
	        if(feof(parq) != 0){
	        	tam = 0;
	        }
	    }

	   fread(bloco,sizeof(char),tam,parq);
	   tam += sizeof registro/sizeof(char);
	   strcat(bloco,registro.c_str());

}


    
}
fclose(parq);
	return 0;
}