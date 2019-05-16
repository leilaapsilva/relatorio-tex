#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


bool comparaStrings(char a[], char b[],int n);


int main()
{    int n = 1;
    while(n!=0) {
            //if(n==0){ return 0;}//printf("Hello world!\n");
    char st1[33]; char st2[33];
    scanf("%d", &n);
    if(n==0) break;
   // printf("Insira os valoe\n");
    scanf("%s %s",st1, st2);


   if(n==0){ return 0;}
//    iguais = comparaStrings(st1,st2);
bool iguais = true;
        //printf("iguais recebeu comparasttringggg antes\n");

        iguais = comparaStrings(st1, st2,n);
       // printf("iguais recebeu comparast depois\n");

        if (iguais)
            printf("SIM\n");
        else
            printf("NAO\n");
}
    return 0;
}


bool comparaStrings(char a[], char b[],int n){
    int i;
    if (strcmp(a,b) == 0) return true;

    else{}

//    char a1[strlen(a)/2] = a;
    char a1[16], a2[16], b1[16],b2[16];
    //strcpy(a1,a);

    for(i=0;i<n/2; i++){
        a1[i] = a[i];
    }
     for(i=n;i>=n/2; i--){
        a2[i] = a[i];
    }

    for(i=0;i<n/2; i++){
        b1[i] = b[i];
    }

    for(i=n;i>=n/2; i--){
        b2[i] = b[i];
    }



    bool r11 = a1 == b1; //printf("r11: %d\n", r11);
    bool r12 = a1 == b2; //printf("r12: %d\n", r12);
    bool r21 = a2 == b1; //printf("r21: %d\n", r21);
    bool r22 = a2 == b2; //printf("r22: %d\n", r22);

    return  (r11 && r22) || (r12 && r21);

}
