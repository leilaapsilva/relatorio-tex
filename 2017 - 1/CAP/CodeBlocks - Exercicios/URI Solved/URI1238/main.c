#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n,i;  int j ,k;
    int maior;
    scanf("%d", &n);
    fflush(stdin);
    char string1[51]; char string2[51];
     char stringResult[100];


for(i = 0;  i<n; i++){

        scanf("%s %s", string1,string2);
  if(strlen(string1) >= strlen(string2)){
        maior = strlen(string1);
      }
      else {
          maior =  strlen((string2));

      }

      for(j=0;j<maior;j++){
if(j<strlen(string1)) printf("%c", string1[j]);
if(j<strlen(string2)) printf("%c",  string2[j]);

      }
    /* aa bb
        abab */

    //for(j=0,k=j+1;j<100 && string1[j] !=  '\0' && string2[j] !=  '\0';j++,k++){
        //stringResult[j] = string1[j];
      //  stringResult[k] = string2[j];

   // }
    printf("\n");



}


return 0;
}
