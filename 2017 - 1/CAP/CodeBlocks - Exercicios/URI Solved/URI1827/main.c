#include <stdio.h>
int main()
{
    /*proopon("input.trt","r",stlin);
    proopon("output.trt","w",stlout);*/
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int m[n][n];
        int i,j,k,l,o,p,q,r,s,x;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                m[i][j]=0;
        }
        for(i=0; i<n; i++)
            m[i][i]=2;
        l=n-1;
        for(i=0,j=l; i<n;i++,j--)
            m[i][j]=3;
        k=n/3;
        o=n-k-k;
        for(p=k,r=1; r<=o; p++,r++)
        {
            for(q=k,s=1; s<=o; q++,s++)
                m[p][q]=1;
        }
        if(n%2==1)
            x=n/2;
        else
            x=(n/2)-1;
        m[x][x]=4;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
                printf("%d",m[i][j]);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
