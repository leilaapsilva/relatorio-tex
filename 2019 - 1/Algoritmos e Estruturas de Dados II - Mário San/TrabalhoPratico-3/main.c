#include <stdio.h>
#include <stdlib.h>

int main()
{


    int vetoraux[50] = {0};

    FILE *entrada;
    char iai[50];
    scanf("%s",iai);
    entrada = fopen(iai,"r");

    if (entrada == NULL) {
      printf ("\nkd isso!?\n");
      exit (EXIT_FAILURE);
   }

   printf("comecei fscanf");
   int cS; int cR; // sequencia letras e sequencia ruidos
   fscanf(entrada,"%d",&cS);
   fscanf(entrada,"%d",&cR);


   //char p[50] = fscanf(entrada,"%s",&p);
   printf("peguei cS = %d\n", cS);
   printf("peguei cR = %d\n", cR);

   char seqs[50];
   fscanf(entrada,"%s",seqs);

   char seqr[50];
   fscanf(entrada,"%s",seqr);
   printf("%s\n--", seqs);
   printf("%s\n--", seqr);

   int resp;
   resp = basico(seqr,cR,seqs,cS,vetoraux);

    int x = 0;

  /* while(!feof(entrada))
   {
       char textoaux[50];
   //fscanf(entrada,"%s",);
         x = basico(seqr,cR, seqs, cS);
   } */

    printf("Hello world!\n");
    printf("X = %d\n",x);
    fclose(entrada);
    return 0;

}


int basico(char p[], int m, char t[], int n,int *vetoraux)
{
     int i;
     int k, r, ocorrs;
     ocorrs = 0;
     for (k = m; k <= n; k++)
     {
     r = 0;
     // p[1..m] casa com t[k-m+1..k]?
     while (r < m && p[m - r] == t[k - r])
     r++;
     if (r >= m) {
     ocorrs++;
     vetoraux[k] = 1;
     }
     }
     for(i=0;i<n;i++)
     {
        if(vetoraux[i] == 1)
        {
            printf("%d\n",i);
        }
     }
     return ocorrs;
}

/*
int BoyerMoore(char p[], int m, char t[], int n)
{
     int *alcance, *ult, k, r, ocorrs, desloc1, desloc2;
     // pré-processamento da palavra p para "bad character heuristic"
     ult = ppBadCh(p, m);
     // pré-processamento da palavra p para "good suffix heuristic"
     alcance = preProcGoodSuff(p, m);
     // busca da palavra p no texto t
     ocorrs = 0;
     k = m;
     while (k <= n)
     {
     r = 0;
     // p[1..m] casa com t[k-m+1..k]?
     while (r < m && p[m - r] == t[k - r])
        r++;
     if (r >= m)
        ocorrs++;

     if (k == n)
        desloc1 = 1;

     else
        desloc1 = ult[t[k + 1]] + 1;
     if (r == 0)
        desloc2 = 1;
     else
        desloc2 = alcance[m - r + 1];
     k += maximo(desloc1, desloc2);
     }
     free(ult);
     free(alcance);
     return ocorrs;
}

int *preProcGoodSuff(char p[], int m)  {
     int i, q, r;
     int *alcance = malloc((m + 1) * sizeof(int));
     for (i = m; i >= 1; i--)
     {
     q = m - 1;
     r = 0;
     // continua enquanto r for menor que
     // o tamanho do sufixo p[i .. m]
     // e do prefixo p[1 .. q]
     while (r < m - i + 1 && r < q)
     if (p[m - r] == p[q - r])
     r++;
     else
     q--, r = 0;
     alcance[i] = m - q;
     }
     return alcance;
}

int *ppBadCh(char p[], int m)
{
 int i;
 int *ult = malloc(256 * sizeof(int)); // o alfabeto é 0..255
 for (i = 0; i < 256; i++)
 ult[i] = m;
 for (i = 1; i <= m; i++)
 ult[p[i]] = m - i;
 return ult;
}


*/






def ppBadCh(p, m):
    ult = {}
    for i in range(10):
        ult[str(i)] = m

    for i in range(m):
        ult[p[i]] = m - i - 1

    return ult

def BMPython(p, m, t, n):
    ult = ppBadCh(p, m)
    k = m
    res = []
    while(k <= n):
        r = 1
        while(r <= m and p[m-r] == t[k-r]):
            r += 1
        if (r > m):
            res.append(k-m)
        if (k == n):
            k += 1
        else:
            k += ult[t[k]] + 1

    return res

def main():
    nome_arq = input()
    pFile = open(nome_arq, 'r')
    n, m = map(int, pFile.readline().split())
    t = pFile.readline().strip('\n')
    p = pFile.readline().strip('\n')
    res = BMPython(p, m, t, n)
    for i in res:
        print(i)
if _name_ == '_main_':
    main()
