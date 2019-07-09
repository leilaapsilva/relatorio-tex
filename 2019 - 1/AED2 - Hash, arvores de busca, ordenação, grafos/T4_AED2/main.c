#include <stdio.h>
#include <stdlib.h>
#define PAI(i) (i - 1) / 2
#define FILHO_ESQ(i) (2 * i + 1)
#define FILHO_DIR(i) (2 * i + 2)

int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}


void troca(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;

}

int separa1(int v[], int p, int r)
{
     int i = p, j = r - 1, c = v[r];
     while (1)
     {
     while (i < r && v[i] <= c)
     i++;
     while (j > i && v[j] > c)
     j--;
     if (i >= j)
     break;
     troca(&v[i], &v[j]);
     // i++;
     // j--;
 }
 troca(&v[i], &v[r]);
 return i;
}



void bubbleSort(int *v, int n){
    int j,i;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(v[i] > v[j]){
                int aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }


        }
    }
}



void *mallocSafe(int nbytes)
{
    void *p;
    p = malloc(nbytes);
    if (p == NULL)
    {
        printf("ERRO! Malloc devolveu NULL\n");
        exit(EXIT_FAILURE);
    }
    return p;
}

void sobeHeap(int v[], int m)
{
 int f = m;
 while (f > 0 && v[PAI(f)] < v[f])
 {
 troca(&v[f], &v[PAI(f)]);
 f = PAI(f);
 }
}


void desceHeap(int v[], int m, int k)
{
 int p = k, f;
 while (FILHO_ESQ(p) < m && (v[FILHO_ESQ(p)] > v[p] || (FILHO_DIR(p) < m &&
v[FILHO_DIR(p)] > v[p])))
 {
 f = FILHO_ESQ(p);
 if (FILHO_DIR(p) < m && v[FILHO_DIR(p)] > v[f])
 f = FILHO_DIR(p);
 troca(&v[p], &v[f]);
 p = f;
 }
}

void hpsort(int v[], int n){

     int i, m = n, *w;
     w = mallocSafe(sizeof(int) * n);
     for (i = 0; i < n; i++)
        w[n - i - 1] = v[i];
     for (i = 1; i < n; i++)
        sobeHeap(w, i);
     for (m = n - 1; m >= 0; m--)
     {
        v[m] = w[0];
        w[0] = w[m];
        desceHeap(w, m, 0);
     }
     free(w);
}






int main()
{
    char filename[2500]; int vetor1[255000]; int nro; int vetor2[255000];
    //gets(filename);
    scanf("%s",filename);
    int i = 0;
    FILE* pFile = NULL;



    pFile = fopen(filename, "rw+");



   if (pFile == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }




    fscanf(pFile,"%d", &nro);
    //printf("numero pegado = %d \n", nro);
    int aux = nro;
    while(aux > 0){

        fscanf(pFile, "%d", &vetor1[i]);
        //printf("PEguei agora: %d\n", vetor1[i]);
        i++; aux--;
    }
    aux = nro; i = 0;
    while(aux > 0){

        fscanf(pFile, "%d", &vetor2[i]);
        //printf("PEguei agora: %d\n", vetor2[i]);
        i++; aux--;
    }
     aux = nro;
     //int j = 0;

   // quicksortRP(vetor1,0,nro);
   // quicksortRP(vetor2,0,nro);

    //bubbleSort(vetor1,nro);
    //bubbleSort(vetor2,nro);
    hpsort(vetor1,nro);
    hpsort(vetor2,nro);

   /* for(i=0;i<nro;i++){
        printf("%d \n", vetor1[i]);
    }
    for(i=0;i<nro;i++){
        printf("%d \n", vetor2[i]);
    }
    */

    for(i=0;i<nro;i++){
            if(binarySearch(vetor2,0,nro - 1,vetor1[i]) != -1)
                printf("%d\n", vetor1[i]);

    }

   /* for(i=0;i<nro;i++){
        for(j=0;j<nro;j++){
            if(vetor1[i] == vetor2[j])
                printf("%d\n", vetor1[i]);

        }
    }
    */










    fclose(pFile);
    return 0;
}











