#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,j, tams1;
    char string[1000];
    while(gets(string)  != EOF){

        tams1 = strlen(string);
        j = 0;
        for(i=0;i< tams1;i++){

            if(string[i] != ' '){
                    j++;
            if(j%2 !=0){

                   if(string[i]>='a' && string[i]<= 'z')

                    string[i] = string[i] - 32;

                   else
                    string[i] = string[i];

            }
               else

               {

                    if(string[i]>='A' && string[i]<= 'Z')

                    string[i] = string[i] + 32;

                   else
                    string[i] = string[i];

               }

           }


        }

        printf("%s\n",string);

    }


}
