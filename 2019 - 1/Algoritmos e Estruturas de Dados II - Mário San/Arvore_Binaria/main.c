#include <stdio.h>
#include <stdlib.h>
#include "string.h"



typedef int Chave;

typedef struct Node{
     struct Node *esq;
     struct Node *dir;
     struct Node *pai;
     Chave chave;



} Node;

typedef Node *Arvore;

//Busca(k)
Node* buscaI(Arvore r, Chave chave)
{
     while (r != NULL && r->chave != chave)
     {
         if (chave < r->chave)
            r = r->esq;
         else
            r = r->dir;
     }
     if(r == NULL)
     {
         printf("n to na arvore n bisho\n");
         return NULL;
     }
     return r;
}
/*min (max) - com eficiência O(h)
○ comece na raiz
○ desça pelo filho esquerdo (direito) até encontrar um apontador vazio
○ devolva um apontador para o último objeto visitado */

Node* min(Arvore r)
{
     while (r->esq != NULL)
        r = r->esq;
     return r;
}
Node* max(Arvore r)
{
     while (r->dir != NULL)
        r = r->dir;
     return r;
}
/*● predecessor (sucessor) - com eficiência O(h)
○ encontre o objeto alvo usando busca
○ a) se o filho esquerdo (direito) é não vazio, devolva max da subárvore
enraizada neste filho
○ b) caso contrário, siga repetidamente apontadores para o antecessor
de x até visitar nós y e z tal que y é filho direito (esquerdo) de z.
Devolva z.
■ observe que x é o min (max) da subárvore direita de z. Portanto,
x é sucessor (predecessor) de z.
○ c) se não encontrar, devolva “none”.
*/
Node *predecessor(Node *x)
{
     Node *p;
     if (x->esq != NULL)
        return max(x->esq);

     p = x->pai;
     while (p != NULL && p->esq == x)
     {
         x = p;
         p = p->pai;
     }
     return p;
}
/*          10
         8     13
       4  9  12  55 */

/*
● percurso ordenado - com eficiência O(n)
○ se árvore corrente não for vazia
■ chame recursivamente “percurso ordenado” para subárvore
enraizada no filho esquerdo
■ devolva objeto da raíz
■ chame recursivamente “percurso ordenado” para subárvore
enraizada no filho direito */
void inOrder(Arvore r)
{
     if (r != NULL)
     {
         inOrder(r->esq);
         printf("%d ", r->chave);
         inOrder(r->dir);
     }
}
/*
seleção(i) - com eficiência O(altura)
○ para ficar eficiente é necessário armazenar, em cada nó, o número de
objetos (tam) na árvore enraizada neste objeto.

■ isso nos obriga a atualizar esses valores nas operações que
alteram a árvore, i.e., inserção e remoção.
*/
/*
typedef struct noh
{
 Chave chave;
 Item conteudo;
 int tam;
 struct noh *pai;
 struct noh *esq;
 struct noh *dir;
} Noh; */

/*
note que, dada uma árvore com raíz x, filho esquerdo y e filho direito z,
temos a relação:
■ tam(x) = tam(y) + tam(z) + 1
○ comece na raiz
■ seja tam_fe = tam(filho esquerdo)
■ se i = tam_fe + 1 devolva um apontador para a raiz
■ se i < tam_fe + 1 chame “selecao(i)” recursivamente na
subárvore esquerda
■ se i > tam_fe + 1 chame “selecao(i - tam_fe - 1) recursivamente
na subárvore direita
Noh *selecao(Arvore r, int i)
{
 int t_esq;
 if (r == NULL)
 return NULL;
 if (r->esq != NULL)
 t_esq = r->esq->tam;
 else
 t_esq = 0;
 if (i == t_esq + 1)
 return r;
 if (i < t_esq + 1)
 return selecao(r->esq, i);
 // i > t_esq + 1
 return selecao(r->dir, i - t_esq - 1);
}
/*



*/

/*

● rank(k) - com eficiência O(altura)
○ assim como no caso da seleção, para ficar eficiente é necessário
armazenar, em cada nó, o número de objetos (tam) na árvore
enraizada neste objeto.
■ lembrar de atualizar o valor de tam nas operações que
modificam a árvore.
○ note que, o rank de uma chave k corresponde ao número de objetos
com chave menor ou igual a k.
■ por isso a ideia é fazer uma busca em que vamos somando o
número de nós que ficou à esquerda do caminho percorrido.
○ comece na raiz, com uma variável rank = 0.
○ repita o seguinte processo até chegar num apontador vazio
■ se k < chave do nó atual desça para o filho esquerdo
■ caso contrário
● rank += tam(filho esquerdo) + 1
● se a chave do nó atual = k então devolva rank
● se k > chave do nó atual então desça para o filho direito
○ devolva rank
*/
int rank(Arvore r, Chave chave)
{
     int tam = 0, t_esq;
     while (r != NULL && r->chave != chave)
     {
         if (chave < r->chave)
         r = r->esq;
         else
         {
             if (r->esq != NULL)
                t_esq = r->esq->tam;
             else
                t_esq = 0;
             tam += t_esq + 1;
             r = r->dir;
        }
     }
     if (r != NULL)
     {
         if (r->esq != NULL)
            tam += r->esq->tam;
         tam++;
     }
     return tam;
} */

int main()
{
    Node nozinho;
    int x = 6;
    nozinho.chave = x;
   // noh->fdir = NULL;
   // noh->fesq = NULL;

    printf("chave dele : %d\n", nozinho.chave);

    printf("Hello world!\n");
    return 0;
}
