#include <stdio.h>
#include <stdlib.h>




struct Letra{
    char c;
    int binario[5];
};
int main()
{

    int i, j;
    struct Letra alfabeto[27]; int a = 97;
    for(i=0;i<26;i++){

    for(j=0;j<5;j++) {
      alfabeto[i].binario[j]// = rand() %2;
        alfabeto.c = i+65;
        //aqui verifica se nao repetiu o role

    }

    }

    printf("Hello world!\n");
    return 0;
}


