#include <stdio.h>
#include <stdlib.h>

struct Data{
     int dia,  ano;
     char mes[15];

};

struct Ponto{
    int x,y;
};

void imprimeData(struct Data data);
void exerc2();


int main()
{

    //imprimeData(data);
    //exerc2();


    printf("Hello world!\n");
    return 0;
}

void exerc2(){
    struct Ponto point; double distancia;
    printf("Insira x;\n");
    scanf("%d", point.x);

    printf("Insira y;\n");
    scanf("%d", point.y);

    printf("A distancia entre o ponto informado e (0,0) eh %lf", distancia);




}
void imprimeData(struct Data data){

    char lixo[2];
    struct Data data;

    printf("Informe o dia: \n");
    scanf("%d", &data.dia);
    gets(lixo);
    printf("Informe o mes: \n");
    gets(data.mes);
    printf("Informe o ano: \n");
    scanf("%d", &data.ano);

    printf("Dia %d de %s de %d", data.dia, data.mes, data.ano);

}
