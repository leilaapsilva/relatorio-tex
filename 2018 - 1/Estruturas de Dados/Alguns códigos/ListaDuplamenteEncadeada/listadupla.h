struct DoubleNode{
    int elemento;
    struct DoubleNode* esq;
    struct DoubleNode* dir;
};

struct ListaDupla{
    struct DoubleNode *inicio;
};

void Create(struct ListaDupla *lista);
int isEmpty(struct ListaDupla *lista);
void Inserir(struct ListaDupla *lista, int elemento);
void exibirNaOrdem(struct ListaDupla *lista);
