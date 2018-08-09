#include <stdio.h>
#include <stdlib.h>


int Fatorial(int fat);


int main()
{
    int n;

    printf("Hello world!\n");
    scanf("%d", &n );
    printf("%d", Fatorial(n));
    return 0;
}

int  Fatorial(int fat){
int i;
int acumulador = 1;

for(i = fat; i>1;i--){
    acumulador *= i;


}
return acumulador;




}
