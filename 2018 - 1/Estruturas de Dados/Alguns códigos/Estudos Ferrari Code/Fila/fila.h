
struct Fila{
    int inicio;
    int fim;
    int total;
    int elementos[10];



};


void create(struct Fila *f);
void inserir(struct Fila *f, int ele);
int retirar(struct Fila *f);
int isEmpty(struct Fila f);
int isFull(struct Fila f);
