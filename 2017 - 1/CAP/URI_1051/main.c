#include <stdio.h>
#include <stdlib.h>

int main()
{
    float value = 0, total = 0, aux = 0;
    scanf("%f", value);
    if(value > 4500.00){
        aux = value - 4500.00;
        total+= aux * 0.28;
        value -= 4500.00;
    }
    if(value <= 4 500.00 && value > 3000.01){
        aux = value - 3000.01;
        total += aux * 0.18;
        value -=
    }

   return 0;
}
