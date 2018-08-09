#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dias = 0;
    int mes = 0; float temp = 0.0;
    float tempmedias[31][12];
    for(mes=0;mes<12;mes++){
    tempmedias[dias][mes] = 1;
        for(dias=0;dias<31;dias++){

            tempmedias[dias][mes] = tempmedias[dias - 3][mes];
            temp++;

        }

    }

    int i,j;
    for(i=0;i<31;i++) {
        for(j=0;j<12;j++)
        printf("%.1f ", tempmedias[i][j]);
           printf("\n");
    }
    printf("Hello world!\n");
    return 0;
}
