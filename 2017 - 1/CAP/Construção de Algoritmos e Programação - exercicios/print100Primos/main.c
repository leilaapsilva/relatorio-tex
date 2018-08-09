#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contprints = 1;
    int n = 3;
    int i;
    int primo; int resto;

    while(contprints != 1000){
            primo = 1;
        for(i=2;i<n || primo==1; i++){
             resto = n%i;
            if(resto == 0){
                primo = 0;
            }


        }
        if(primo == 1){
            contprints++;
            printf("%d\n", n);
        }

        n++;
        primo = 1;
    }
    printf("Hello world!\n");
    return 0;
}

