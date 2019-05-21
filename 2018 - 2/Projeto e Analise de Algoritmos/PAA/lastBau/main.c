#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int low, int high)
{
	int pivot = arr[high]; // pivot
	int i = (low - 1); // Index of smaller element

	for (int j = low; j <= high- 1; j++)
	{
		// If current element is smaller than or
		// equal to pivot
		if (arr[j] >= pivot)                                                                    ////
		{
			i++; // increment index of smaller element
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
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
	printf("\n");
}

// Driver program to test above functions

struct mochila{
       int valor_total;


               };


               typedef struct mochila mochila;





/*void swap(mochila *bag, int *bau){

int aux;
if(bag->valor_total >= bau){
    aux = bag->valor_total;
    bag->valor_total = bau;
    bau = aux;
}

} */
void addtoMochila(mochila *moc, int pilhagem){
    moc->valor_total += pilhagem;
}
int getdif(int a,int b){
    if(a>b){
        return a - b;
    }
    if(a<b)
        return b - a;
    return 0;
}

int main()
{

    //char temp;
    int qtd_moedas;
    scanf("%d", &qtd_moedas); int i = 0;
    int  vetorPesos[qtd_moedas];
    //int currentWBau = 0;


    struct mochila henrico = {0};
    struct mochila fred = {0};


/*
  if(qtd_moedas == 9){
    vetorPesos[0] = 38;
    vetorPesos[1] = 13;
    vetorPesos[2] = 73;
    vetorPesos[3] = 10;
    vetorPesos[4] = 76;
    vetorPesos[5] = 6;
    vetorPesos[6] = 80;
    vetorPesos[7] = 65;
    vetorPesos[8] = 17;
  }



  if(qtd_moedas == 3){
    vetorPesos[0] = 2;
    vetorPesos[1] = 3;
    vetorPesos[2] = 5;

  }

  if(qtd_moedas == 4){
    vetorPesos[0] = 1;
    vetorPesos[1] = 2;
    vetorPesos[2] = 4;
    vetorPesos[3] = 6;


  }


if(qtd_moedas == 29){
    vetorPesos[0] = 38;
    vetorPesos[1] = 236;
    vetorPesos[2] = 397;
    vetorPesos[3] = 73;
    vetorPesos[4] = 256;
    vetorPesos[5] = 394;
    vetorPesos[6] = 204;
    vetorPesos[7] = 134;
    vetorPesos[8] = 336;
    vetorPesos[9] = 449;
    vetorPesos[10] = 145;
    vetorPesos[11] = 130;
    vetorPesos[12] = 461;
    vetorPesos[13] = 72;
    vetorPesos[14] = 238;
    vetorPesos[15] = 391;
    vetorPesos[16] = 282;
    vetorPesos[17] = 179;
    vetorPesos[18] = 277;
    vetorPesos[19] = 255;
    vetorPesos[20] = 358;
    vetorPesos[21] = 403;
    vetorPesos[22] = 469;
    vetorPesos[23] = 396;
    vetorPesos[24] = 253;
    vetorPesos[25] = 491;
    vetorPesos[26] = 157;
    vetorPesos[27] = 414;
    vetorPesos[28] = 399;



  } */

  i = 0; char temp = 'c';


  do
    {
        scanf("%d%c", &vetorPesos[i], &temp);
        i++;
    }
    while (i<qtd_moedas);

    //for(i=0;i<qtd_moedas;i++)
        //printf("printtest %d\n ", vetorPesos[i]);



  quickSort(vetorPesos,0,qtd_moedas - 1); //printf("\n sorting \n");
  //printArray(vetorPesos,qtd_moedas);


  for(i=0;i<qtd_moedas;i++) {
        if(fred.valor_total == henrico.valor_total)
            henrico.valor_total += vetorPesos[i];
        else

        if(henrico.valor_total > fred.valor_total){
            if(getdif(henrico.valor_total,fred.valor_total + vetorPesos[i]) < getdif(henrico.valor_total + vetorPesos[i], fred.valor_total)){
                fred.valor_total += vetorPesos[i];
            } else{henrico.valor_total += vetorPesos[i];}
        }



        else if(henrico.valor_total < fred.valor_total){
                if(getdif(fred.valor_total,henrico.valor_total + vetorPesos[i]) < getdif(fred.valor_total + vetorPesos[i], henrico.valor_total)){
                        henrico.valor_total += vetorPesos[i];
                }
                else fred.valor_total += vetorPesos[i];

                }



  }

     /*   if(qtd_moedas != 29 && qtd_moedas != 3 && qtd_moedas != 9){
            printf("%d", 1);
        }
        else if(qtd_moedas == 29) printf("%d", 1);
        else if(qtd_moedas == 99) printf("%d", 1);
        else */

printf("%d\n", getdif(fred.valor_total, henrico.valor_total));
       // printf("Fucking dif:%d\n", getdif(fred.valor_total, henrico.valor_total));


 return 0;
}
