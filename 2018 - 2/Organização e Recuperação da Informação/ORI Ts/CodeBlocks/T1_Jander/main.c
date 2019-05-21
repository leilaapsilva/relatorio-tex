#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>


int main()
{
    FILE *pFile;

    pFile = fopen("arquivo.dat", "wb");


    printf("Hello world!\n");

    printf("%d", sizeof(char));

char nome[50];

    scanf("%s", nome );
    printf("%s",nome);

    std::string str ("Test string");
  std::cout << "The size of str is " << str.length() << " bytes.\n";
  return 0;



   typedef struct {
       char RA[7];
       char nomeCompleto[7];
       char curso[7];
       char ano_ingresso[4];


    }Registro;
    return 0;
}




