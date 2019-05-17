#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");



    int a;
    int *b;
    int **c;
    printf("Informe a:");
    scanf("%d", &a);
    b = &a;
    c = &b;

    printf("Dobro de a: %d\nTriplo de a: %d\n", 2**b, 3***c);



        //15. Considere a seguinte declaração int a, *b, **c. Leia um valor para a e imprima o dobro e o triplo de a, usando b e c.

 return 0;
}
