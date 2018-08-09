#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    // Primo: por 1 e por ele mesmo!!!
    int n;

    int i, a,  resto_zero, resto, isprime;
    resto_zero = 0; isprime = 1;



    for(a  = 0; a<10; a++){
        printf("\nInforme o numero: ");
        scanf("%d",  &n);
        resto_zero  = 0;



      for(i = 1; i<=n;i++){

            if(n <= 1){
            isprime = 1;
            break;
            }
            resto =  n%i;
            if(resto  == 0){
                resto_zero++;
            }

    }
    if(resto_zero == 2){
        isprime = 1;
        printf("\n%d  eh primo", n);
       }
        else{
                isprime = 0;
                printf("\n%d  nao eh primo", n);
       }

    }



    return 0;
}
