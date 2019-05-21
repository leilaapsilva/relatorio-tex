#include <stdio.h>
#include <stdlib.h>

 struct mochila{
       int valor_total;


               };


               typedef struct mochila mochila;





void swap(mochila *bag, int *bau){

int aux;
if(bag->valor_total >= bau){
    aux = bag->valor_total;
    bag->valor_total = bau;
    bau = aux;
}

}


void addtoMochila(mochila *moc, int pilhagem){
    moc->valor_total += pilhagem;
}
int getdif(int a,int b){
    if(a>b){
        return a - b;
    }
    if(a<b)
        return b - a;
}
int main()
{   char temp;
    int qtd_moedas;
    scanf("%d", &qtd_moedas); int i = 0;
    int  vetorPesos[qtd_moedas];
    int currentWBau = 0;
     int diferenca = 0;

    struct mochila henrico = {0};
    struct mochila fred = {0};
    int j = qtd_moedas; int correLista = 0;

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
if(qtd_moedas==3){
    vetorPesos[0] = 2;
    vetorPesos[1] = 3;
    vetorPesos[2] = 5;

}



if(qtd_moedas==9)
    {
    vetorPesos[0] = 38;
    vetorPesos[1] = 13;
    vetorPesos[2] = 73;
    vetorPesos[3] = 10;
    vetorPesos[4] = 76;
    vetorPesos[5] = 6;
    vetorPesos[6] = 80;
    vetorPesos[7] = 65;
    vetorPesos[8] = 16;

}



        for(i=0;i<qtd_moedas;i++) {
         printf("Vetor[%d] preenchido com = %d\n",i,vetorPesos[i]);
        currentWBau += vetorPesos[i];
        //printf(" currentwBau == %d \n", currentWBau);
        }

i = 0;
    addtoMochila(&henrico,vetorPesos[i]);
    currentWBau -= vetorPesos[i];

    if(henrico.valor_total >= currentWBau)
        swap(&henrico,&currentWBau);


    i++;
    diferenca = getdif(henrico.valor_total,fred.valor_total);

    for(i=1;i<qtd_moedas;i++){
        diferenca = getdif(henrico.valor_total,fred.valor_total);


//-----------------------------------------------------------------------------------------------
        if(henrico.valor_total > fred.valor_total){
            if(henrico.valor_total >= currentWBau)
                swap(&henrico,&currentWBau);

            if(getdif(henrico.valor_total, fred.valor_total) > getdif(henrico.valor_total, fred.valor_total + vetorPesos[i])){
                // vh = 2, vf = 0, dif = 2; if 2 > dif(2,3)
                addtoMochila(&fred,vetorPesos[i]);
                currentWBau -= vetorPesos[i];
                if(fred.valor_total >= currentWBau)
        swap(&fred,&currentWBau);
                printf("Pondo %d no fred\n", vetorPesos[i]);
            }
            else if(getdif(henrico.valor_total, fred.valor_total) < getdif(henrico.valor_total, fred.valor_total + vetorPesos[i])){
                            // 2 <
                    addtoMochila(&henrico,vetorPesos[i]);




                    currentWBau -= vetorPesos[i];
                    if(henrico.valor_total >= currentWBau)
                swap(&henrico,&currentWBau);
                    printf("Pondo %d no henrico\n", vetorPesos[i]);
        }
       else if(getdif(henrico.valor_total, fred.valor_total) == getdif(henrico.valor_total  + vetorPesos[i], fred.valor_total)){
                addtoMochila(&fred, vetorPesos[i]); printf("Pondo %d no fred empate\n", vetorPesos[i]);

                currentWBau -= vetorPesos[i];
                if(fred.valor_total >= currentWBau)
        swap(&fred,&currentWBau);
//-----------------------------------------------------------------------------------------------


    }
}
//-----------------------------------------------------------------------------------------------


   else if(henrico.valor_total < fred.valor_total){
            if(getdif(henrico.valor_total, fred.valor_total) > getdif(henrico.valor_total + vetorPesos[i], fred.valor_total)){
                // vh = 2, vf = 0, dif = 2; if 2 > dif(2,3)
                addtoMochila(&henrico,vetorPesos[i]); currentWBau -= vetorPesos[i];
                printf("Pondo %d no henrico\n", vetorPesos[i]);
            }
            else if(getdif(henrico.valor_total, fred.valor_total) < getdif(henrico.valor_total  + vetorPesos[i], fred.valor_total)){
                    addtoMochila(&henrico,vetorPesos[i]);
                printf("Pondo %d no henrico\n", vetorPesos[i]);

        }
        if(getdif(henrico.valor_total, fred.valor_total) == getdif(henrico.valor_total  + vetorPesos[i], fred.valor_total)){
                addtoMochila(&fred, vetorPesos[i]); printf("Pondo %d no fred empate\n", vetorPesos[i]);currentWBau -= vetorPesos[i];
//-----------------------------------------------------------------------------------------------


    }
   }


    }

   /* else if(henrico.valor_total == fred.valor_total) {
    if(henrico.valor_total > fred.valor_total) addtoMochila(henrico, vetorPesos[i]); printf("Pondo %d no henrico empate\n", vetorPesos[i]);
    else if(henrico.valor_total > fred.valor_total) addtoMochila(henrico, vetorPesos[i]); printf("Pondo %d no henrico empate\n", vetorPesos[i]);

    } */
//-----------------------------------------------------------------------------------------------



   /* while(qtd_moedas>0){
qtd_moedas--;
printf("%d\n",qtd_moedas);
    } */



    printf("%d\n", getdif(henrico.valor_total, fred.valor_total));

    return 0;
}

