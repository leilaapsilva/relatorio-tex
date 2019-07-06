#include <stdio.h>
#include <stdlib.h>
#define sout printf

#define PAI(i) (i - 1) / 2
#define FILHO_ESQ(i) (2 * i + 1)
#define FILHO_DIR(i) (2 * i + 2)


void desceHeap(int v[], int m, int k)
{
     int p = k, f;
     while (FILHO_ESQ(p) < m && (v[FILHO_ESQ(p)] > v[p] || (FILHO_DIR(p) < m
            && v[FILHO_DIR(p)] > v[p])))
     {
         f = FILHO_ESQ(p);
         if (FILHO_DIR(p) < m && v[FILHO_DIR(p)] > v[f])
         f = FILHO_DIR(p);
         troca(&v[p], &v[f]);
         p = f;
     }
}

int troca(int* a,int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int selecao1(int v[], int n, int k)
{
    //Complexidade de Tempo: O(n*k) | De espaço: O(1)
    //Ideia: Ordenar v[0..k] com **SELECTION** sort  e recuperar k
     int i, j, ind_min, aux;
     for (i = 0; i <= k; i++)
     {
         ind_min = i;
         for (j = i + 1; j < n; j++)
         if (v[j] < v[ind_min])
         ind_min = j;
         troca(&v[i], &v[ind_min]);
     }
    return v[k];
}

int selecao2(int v[], int n, int k)
{
     //Ideia: Mesma coisa que selecao1, mas utilizando HeapSort no vetor[k..n-1]
     //Eficiência de tempo: O(n + (n - k) lg n)
     //Eficiência de espaço: O(1) espaço adicional


     int i, m = n;

     for (i = n / 2; i >= 0; i--)       //Constrói Heap (linear)
        desceHeap(v, n, i);

        printV(v,n);

     for (m = n - 1; m >= k; m--)
     {
         troca(&v[0], &v[m]);
         desceHeap(v, m, 0);
     }

     return v[k];

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

// p indica a primeira posicao e r a ultima
int selecao3(int v[], int p, int r, int k)
{
 int j;
 j = separa(v, p, r);
 if (k == j)
 return v[j];
 if (k < j)
 return selecao3(v, p, j - 1, k);
 // if (k > j)
 return selecao3(v, j + 1, r, k);
}


// p indica a primeira posicao e r a ultima
int selecao6(int v[], int n, int k)
{
     int desl, j;
     int p = 0;
     int r = n - 1;
     while (k != j)             //Recursão Caudal,
     {
         desl = (int)(((double)rand() / (RAND_MAX + 1)) * (double)(r - p + 1));
         troca(&v[p + desl], &v[r]);
         j = separa(v, p, r);
         if (k < j)
            r = j - 1;
         else // if (k > j)
            p = j + 1;
     }
     return v[j];
}



int printV(int *v, int tam)
{
    int i;
    for(i=0;i<tam;i++)
    {
        sout("%d ", v[i]);

    } sout("\n");

}

int main()
{
    int i;
    sout("Hello world!\n");
    int vetor[10] = {1,3,7,8,9,4,5,2,0,6};

    int k = 6; int tam = 10;
    sout("\n");
    sout("selecao1 com k = %d no vet\or eh %d\n",k,selecao1(vetor,tam,k));

    sout("selecao2 com k = %d no vetor eh %d\n",k,selecao2(vetor,tam,k));
    sout("selecao3 com k = %d no vetor eh %d\n",k,selecao3(vetor,0,tam,k));
    sout("selecao6 com k = %d no vetor eh %d\n",k,selecao6(vetor,tam,k));





    return 0;
}
