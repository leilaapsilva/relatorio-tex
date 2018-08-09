#include <stdio.h>

int main() {

    int N,X;
    int i, j;
    int divi = 1;


    scanf("%d", &n);
    int entradas[n];

    for(i = 0; i<n; i++){
     scanf("%d", &entradas[i]);

      for(j = 1;j<n;j++){

        if(entradas[i] % j == 0){
            div++;
        }
   if(divi >2 ){

       printf("%d nao eh primo");
   }
   else{
       printf("%d eh primo");

   }

   i++;
    }


    }


    return 0;
}
