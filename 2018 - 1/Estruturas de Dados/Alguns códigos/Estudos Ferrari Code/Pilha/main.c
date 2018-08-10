#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int main()
{
    int valor;

    struct Pilha p;
    create(&p);
    printf("Digite um valor ai!\n");
    scanf("%d", &valor);
    push(&p,valor);
    printf("Valor no topo: %d\n", p.valores[p.topo]);
    push(&p,3);
    printf("Valor no topo: %d\n", p.valores[p.topo]);
    push(&p,4);
    printf("Valor no topo: %d\n", p.valores[p.topo]);
    printf("popeando \n");
    valor = pop(&p);
    printf("Valor no topo: %d\n", p.valores[p.topo]);
    valor = pop(&p);
    printf("Valor no topo: %d\n", p.valores[p.topo]);
    valor = pop(&p);
    printf("Valor no topo: %d\n", p.valores[p.topo]);
    valor = pop(&p);
    printf("Valor no topo: %d\n", p.valores[p.topo]);
    valor = pop(&p);
    printf("Valor no topo: %d\n", p.valores[p.topo]);




    return 0;
}
