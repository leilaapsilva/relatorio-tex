#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Neste problema você deverá ler 15 valores colocá-los em 2
    vetores conforme estes valores forem pares ou ímpares. Só que
     o tamanho de cada um dos dois vetores é de 5 posições. Então,
      cada vez que um dos dois vetores encher, você deverá imprimir
       todo o vetor e utilizá-lo novamente para os próximos números
       que forem lidos. Terminada a leitura, deve-se imprimir o conteúdo
       que restou em cada um dos dois vetores, imprimindo primeiro os valores
        do vetor impar. Cada vetor pode ser preenchido tantas vezes quantas for
            necessário.
Entrada
A entrada contém 15 números inteiros.

Saída

Imprima a saída conforme o exemplo abaixo.  */
int  vImpar[5]; int  contImpar = 0;
int  vPar[5];  int contPar =  0;
int i = 0; int j  = 0;  int  k  = 0;
int  num;

while(i<15){
    scanf("%d", &num);
    if(num%2 ==  0){
        vPar[contPar]  =  num;
        contPar++;
        if(contPar == 5){
            for(j=0;j<5;j++){
                    if(vPar[j] !=  0){
                printf("par[%d] = %d\n", j, vPar[j]);
                vPar[j]  = 0;
           }
                contPar = 0;
            }
        }
    }


    else  if(num%2 !=  0){
        vImpar[contImpar]  =  num;
        contImpar++;
        if(contImpar == 5){
            for(k=0;k<5;k++){
                    if(vImpar[k] !=  0){
                printf("impar[%d] = %d\n", k, vImpar[k]);
                vImpar[k] = 0;
                }
                contImpar = 0;
            }
    }


}
i++;

}

for(i=0;i<5;i++){
    if(vImpar[i] != 0)
        printf("impar[%d] = %d\n", i, vImpar[i]);
}
for(i=0;i<5;i++){

    if(vPar[i] != 0)
    printf("par[%d] = %d\n", i, vPar[i]);

}





    return 0;
}
