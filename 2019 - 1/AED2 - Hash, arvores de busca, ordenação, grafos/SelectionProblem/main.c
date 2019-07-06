#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Digite o tamanho do vetor: \n");
    scanf("%d",&n);
    int vetor[n];
    for(i=0;i<n;i++)
    { scanf("%d",&vetor[i]);  }

    printf("Selecao: %d\n",selecao6(vetor,n,3));
    printf("inversoes: %llu\n",contarInversoesR(vetor,0,n));
    return 0;
}


int selecao6(int v[], int n, int k)
{
     int desl, j;
     int p = 0;
     int r = n - 1;
     while (k != j)
     {   //desl recebe valor aleatorio entre [0, r-p+1]
         desl = (int)(((double)rand() / (RAND_MAX + 1)) * (double)(r - p + 1));
         printf("desl = %d\n", desl);
         troca(&v[p + desl], &v[r]);
         j = separa(v, p, r); //p..j <= v[j], j+1 > v[j]
         printf("j = %d\n", j);
         if (k < j)
            r = j - 1;
         else // if (k > j)
            p = j + 1;
     }
     return v[j];
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
void intercala(int v[], int p, int q, int r)
{
     int i, j, k, *w;
     w = malloc((r - p) * sizeof(int));
     for (i = p; i < q; ++i)
        w[i - p] = v[i];

     for (j = q; j < r; ++j)
        w[r - p + q - j - 1] = v[j];

     i = 0;
     j = r - p - 1;
     for (k = p; k < r; ++k)
        if (w[i] <= w[j])
     v[k] = w[i++];
     else
        v[k] = w[j--];
     free(w);
}

void troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;

}
int separa(int v[], int p, int r)
{
 int i, j, c = v[r];
 i = p;
 for (j = p; j < r; j++)
 if (v[j] <= c)
 {
 troca(&v[i], &v[j]);
 i++;
 }
 troca(&v[i], &v[r]);
 return i;
}

