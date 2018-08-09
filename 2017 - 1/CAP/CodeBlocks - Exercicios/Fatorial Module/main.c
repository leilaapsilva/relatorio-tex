#include <stdio.h>
#include <stdlib.h>

void Fatorial(int x);

int main()
{

    int n,i;
    printf("Diga o numero\n");
    scanf("%d", &n);
    Fatorial(n);


    return 0;
}

void Fatorial(int x){
    int resposta = 1; int i;
      for(i = x; i>=1;  i--){
        resposta *=i;

    }
    printf("O fatorial de %d eh %d\n", x, resposta);


}
