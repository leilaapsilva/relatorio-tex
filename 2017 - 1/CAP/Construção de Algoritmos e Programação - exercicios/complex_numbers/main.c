#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct NumeroComplexo{

    double z,y,x;



};

double QualMaiorCOmp(struct NumeroComplexo *numcomp);
int main()
{
    struct NumeroComplexo comp[3];
    comp[0].x = 4.0;
    comp[0].y = 8.0;
    comp[1].x = 6.0;
    comp[1].y = 13.0;
    comp[2].x = 9.0;
    comp[2].y = 3.0;

    double maior = QualMaiorCOmp(comp);

    printf("O maior modulo eh %lf\n", maior);




    return 0;
}


double QualMaiorCOmp(struct NumeroComplexo *numcomp){
    double resp1;
    double resp2;
    double resp3;
    double maior;
    resp1 = sqrt(pow(numcomp[0].x,2) + pow(numcomp[0].y,2));

    resp2 = sqrt(pow(numcomp[1].x,2) + pow(numcomp[1].y,2));
    resp3 = sqrt(numcomp[2].x + numcomp[2].y);
    if(resp1 > resp2 && resp1 > resp3)
        maior = resp1;
    else if(resp2 > resp1 && resp2 > resp3)
        maior = resp2;
    else if(resp3 > resp1 && resp3 > resp2)
        maior = resp3;


        return maior;

}


