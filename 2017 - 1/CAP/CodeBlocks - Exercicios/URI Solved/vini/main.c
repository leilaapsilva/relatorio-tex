#include  <stdio.h>
#include  <stdlib.h>
#include  <string.h>

 void PrintVet(int *pont, int tamanho, int  *pointertam);
int main() {
    int tam;


    scanf("%d", &tam);

   int v[tam]; int i,j,k;

   for (i=0; i<tam; i++) {
      printf("Informe v[%d]: ", i);
      scanf("%d", &v[i]);
   }
    PrintVet(v,tam, &tam);
    printf("\n\n\n\n\t\a%d", tam);

   return 0;
}

void PrintVet(int *pont, int tamanho, int  *pointertam){
    int i; int j; int  k;
    int cont =  0;
   for (i=0; i<tamanho; i++) {
      for (j=i+1; j<tamanho; j++) {
         if (pont[i] == pont[j]) {
            for (k=j+1; k<tamanho; k++)
               pont[k-1] = pont[k];
            tamanho--;
         }
      }
   }

   printf("Vetor sem repeticoes: \n");
   for (i=0; i<tamanho; i++){
      printf("%d \a", pont[i]);
      cont++;
   }
      *pointertam =  cont;




}
