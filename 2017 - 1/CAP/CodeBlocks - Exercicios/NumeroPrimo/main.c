#include <stdio.h>
#include <stdlib.h>


int VerificarPrimo(int n){

    int i;
    int cont = 0;


    if(n < 0)
        printf("Nao eh natural, entao tambem nao eh primo!\n");

    else if(n == 1){
        printf("Este numero nao eh primo!!\n");
        return 0;
    }
    else if(n == 2){
         printf("Este numero  eh primo!!\n");
        return 1;
    }
    else {
    for(i=2;i<n && cont == 0;i++){

        if(n%i == 0)
            cont++;

    }
    if(cont == 0)
        printf("Este numero  eh primo!!\n");
    if(cont > 0)
        printf("Este numero nao eh primo!!\n");
    }
}
int main()
{
    int x;
    printf("Informe o numero para vermos se eh primo\n");
    scanf("%d", &x);
    VerificarPrimo(x);
    main();
    return 0;
}
