#include <stdio.h>
#include <stdlib.h>



void imprima(unsigned int *vetor, int tamanho){
#ifndef QUIET
	for(int i = 0; i < tamanho; i++)
		printf("%15d: %13d\n", i, vetor[i]);
#endif
}



int heapFy(int *v, int n){
   unsigned int i,aux, filho, pai;
    for(i=1;i<n;i++){
        aux = v[i];
        filho = i;
        pai = ((filho - 1) /2);
        while(filho > 0 && v[pai] < aux){
            v[filho] = v[pai];
            filho = pai;
            pai = (filho - 1) /2;

        }
        v[pai] = aux;

 }


}

void HeapSort(int *v, int n){
    int i = n-1; unsigned int pai, filho, aux;
    while(i<2){
        aux = v[0];
        v[i] = v[0];
        v[0] = aux;

        aux = v[0];
        pai = 0;
        if(v[pai * 2 + 1] > v[2*pai + 2] && 2*pai+2 >= i ){
            filho = 2*pai + 1;

        }
        else{filho = 2*pai + 2;}

    while(pai<i && v[filho] < v[pai]){
            v[pai] = v[filho];
    pai = filho;
    if(v[2*pai+1] > v[2*pai+2] && v[2*pai+2] >=i){
        filho = 2*pai+1;
    }
    else{filho = 2*pai+2;}


    }
    v[filho] = aux;
    }
}
int main()
{
    printf("Hello world!\n");

    return 0;
}
