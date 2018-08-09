#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char s[100];  int i;
    int contSimb = 0;
    int contMaiusc = 0;
    int  contnum = 0;
    int contMinusc =  0;
    int  tam =  1;


    while(gets(s) != NULL){
            fflush(stdin);
            //fflush(stdin);
    //scanf("%s", s);
    if(strlen(s) <  6 || strlen (s)>32){

        tam = 0;

    }
    else{tam = 1; }

        for(i=0;i<strlen(s);i++){

            if(s[i] >= '0' && s[i] <= '9')
                contnum++;
            else if(s[i] >= 'A' && s[i] <='Z')
                contMaiusc++;
            else if(s[i] >='a' && s[i] <='z')
                contMinusc++;
            else
                contSimb++;

        }

       if(contnum > 0 && contMaiusc > 0  && contMinusc > 0 && contSimb == 0 && tam != 0){
        printf("Senha valida.\n");
        contMaiusc = 0;  contMinusc = 0; contSimb = 0; contnum = 0;
       }
      else{
        printf("Senha invalida.\n");
        contMaiusc = 0;  contMinusc = 0; contSimb = 0; contnum = 0;
      }

    }


return 0;
    }


