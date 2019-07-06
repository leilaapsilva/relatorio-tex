#include <stdio.h>
#include <stdlib.h>



int hash0(Chave chave, int M){  // h(chave) = chave % M

        return chave % M;
}

                                                        // funcoes aleatorias nao são viaveis, pois é
                                                        // necessário que seja possivel realizar consultas posteriormente

int hash1(Chave chave, int M){  // h(chave) = (a * chave + b) % M

 return (17 * chave + 43) % M;
}
int hash(Chave chave, int M){           // para chaves que são 'strings'
     int i, h = 0;
     int primo = 127;
         for (i = 0; chave[i] != '\0'; i++)
            h = (h * primo + chave[i]) % M;
     return h;
}





int sort("a"){

}

int binarySearch(int *v, int n, int y){

}

int twoSumBruteForce(int *v, int n, int t){         // meia boca        O(n²) // aaaa
    int i; int j;
    for(i=0;i < n;i++)
        for(j= i + 1;j<n;j++)
                if(v[i] + v[j] == t)
                        return 1;
        return 0;

}


int twoSumSortSearch(int *v, int n, int t){          // parece boa ideia, O(nlogn)
     int i, j, y;
     sort(v, n);
         for (i = 0; i < n; i++){
         y = t - v[i];
         if (binarySearch(v, n, y))
            return 1;
         }

     return 0;
    }




int twoSumHashTable(int v[], int n, int t)                  // O(n).
{
     int i, j, y;
     int h[n];

     for (i = 0; i < n; i++)
        insertHashTable(h, n, v[i]);

     for (i = 0; i < n; i++){
         y = t - v[i];
         if (lookupHashTable(h, n, y))
         return 1;
     }
     return 0;
}

int main()
{
    printf("Hello world!\n");




    return 0;
}
