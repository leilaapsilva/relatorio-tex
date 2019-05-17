#include <stdio.h>

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */

     int t,i,j; j = 0;
     int n[1000];
     scanf("%d", &t);



     for(i=0;i<t;i++ ){
         n[j] = i;
     }




        for(i = 0; i<1000;i++){
            printf("N[%d] = %d\n", i, n[i]);
     }


    return 0;
}
