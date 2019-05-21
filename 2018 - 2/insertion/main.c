/*
  Testes de ordenacao
  Jander Moreira, 2018
  Organizacao e Recuperacao da Informacao
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef SEED
	#define SEED 1234
#endif

/**
* start, stop: medida de tempo de execucao
*/

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


int swap(int *v, int i, int j){

        int aux = v[j];
        v[j] = v[i];
        v[i] = aux;

        }


int escolhePivo(int *v,int inicio, int fim){
        return (inicio + fim) /2;

}

quickSort(int *v, int inicio, int fim){
    quickPart(v,inicio,fim);
}


void quickPart(int *v, int inicio, int fim){
    int i, j;
    int esq = inicio;
    int dir = fim; int pivo = v[escolhePivo(v,inicio,fim)];

    while(esq <= dir){

         while(v[esq] < pivo){
            esq++;
         }
         while(v[dir] > pivo){
            dir--;
            }

          if(esq <= dir) {
                swap(v,esq,dir);
                esq++;
                dir--;
          }


    }
    if(dir > inicio){
        quickSort(v, inicio,dir);
    }
    if(esq < fim){
            quickSort(v,esq,fim);

    }



}

void selection_sort(int *v, int n){
    unsigned int i,j,ind_min, pos;

    ind_min = 0;
    for(i=0;i< n - 1;i++){

        for(j=i+1;j<n;j++)
       if(v[j] < v[ind_min])
            ind_min = j;
            //pos = j;
        }
       int aux = v[ind_min];
       v[ind_min] = v[i];
       v[i] = aux;

}


void insertion_sort(int *v, int n){

int i,j;

for(i=1;i<n;i++){

	int item = v[i];

	j = i - 1;
    while(j >=0 && v[j] > item){
        int aux = v[j - 1];
        v[j-1] = v[j];
        v[j] = aux;

    }


	}



}


clock_t globaltime;
void start(){
	globaltime = clock();
}
void stop(){
	printf("Tempo: %.5fms\n",
		(float)(clock() - globaltime)/CLOCKS_PER_SEC*1000);
}

/**
* aleatorio: preenche um vetor com dados aleatorios
*/
void aleatorio(unsigned int *vetor, int tamanho){
	srand(SEED); // semente fixa
	for(int i = 0; i < tamanho; i++)
		vetor[i] = rand();
}

/**
* quase_ordenado: preenche um vetor com dados quase ordenados
*/
void quase_ordenado(unsigned int *vetor, int tamanho){
	srand(SEED); // semente fixa
	vetor[0] = rand() % 5;
	for(int i = 1; i < tamanho; i++)
		vetor[i] = vetor[i-1] + (rand() % 8 - 2);
}

/**
* quase_invertido: preenche um vetor com dados quase invertidos
*/
void quase_invertido(unsigned int *vetor, int tamanho){
	srand(SEED); // semente fixa
	vetor[tamanho - 1] = rand() % 5;
	for(int i = tamanho - 2; i >= 0; i--)
		vetor[i] = vetor[i+1] + (rand() % 8 - 2);
}

/**
* imprima: apresenta o vetor na tela
*/
void imprima(unsigned int *vetor, int tamanho){
#ifndef QUIET
	for(int i = 0; i < tamanho; i++)
		printf("%15d: %13d\n", i, vetor[i]);
#endif
}

/*
* verifique: verifica se esta ordenado
*/
int verifique(unsigned int *vetor, int tamanho){
	int i = 1;
	while(i < tamanho && vetor[i-1] <= vetor[i])
		i++;
	return i == tamanho;
}

/*
* ordenado: apresenta mensagem se vetor esta ordenado
*/
void ordenado(unsigned int *vetor, int tamanho){
	if(verifique(vetor, tamanho))
		printf("Ordenado\n");
	else
		printf("Nao ordenado\n");
}


int main(){
	// Tamanho
	int tamanho;
	printf("Numero de posicoes do vetor: ");
	scanf("%d", &tamanho);

	// Vetor
	unsigned int vetor[tamanho];

	// Preenchimento
	aleatorio(vetor, tamanho);
	imprima(vetor, tamanho);
	ordenado(vetor, tamanho);
	start();
	//quicksort(vetor, tamanho);
	//insertion_sort(vetor,tamanho);
	quickSort(vetor,0, tamanho - 1);
	//

	//
	HeapSort(vetor, tamanho);
	stop();
	imprima(vetor, tamanho);
	ordenado(vetor, tamanho);

	return 0;
}






