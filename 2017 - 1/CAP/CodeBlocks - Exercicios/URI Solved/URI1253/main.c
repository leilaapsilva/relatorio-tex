#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i, desl,j,k, aux = 0;
    scanf("%d", &n);
    char string[51];

    for(i=0;i<n;i++){
            scanf("%s", string);
            scanf("%d", &desl);
            for(j=0;j<50;j++){
                    if(string[j] ==  '\0')
                    break;
            if((string[j] - desl)  < 65)
           aux = (string[j] - desl) + 26;
           else  aux = string[j] - desl;
           printf("%c", aux);
        }
        printf("\n");
    }
    return 0;
}
         /*
                if(string[j] != 'Y' && string[j] !=  'Z'){
                    string[j] += desl;

                }


            }
            printf("%s", string);
    }
    return 0;
} */
