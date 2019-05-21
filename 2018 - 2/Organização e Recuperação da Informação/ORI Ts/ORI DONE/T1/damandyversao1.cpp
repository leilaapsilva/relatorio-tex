#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

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

  //cout<<"Ola, qual nome você quer dar para o arquivo?"<<endl;
  //string nome_arquivo;
  //cin>>nome_arquivo;

  //nome_arquivo = nome_arquivo + ".dat";

  FILE *parq;
  parq = fopen("arquivo.dat","wb");

  if(parq == NULL)
    fprintf(stderr,"Erro na abertura do arquivo\n");


  //Recebimento da quantidade de registros
  cout<< "Quantidade de registros:"<<endl;
  int qtd;
  cin>>qtd;


  Dados registro[3];
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
  */
  for(i=0;i < 3; i++)
  {
    soma = 0;
    do
    {
      if(soma > 510)
      {
        cout<<"Tamanho do registro exedeu :("<<endl;
      }

      cout<<"Digite o RA, nome completo, curso e ano\n";

      cin>>registro[i].RA;
      while(registro[i].RA.length() > 200)
      {
        cout<<"Informe um RA menor"<<endl;
        cin>>registro[i].RA;

      }

      cin>>registro[i].nome;
      while(registro[i].nome.length() > 200)
      {
        cout<<"Informe um nome menor"<<endl;
        cin>>registro[i].nome;
      }

      cin>>registro[i].curso;
      while(registro[i].curso.length() > 200)
      {
        cout<<"Informe um curso menor"<<endl;
        cin>>registro[i].curso;
      }

      cin>>registro[i].ano;
      while(registro[i].ano.length() > 200)
      {
        cout<<"Informe um ano menor"<<endl;
        cin>>registro[i].ano;
      }

      soma = registro[i].RA.length() + registro[i].nome.length() + registro[i].curso.length() + registro[i].ano.length();

    } while(soma > 510);

  }

  fwrite(registro, sizeof(Dados), 3, parq);



  //Gravação dos registros


  fclose(parq);




  return 0;
}
