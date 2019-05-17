#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  i,j;
    double  soma  = 0.0;
    char O[1];
    double m[12][12];

    scanf("%s", &O);
    for(i=0; i<12;i++)
        for(j=0;j<12;j++)
            scanf("%lf", &m[i][j]);

    for(i=1; i<=10;  i++){
        if(i<=5)
        for(j=11;j>11 - i;j--){
            soma  += m[i][j];
        }
        else{
            for(j=11;j>i;j--){
            soma  += m[i][j];
        }

        }
    }

    if(O[0]  == 'M')
        printf("%.1lf\n", soma  / ((144  - 12 - 12)/4));
    if(O[0]  == 'S')
        printf("%.1lf\n", soma);

    return 0;
}
