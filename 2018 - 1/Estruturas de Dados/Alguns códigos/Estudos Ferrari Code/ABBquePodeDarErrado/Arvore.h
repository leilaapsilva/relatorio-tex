#include <stdio.h>

typedef int tipoChave; // tipoChave means int;
typedef struct{
    tipoChave Chave;    // Tipo item, é um item qualquer que tem uma chave
    // nome, endereco, etc                    // ex: Pessoa com CPF;

} TipoItem;

typedef struct TipoNo{
        TipoItem item;          //Nó, bolinha na arvore, tem seus dados(item)
        struct TipoNo *esq;     // e ponteiros para seu esq e seu dir
        struct TipoNo *dir;

} TipoNo;
// typedef struct TipoNo* TipoApontador;      -> mais bonito e  facil de entender que merda é essa
typedef struct TipoNo *TipoApontador; // TipoApontador means "Ponteiro pra nó"
typedef TipoApontador TipoArvore; //TipoArvore means Ponteiro pra nó : : : RAIZ



