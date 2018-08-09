#include <stdio.h>
#include <stdlib.h>



int dataJuliana(int dia, int mes, int ano);
int main()
{
    /*Escreva uma função dataJuliana que possui como parâmetros formais 3 valores
    inteiros correspondendo aos valores de dia, mês e ano de uma data e retorna o
     número de dias transcorridos no ano em questão.
     Considere a seguinte definição de ano bissexto:
- um ano não divísivel por 100 e divisível por 4 é bissexto
- um ano divisível por 100 e divisível por 400 é bissexto
- os demai anos não são bissextos.
*/  int dia, mes, ano;
scanf("%d %d %d", &dia, &mes, &ano);
    int i = dataJuliana(dia,mes,ano);

    printf("%d", i);
    return 0;
}

int dataJuliana(int dia, int mes, int ano){
    int bissexto = 0;
    if(ano%100 != 0 && ano%4 == 0)
        bissexto = 1;
    else if(ano%100 == 0 && ano%400 == 0)
        bissexto = 1;
    else{
            bissexto = 0;
    }

    if(bissexto)
        return 366;
    else{
            return 365;
    }
}





