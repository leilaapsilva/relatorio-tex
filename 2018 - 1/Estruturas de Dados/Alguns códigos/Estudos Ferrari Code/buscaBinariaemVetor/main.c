#include <stdio.h>
#include <stdlib.h>


int buscaBinaria(int v[], int valor, int inicio, int fim)
{
    int meio = (inicio + fim) / 2;
    if(v[meio] == valor)
        return meio;
    if(inicio >= fim)
        return -1;
    else if(v[meio] < valor)
    return buscaBinaria(v,valor, meio + 1,fim);
    else if(v[meio] > valor)
        return buscaBinaria(v,valor, inicio, meio - 1);
}

int PesquisaBinaria (int x, int v[], int inicio, int fim)
{
 int meio = (inicio + fim)/2;
 if (v[meio] == x)
    return meio;
 if (inicio >= fim)
    return -1; // não encontrado
 else
     if (v[meio] < x)
        return PesquisaBinaria(x, v, meio+1,      fim);
     else
        return PesquisaBinaria(x, v,      inicio, meio-1);
}



int main()
{
    int vetor[10] ={1,2,3,4,5,6,7,8,9,10};
    int vetor2[10] ={4,5,6,9,3,2,1,7,10,8};
    printf("Hello world!\n");
    printf("posicao no vetor: %d\n", buscaBinaria(vetor,3,0,9));
    printf("posicao no vetor: %d\n", PesquisaBinaria(9,vetor2,0,9));
    return 0;
}
