#include <stdio.h>
#include <stdlib.h>


void Fatorial( int x){
    int fat = x; int n = x;

        if(x<=0){
        printf("Nao existe fatorial de numero negativo\n");
        return 0;
        }
    if(x == 0 || x == 1)
        fat = 1;
    else{

        while(x > 1){
            x--;
            fat *= x;


        }


    }
  printf("fatorial de %d eh: %d\n", n,fat);


}

int main()
{

    int x;
    printf("Informe o numero e darei o fatorial: \n");
    scanf("%d", &x);
    Fatorial(x);



    return 0;
}
