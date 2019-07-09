struct Node{
    int elemento;
    struct Node *proximo;
    };


struct Lista{
    struct Node *inicio;
    };


void create(struct Lista *lista);
void inserir(struct Lista *lista,int elemento);
int isEmpty(struct Lista lista);
int retirar(struct Lista *lista);
void listar(struct Lista lista);
