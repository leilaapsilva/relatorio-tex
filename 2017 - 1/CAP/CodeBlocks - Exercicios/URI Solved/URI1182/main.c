#include <stdio.h>
#include <stdlib.h>

int main()
{

   double m[12][12];
   int  c,  i,  j;
   double  soma = 0;
   char  t[5];
   scanf("%d", &c);
   scanf("%s", &t[0]);

   for(i = 0;i<12;i++){
    for(j=0;j<12;j++){
        scanf("%lf",  &m[i][j]);
    }
    }
        for(i=0;i<12;i++){
            soma  += m[i][c];

        }
        if(t[0] == 'm' || t[0] == 'M'){
            soma = soma/12;
        }

        printf("%.1lf\n", soma);


    return 0;
}
