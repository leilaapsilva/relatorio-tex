#include <stdio.h>
#include <stdlib.h>

int main()
{
     //tipo de dado *nome_do_ponteiro;
    // int *pi=NULL;
   // float *pf=NULL;


   int i = 10;
   int *p;
   p = &i;
   //*p = 5;
   long long int a;
   int b;
   int *pa;
   int *pb;


   printf("Informe o valor de a e b separados por espaco: ");
   scanf("%d %d", &a , &b);



   printf("O conteúdo de i is: %d \n" , i );
   printf("Valor de a  is: %d \n" , a );
   printf("Valor de b  is: %d \n" , b );

   pa = &a;
   pb = &b;

   printf("Endereco de b  is: %p \n" , pb );
   printf("Endereco de a  is: %p \n" , pa );


   *p = 5;
   printf("aqui nota-se que, quando *ponteiro recebe algo, na verdade e a variavel que ele aponta que recebe algo, o \nendereco permanece igual. Veja que agora i = %d \n" , i );






    return 0;
}
