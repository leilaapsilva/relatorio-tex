#include <stdio.h>
#include <stdlib.h>

typedef struct Localidade {
    char tipoLogr[25];
    char nomeLogr[50];
    int numero;
    char complemento[50];




} Papai;

struct Endereco{
     Papai localidade;
    char bairro[50];
    char cidade[50];
    char estado[50];
    char pais[50];
    char cep[50];
    char caixaPostal[50];


};
int main()
{

    struct Endereco end;
    end.localidade.



}
