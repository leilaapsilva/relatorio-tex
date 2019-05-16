#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char *String;
typedef String Chave;
typedef int Valor;

void stInit(int);
void stInsert(Chave, Valor);
Valor stSearch(Chave);
void stDelete(Chave);
void stFree();

void *mallocSafe(int nbytes)
{
    void *p;
    p = malloc(nbytes);
    if (p == NULL)
    {
        printf("ERRO! Malloc devolveu NULL\n");
        exit(EXIT_FAILURE);
    }
    return p;
}

static String copyString(String string)
{
    String str = NULL;
    int len = strlen(string) + 1;
    str = mallocSafe(len * sizeof(char));
    strncpy(str, string, len);
    return str;
}

// implementação com hash table e listas encadeadas

typedef struct celTS CelTS;
struct celTS
{
    Chave chave;
    Valor valor;
    CelTS *prox;
};

static CelTS **tab = NULL;
static int nChaves = 0;
static int M; // tamanho da tabela

// int hash(Chave chave, int M)
// {
//     return chave % M;
// }

// int hash(Chave chave, int M)
// {
//     return (17 * chave + 43) % M;
// }

int hash(Chave chave, int M)
{
    int i, h = 0;
    int primo = 127;
    for (i = 0; chave[i] != '\0'; i++)
        h = (h * primo + chave[i]) % M;
    return h;
}

void stInit(int max)
{
    int h;
    M = max;
    nChaves = 0;
    tab = mallocSafe(M * sizeof(CelTS *));
    for (h = 0; h < M; h++)
        tab[h] = NULL;
}

void stInsert(Chave chave, Valor valor)
{
    CelTS *p;
    int h = hash(chave, M);
    p = tab[h];
    while (p != NULL && strcmp(p->chave, chave))
        p = p->prox;
    if (p == NULL)
    {
        p = mallocSafe(sizeof(*p));
        p->chave = copyString(chave);
        nChaves += 1;
        p->prox = tab[h];
        tab[h] = p;
    }
    p->valor = valor;
}

Valor stSearch(Chave chave)
{
    CelTS *p;
    int h = hash(chave, M);
    p = tab[h];
    while (p != NULL && strcmp(p->chave, chave) != 0)
        p = p->prox;
    if (p != NULL)
        return p->valor;
    return 0;
}

void stDelete(Chave chave)
{
    CelTS *p, *aux;
    int h = hash(chave, M);
    p = tab[h];
    if (p == NULL)
        return;
    if (strcmp(p->chave, chave) == 0)
    {
        tab[h] = p->prox;
        free(p->chave);
        free(p);
        nChaves--;
        return;
    }
    while (p->prox != NULL && strcmp((p->prox)->chave, chave) != 0)
        p = p->prox;
    if (p->prox != NULL)
    {
        aux = p->prox;
        p->prox = aux->prox;
        free(aux->chave);
        free(aux);
        nChaves--;
    }
}

void stFree()
{
    CelTS *p = NULL, *q = NULL;
    int h;
    for (h = 0; h < M; h++)
    {
        p = tab[h];
        while (p != NULL)
        {
            q = p;
            p = p->prox;
            free(q->chave);
            free(q);
        }
    }
    free(tab);
    tab = NULL;
    nChaves = 0;
}

int main()
{
    return 0;
}
