#include <stdio.h>
#include <stdlib.h>



int  ehPrimo(int num);
int main()
{
    int num;
    printf("Hello world!\n");
    scanf("%d", &num);
    printf("%d",  ehPrimo(num));

    return 0;
}

int ehPrimo(int num){
    int ehPrimo = 0;
    if(num  == 1)
        return 0;
    if(num  == 2)
        return 1;
    else{
    int i;
    for(i  = 2; i<num && ehPrimo == 0; i++){
            if(num%i == 0)
            return 0;

    }

    return  1;


    }
}
