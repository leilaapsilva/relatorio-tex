#include <stdio.h>
#include <stdlib.h>
#include <math.h>





struct DoisValores{
    int l;
     int r;
};


int main()
{


    int n1, n2;
    printf("da o nr 1 e o nr 2 separados por espaco ai mano!\n");
    scanf("%d %d", &n1, &n2);
    printf("size n1 %d\n", sizeof(n1));
    printf("size n2 %d\n", sizeof(n2));

    contadigitos(n1);
    contadigitos(n2);

    printf("%d x %d = %d\n", n1, n2, multiply(n1,n2));


    return 0;
}

int multiply(int n1, int n2){
    struct DoisValores x;
    quebra(n1, x);
    struct DoisValores y;
    quebra(n2,y);
    int a1 = multiply   (x.l, y.l);
    int a2 = multiply   (x.r, y.r);
    int a3 = multiply   ((x.l + x.r),(y.l + y.r));
    int a4 = a3 - a2 - a1;

    return ((a1 * 10000) + (a2) + (a4 * 100));

}



void quebra(int nrotoBreak, struct DoisValores retor){
    int l, r;


    int totaldig  = contadigitos(nrotoBreak);
    l = nrotoBreak % ( (int)pow(10, (totaldig / 2)));
    r = nrotoBreak



}

void contadigitos(int nrotoCont){
    int retorno = 0;
    if(nrotoCont == 0) retorno = 1;

    while(nrotoCont != 0) {
        retorno++; nrotoCont = nrotoCont / 10;
    }


    printf("Digitos no nro passado : %d\n", retorno);


}
