#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fatorial(int fat){
    if(fat==0)
        return 1;
    else{
        fat *= fatorial(fat - 1);
        return fat;
    }


}
int main()
{


    float actDiv;

    return 0;
}


