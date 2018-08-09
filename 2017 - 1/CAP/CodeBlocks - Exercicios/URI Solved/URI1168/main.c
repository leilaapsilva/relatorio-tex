#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char  num[1024];
    int qcasos =  0;
    int i = 0; int j=0;
    int soma = 0;

    scanf("%d",  &qcasos);

    for(i  =  0;  i < qcasos;  i++){
            scanf("%s",  num);
            for(j=0;j<strlen(num); j++){

                if(num[j] == '1')
                        soma += 2;
                else  if(num[j] == '2')
                        soma+=5;
                else if(num[j]  == '3')
                    soma+= 5;
                else if(num[j]  == '4')
                soma+= 4;
                else if(num[j] == '5')
            soma+=5;
                else if(num[j] == '6')
                    soma+=6;
                else if(num[j]== '7')
                    soma+=3;
                else if(num[j] == '8')
                    soma+=7;
                else if(num[j] == '9')
                    soma+=6;
                else if(num[j] == '0')
                    soma+=6;

            }
            printf("%d leds\n",soma);
            soma = 0;

    }

    return 0;
}
