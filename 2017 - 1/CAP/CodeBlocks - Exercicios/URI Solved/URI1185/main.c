#include <stdio.h>
#include <stdlib.h>

int main()
{
    double m[12][12];
    int i,j;
    double soma = 0.0;
    char O[1];

    scanf("%s",  &O);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf" ,  &m[i][j]);
        }
        }
        for(i=0;i<=10; i++){
            for(j=0;j<=10-i;j++){
                    soma += m[i][j];
                     }
        }
        if(O[0]== 'M')
            printf("%.1lf\n",soma /  66.0);
            if(O[0] =='S')
            printf("%.1lf\n",soma);

    return 0;
}
