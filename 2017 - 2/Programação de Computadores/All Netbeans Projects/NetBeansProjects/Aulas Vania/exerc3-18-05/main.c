#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");

    char value;
    char *pchar;

    printf("Informe uma letra ou algarismo qualquer, te darei seu endereco em hexadecimal, decimal e o texto de volta: ");
    printf("OBS: SE INFORMAR MAIS DE 1 VOU USAR SO O PRIMEIRO E DESCARTAR O RESTO!!!");
    scanf("%c", &value);

    pchar = &value;
    printf("Endereco hexadecimal %p \n Endereco decimal %d\n Texto digitado e guardado la: %c", pchar, pchar, *pchar);







     return 0;


}
