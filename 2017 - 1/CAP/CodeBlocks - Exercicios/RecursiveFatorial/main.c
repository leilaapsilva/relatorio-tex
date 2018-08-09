#include <stdio.h>
#include <stdlib.h>


int fatorial(int x);

int main()
{   int n;
    int resultado;
    printf("Informe o valor do numero inteiro e calcularei o fatorial: \n");
    scanf("%d", &n);
    resultado = fatorial(n);
    printf("O fatorial de %d eh: %d\n", n, resultado);

    return 0;
}

int fatorial(int x){
    int resultado = 0;
    if(x == 0){
        resultado = 1;

    }
    else{
    resultado = x * fatorial(x - 1);
    }
    return resultado;

}
