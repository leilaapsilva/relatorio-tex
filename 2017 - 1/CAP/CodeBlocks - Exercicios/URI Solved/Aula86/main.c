#include <stdio.h>
#include <stdlib.h>

int main()
{
     char x[100];
     FILE *pFile  =  fopen("arquivo87.txt",  "r");
     fgets(x,100,pFile);
     printf("%s\n", x);
     freopen("arquivo88.txt", "r", pFile);
     fgets(x,100,pFile);
     printf("%s", x);
     //sprintf(stdout,x);



    return 0;
}
