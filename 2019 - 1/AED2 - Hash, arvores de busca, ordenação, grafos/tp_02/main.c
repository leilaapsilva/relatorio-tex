#include <stdio.h>
#include <stdlib.h>

//João Vitor Azevedo Marciano
//RA: 743554
//Engenharia de Computação



unsigned long long intercala(int v[], int p, int q, int r)
{
     int i, j, k, tam;
     unsigned long long num_inv = 0;
     i = p;
     j = q;
     k = 0;
     tam = r - p;
     int *w = malloc(tam * sizeof(int));
     while (i < q && j < r)
     {
         if (v[i] <= v[j])
             w[k++] = v[i++];

         else // v[i] > v[j]
         {
             w[k++] = v[j++];
             num_inv += q - i;
         }
     }
     while (i < q)
        w[k++] = v[i++];
     while (j < r)
        w[k++] = v[j++];
     for (k = 0; k < tam; k++)
        v[p + k] = w[k];
     free(w);
     return num_inv;
}



unsigned long long contarInversoesR(int v[], int p, int r)
{
 int m;
 unsigned long long num_inv = 0;
 if (r - p > 1)
 {
     m = (p + r) / 2;
     // m = p + (r - p) / 2;
     num_inv += contarInversoesR(v, p, m);
     num_inv += contarInversoesR(v, m, r);
     num_inv += intercala(v, p, m, r);
 }
 return num_inv;
}



int main()
{
    int N; int i;
    scanf("%d",&N);
    int aux = N;
    int vetor[N];
    for(i=0;i<aux;i++){
       scanf("%d", &vetor[i]);
    }
    printf("%llu\n", contarInversoesR(vetor,0,N));
    return 0;
}
