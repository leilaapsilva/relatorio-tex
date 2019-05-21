#include <stdio.h>
#include <stdlib.h>


 struct mochila{
       int valor_total;


               };

typedef struct mochila mochila;

void addtoMochila(mochila *moc, int pilhagem){
    moc->valor_total += pilhagem;
}
int getdif(int a,int b){
    if(a>b){
        return a - b;
    }
    if(a<b)
        return b - a;
        if(a==b)
            return 0;
}
int main()
{



    char temp;
    int qtd_moedas;
    scanf("%d", &qtd_moedas); int i = 0;

    int  vetorPesos[qtd_moedas]; int diferenca = 0;

     mochila henrico = {0};
     mochila fred = {0};
    int j = qtd_moedas; int correLista = 0;

  //   do{
  //      scanf("%d%c", &vetorPesos[j], &temp);
   //     j++;
    //    } while(temp!= '\n' && j<qtd_moedas);
    vetorPesos[0] = 1;
    vetorPesos[1] = 2;
    vetorPesos[2] = 4;
    vetorPesos[3] = 6;

    printf("Fred valor total: %d\n", fred.valor_total);
    printf("Henrico valor total: %d\n\n", henrico.valor_total);

  //  addtoMochila(&henrico,999);

    printf("\nFred valor total: %d\n", fred.valor_total);
    printf("Henrico valor total: %d\n", henrico.valor_total);



        int m,k = qtd_moedas - 1;
         if(qtd_moedas%2 == 0){
        for(m=0,k=qtd_moedas-1;m<k;m++,k--){
            addtoMochila(&henrico,vetorPesos[m]); printf("%d adicionei %d em henrico\n",m, vetorPesos[m]);
            addtoMochila(&fred,vetorPesos[k]);    printf("%d adicionei %d em fred\n",k, vetorPesos[k]);


        }

        }
    if(m==k){
            if(henrico.valor_total < fred.valor_total){
                addtoMochila(&henrico,vetorPesos[m]);    printf("%d adicionei %d em henrico\n",m, vetorPesos[k]);
            }
            else{
                addtoMochila(&fred,vetorPesos[k]);       printf("%d adicionei %d em fred\n",k, vetorPesos[k]);
            }
            }



/*                                                                                           THIS FUCK A PORRA TODA
    addtoMochila(henrico,i);
    i++;
    diferenca = getdif(henrico.valor_total,fred.valor_total);

    for(i=1;i<qtd_moedas;i++){
        diferenca = getdif(henrico.valor_total,fred.valor_total);


//-----------------------------------------------------------------------------------------------
        if(henrico.valor_total > fred.valor_total){
            if(getdif(henrico.valor_total, fred.valor_total) > getdif(henrico.valor_total, fred.valor_total + vetorPesos[i])){
                // vh = 2, vf = 0, dif = 2; if 2 > dif(2,3)
                addtoMochila(fred,vetorPesos[i]);
                printf("Pondo %d no fred\n", vetorPesos[i]);
            }
            else if(getdif(henrico.valor_total, fred.valor_total) < getdif(henrico.valor_total, fred.valor_total + vetorPesos[i])){
                    addtoMochila(henrico,vetorPesos[i]);
                    printf("Pondo %d no henrico\n", vetorPesos[i]);
        }
       else if(getdif(henrico.valor_total, fred.valor_total) == getdif(henrico.valor_total  + vetorPesos[i], fred.valor_total)){
                addtoMochila(fred, vetorPesos[i]); printf("Pondo %d no fred empate\n", vetorPesos[i]);
//-----------------------------------------------------------------------------------------------


    }
}
//-----------------------------------------------------------------------------------------------


   else if(henrico.valor_total < fred.valor_total){
            if(getdif(henrico.valor_total, fred.valor_total) > getdif(henrico.valor_total + vetorPesos[i], fred.valor_total)){
                // vh = 2, vf = 0, dif = 2; if 2 > dif(2,3)
                addtoMochila(henrico,vetorPesos[i]);
                printf("Pondo %d no henrico\n", vetorPesos[i]);
            }
            else if(getdif(henrico.valor_total, fred.valor_total) < getdif(henrico.valor_total  + vetorPesos[i], fred.valor_total)){
                    addtoMochila(henrico,vetorPesos[i]);
                printf("Pondo %d no henrico\n", vetorPesos[i]);

        }
        if(getdif(henrico.valor_total, fred.valor_total) == getdif(henrico.valor_total  + vetorPesos[i], fred.valor_total)){
                addtoMochila(fred, vetorPesos[i]); printf("Pondo %d no fred empate\n", vetorPesos[i]);
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

    printf("Fred valor total: %d\n", fred.valor_total);
    printf("Henrico valor total: %d\n", henrico.valor_total);

    printf("%d\n", getdif(henrico.valor_total, fred.valor_total));

    return 0;
}

