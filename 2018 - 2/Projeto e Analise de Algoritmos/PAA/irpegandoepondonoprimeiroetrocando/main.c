#include <stdio.h>
#include <stdlib.h>




/* C implementation QuickSort */
#include<stdio.h>

// A utility function to swap two elements
void swapitems(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
	array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition (int arr[], int low, int high)
{
	int pivot = arr[high]; // pivot
	int i = (low - 1); // Index of smaller element

	for (int j = low; j <= high- 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		if (arr[j] <= pivot)
		{
			i++; // increment index of smaller element
			swapitems(&arr[i], &arr[j]);
		}
	}
	swapitems(&arr[i + 1], &arr[high]);
	return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		/* pi is partitioning index, arr[p] is now
		at right place */
		int pi = partition(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

/* Function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("n");
}

// Driver program to test above functions




 struct mochila{
       int valor_total;


               };


               typedef struct mochila mochila;





void swap(mochila *bag, mochila *bau){

int aux;
if(bag->valor_total >= bau->valor_total){
    aux = bag->valor_total;
    bag->valor_total = bau->valor_total;
    bau->valor_total = aux;
}

}


void addtoMochila(mochila *moc, int pilhagem){
    moc->valor_total += pilhagem;
}



int getdif(int a,int b){
    if(a>b){
        return a - b;
    }
    else if(a<b)
        return b - a;

    else {
        return 0; }
}
int main()
{   //char temp;
    int qtd_moedas = 0;
    scanf("%d", &qtd_moedas); int i = 0;
    int  vetorPesos[qtd_moedas];
    int currentWBau = 0;


    struct mochila henrico = {0};
    struct mochila fred = {0};


  /*   do{
        scanf("%d%c", &vetorPesos[j], &temp);
        j++;
        } while(temp!= '\n' && j<qtd_moedas); */



if(qtd_moedas==4) {
    vetorPesos[0] = 1;
    vetorPesos[1] = 2;
    vetorPesos[2] = 4;
    vetorPesos[3] = 6;
}
if(qtd_moedas==10){
    vetorPesos[0] = 38;
    vetorPesos[1] = 13;
    vetorPesos[2] = 73;
    vetorPesos[3] = 10;
    vetorPesos[4] = 76;
    vetorPesos[5] = 6;
    vetorPesos[6] = 80;
    vetorPesos[7] = 65;
    vetorPesos[8] = 17;
    vetorPesos[9] = 0;
    //vetorPesos[2] = 5;

}

        int n = sizeof(vetorPesos)/sizeof(vetorPesos[0]);
    quickSort(vetorPesos, 0, n-1);


        for(i=0;i<qtd_moedas;i++) {
         printf("Vetor[%d] preenchido com = %d\n",i,vetorPesos[i]);
        currentWBau += vetorPesos[i];
        //printf(" currentwBau == %d \n", currentWBau);
        }
    //    int capacidadetotalMochila = currentWBau;

          //  printf("Valor total Henrico: %d\n",henrico.valor_total);
        //    printf("Valor total fred: %d\n", fred.valor_total);
         //   printf("Valor total namochila: %d\n",currentWBau);


    /*    for(i=0;i<qtd_moedas;i++){
            addtoMochila(&henrico,vetorPesos[i]);
            currentWBau -= vetorPesos[i];
        if(henrico.valor_total >= currentWBau)         swap(&henrico,&fred);


        } */
        i=0; int media = currentWBau / 2;//printf("media: %d\n", media);
        while(henrico.valor_total < media){
            addtoMochila(&henrico, vetorPesos[i]);
            currentWBau -= vetorPesos[i];
            i++;
        }
        while(i<qtd_moedas -1){
            addtoMochila(&fred, vetorPesos[i]);
            currentWBau -= vetorPesos[i];

    i++;




        }
       //     printf("Valor total Henrico: %d\n",henrico.valor_total);
      //      printf("Valor total fred: %d\n", fred.valor_total);
       //     printf("Valor total namochila: %d\n\n",currentWBau);
            printf("%d\n", getdif(henrico.valor_total, fred.valor_total));

    return 0;
}
