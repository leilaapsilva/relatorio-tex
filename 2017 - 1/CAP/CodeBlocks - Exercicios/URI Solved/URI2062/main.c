#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char  string[50];
    int n,i,j;
    scanf("%d",  &n);
    for(i=0;i<n;i++){
        scanf("%s", string);
        if(i !=  0)
            printf(" ");
        if(strlen(string) == 3 && string[0] == 'O' && string[1] == 'B'){
            printf("OBI");
        }
        else  if(strlen(string)== 3 &&  string[0] == 'U' && string[1] == 'R')
            printf("URI");

        else{ printf("%s",  string);
    }


    }
    printf("\n");







    return 0;
}
