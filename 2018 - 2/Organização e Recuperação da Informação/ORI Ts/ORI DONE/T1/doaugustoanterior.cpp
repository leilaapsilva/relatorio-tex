#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<vector>

using namespace std;

struct registro
  {
    string RA;
    string nome;
    string curso;
    string ano;
  };
typedef struct registro Dados;

void menu()
{
  printf("--------- Menu -------\n");
  printf("Escolha uma opcao:\n");
  printf("1 - Gravar dados \n");
  printf("9 - Sair\n");
}



int main()
{


//          ---------- PARTE 1: CRIAÇÃO DO ARQUIVO E POPULAÇÃO DOS DADOS ---------


  // Abertura do arquivo binario em modo escrita e verificação de erros

  fprintf(stderr,"Ola, qual nome você quer dar para o arquivo?");
  string nome_arquivo;
  cin>>nome_arquivo;

  nome_arquivo += ".dat";

  FILE *parq;
  parq = fopen(nome_arquivo.c_str(),"wb");

  if(parq == NULL)
    fprintf(stderr,"Erro na abertura do arquivo\n");


  //Recebimento da quantidade de registros
 fprintf(stderr,"Quantidade de registros:");
  int qtd;
  cin>>qtd;


  Dados registro[qtd];
  int i=0;
  int soma=0;



  /*
   -- Perguntar --

   Como colocar os 2 bytes no final do bloco
   Cono colocar os demilitadores do final do campo e registros
   fazer busca.


  */


  /*
  Preenchimento do vetor de structs e verificação dos tamanhos do campo e registro.
  */int j;
   char divisor_registro = (char) 10;
   vector<int> tam_blocos;
   tam_blocos.push_back(0);
  for(i=1;i <= qtd; i++)
  {
    j = 0;
    soma = 0;
    do
    {
      if(soma > 510)
      {
        fprintf(stderr,"Tamanho do registro exedeu :(");
      }

      fprintf(stderr,"Digite o RA, nome completo, curso e ano\n");

      cin>>registro[i].RA;
      registro[i].RA += (char) 13;
      while(registro[i].RA.length() > 200)
      {
       fprintf(stderr,"Informe um RA menor");
        cin>>registro[i].RA;
        registro[i].RA += (char) 13;

      }

      cin>>registro[i].nome;
      registro[i].nome += (char) 13;
      while(registro[i].nome.length() > 200)
      {
        fprintf(stderr,"Informe um nome menor");
        cin>>registro[i].nome;
        registro[i].nome += (char) 13;
      }

      cin>>registro[i].curso;
      registro[i].curso += (char) 13;
      while(registro[i].curso.length() > 200)
      {
        fprintf(stderr,"Informe um curso menor");
        cin>>registro[i].curso;
        registro[i].curso += (char) 13;
      }

      cin>>registro[i].ano;
      registro[i].ano += (char) 13;
      while(registro[i].ano.length() > 200)
      {
        fprintf(stderr,"Informe um ano menor");
        cin>>registro[i].ano;
        registro[i].ano += (char) 13;
      }

      soma = registro[i].RA.length() + registro[i].nome.length() + registro[i].curso.length() + registro[i].ano.length();

    } while(soma > 510);
    while(tam_blocos[j]+soma >510){ 

      if(tam_blocos.size() == j){
        tam_blocos.push_back(0);
      }

      j++;
    }
  fseek(parq,j*512+tam_blocos[j],SEEK_SET);
  fwrite(&registro[i], sizeof(char)*soma,1, parq);
  fwrite(&divisor_registro,sizeof(char),1,parq);
  fseek(parq,510*(j+1),SEEK_SET);
  fwrite(&tam_blocos[j],sizeof(char),2,parq);

  }
 
  

  //Gravação dos registros
  fclose(parq);




  return 0;
}
