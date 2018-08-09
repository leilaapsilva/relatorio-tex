#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,j;

    for(i = 1; i<=10; i++){
        printf("Volta %d", i);
        for(j = 1; j<=10;j++){
            printf("ponto %d\n", j);
        }

    }
    return 0;
}
