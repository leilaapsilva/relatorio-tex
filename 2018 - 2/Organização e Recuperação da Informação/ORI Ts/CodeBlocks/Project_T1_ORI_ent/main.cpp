#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<vector>

using namespace std;

//Função para inverter(pois é little endian) um número short int
short int inverte(short int n)
{
  int i = 0;
  int resto=0,invertido=0;
  while(n!=0)
  {
    resto = n%16;
    invertido = invertido * 16 + resto;
    n = n/16;
  }
  return invertido;
}

//Função que retorna a primeira posição de uma subcadeia
int pos_RA_buscar(char *texto,char *ra)
{
  int i=0,j=0;
  int ok = 0;
  int pos=0;

  for(i=0; texto[i] != '\0'; i++)
  {
    if(texto[i] == ra[j])
    {
      pos = i;
      ok=1;
      for(j=1;ra[j] != '\0' ; j++)
      {
          if(texto[i+1] != ra[j])
            ok=0;
          i++;
      }
    }
  }
  return pos;
}

int main()
{
  //Declaração das variáveis
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


  //Entrada do nome do arquivo, abertura e verificação de erros de abertura
  fprintf(stderr,"Ola, qual nome voce quer dar para o arquivo?\n");
  cin>>nome_arquivo;
  nome_arquivo += ".dat";

  FILE *parq;
  parq = fopen(nome_arquivo.c_str(),"wb+");

  if(parq == NULL)
    fprintf(stderr,"Erro na abertura do arquivo\n");

  fprintf(stderr,"Quantidade de registros:");
  cin>>qtd;

  //Inserção de dados bloco a bloco
  for(int i=0;i< qtd; i++)
  {

  	RA.clear();
  	nome.clear();
  	curso.clear();
  	ano.clear();
  	registro.clear();

  	fprintf(stderr,"Digite o RA, nome completo, curso e ano\n");
  	cin.ignore();
  	cin>>RA;
  	RA += divisor_campo;
    cin.ignore();
    cin>>nome;
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

    //verificação se ainda é possivel colocar mais registros no bloco
  	if(sizeof registro/sizeof(char) <= 510-tam)
    {
  		tam += sizeof registro/sizeof(char);
      inverte(tam);
  		strcat(bloco,registro.c_str());
  		if(i+1 == qtd)
      {
  			//preenche o vetor com '_'apos o caracter nulo
  			memset(bloco+tam,95,509-tam);
  			fseek(parq,512*n_bloco+1,SEEK_SET);
  			fwrite(bloco,sizeof(char),510,parq);
  			fwrite(&tam,sizeof(short int),1,parq);
  		  fflush(parq);
  		}
  	}
    //criação de outro bloco
  	else
    {
  		memset(bloco+tam,95,509-tam);
  		fseek(parq,512*n_bloco+1,SEEK_SET);
  		fwrite(bloco,sizeof(char),510,parq);
  		fwrite(&tam,sizeof (short int),1,parq);
  		fflush(parq);
  		n_bloco=0;

  		bloco[0] = 0;
  		fseek(parq,511,SEEK_SET);
  	  fread(&tam,sizeof(short int),1,parq);
      //
	    while(510-tam < sizeof registro/sizeof(char) || feof(parq) == 0)
      {
	    	n_bloco ++;
	      fseek(parq,511,SEEK_CUR);
	      fread(&tam,sizeof(short int),1,parq);
	      if(feof(parq) != 0)
	       tam = 0;
  	   }

  	   fread(bloco,sizeof(char),tam,parq);
  	   tam += sizeof registro/sizeof(char);
  	   strcat(bloco,registro.c_str());

     }
   }
  fclose(parq);


  // Busca do RA
  parq = fopen("nome_arquivo","rb");
  rewind(parq);

  char RA_buscar[200];

  fprintf(stderr,"Ola, qual registro voce gostaria de buscar com o RA?\n");
  cin>>RA_buscar;

  char *ptr;

  ptr = strstr(bloco,RA_buscar);

  if(ptr == NULL)
    fprintf(stderr,"*");

  else
  {

    int p;
    int k=0,e=0;//incremento

    // p = primeira posição da subcadeia
    p = pos_RA_buscar(bloco,RA_buscar);
    cout<<p;

    char resultado[510]="";

    for(k=p;bloco[k] != divisor_registro;k++)
    {
      resultado[e] = bloco[k];
      e++;
    }

    for(int i =0; resultado != '\0';i++)
    {
      cout<<resultado[i];
    }

  }




	return 0;
}
