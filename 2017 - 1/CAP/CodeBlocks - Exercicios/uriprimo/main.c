#include <stdio.h>

int main() {

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
     // entradas
     int N, i,  X, j, contDiv,  isPrimo;
     contDiv = 0;
      N =  0; i = 0;  X = 0; j = 0; contDiv = 0;
     isPrimo = 1;
     scanf("%d", &N);

     for(i = 0;i<N;i++){

         scanf("%d", &X);
         contDiv = 0;
        isPrimo = 1;


         if(X == 1 )
            isPrimo = 0;
         else if (X == 2){
            isPrimo = 1;
         }


         for(j = 2; j<X && isPrimo; j++){

             if(X%j == 0){
                 isPrimo  =  0;
                 }
         }


    if(isPrimo){
        printf("%d eh primo\n", X);
    }
    else {
        printf("%d nao eh primo\n",  X);
    }
         }




    return 0;
}
