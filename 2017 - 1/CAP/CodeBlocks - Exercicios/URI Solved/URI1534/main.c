#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j, k;
     while(scanf("%d",  &n)!=EOF)
    { //scanf("%d", &n);
        if(n != (-1) ){
    int  m[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            m[i][j] = 3;

        for(i=0; i<n; i++)
            m[i][i]=1;
        k =n-1;
        for(i=0,j=k; i<n;i++,j--)
            m[i][j]=2;

             for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                printf("%d",m[i][j]);
            printf("\n");
        }
    }
    }
    return 0;
}


