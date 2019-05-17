#include <stdio.h>
#include <stdlib.h>

struct pontoFloresta{
    float pressao; // atm
    float temperatura; // celsiuys
    float umidade; // %%




};


struct pontoFloresta FuncaoMedia (struct pontoFloresta *p);

int main()
{
    struct pontoFloresta point[3];
    int i;
    for(i=0;i<3;i++){
        printf("Ponto %d, informe a pressao: \n", i+1);
        scanf("%f", &point[i].pressao);
        fflush(stdin);

        printf("Ponto %d, informe a temperatura, em Celsius: \n", i+1);
        scanf("%f", &point[i].temperatura);
        fflush(stdin);

        printf("Ponto %d, informe a umidade em %%: \n", i+1);
        scanf("%f", &point[i].umidade);
        fflush(stdin);
    }

    for(i=0;i<3;i++){
        printf("\nPonto %d , dados: \n", i+1 );
        printf("Temperatura: %.1f Celsius\n", point[i].temperatura);
        printf("Pressao: %.1f ATM\n", point[i].pressao);
        printf("Umidade: %.1f %%\n", point[i].umidade);

    }

    struct pontoFloresta resp = FuncaoMedia(point);
    printf("\n\n\nMedia Temperatura: %.1f\nMedia Umidade: %.1f\nMedia Pressao: %.1f\n", resp.temperatura,resp.umidade, resp.pressao);
     printf("\n\n\n");
     printf("Opcao 2: \n");
    void selectPrint(struct pontoFloresta *pa);
    selectPrint(point);




    return 0;
}


    void selectPrint(struct pontoFloresta *pa){

    int i;
    for(i=0;i<3;i++){
        if((pa[i].temperatura>= 19 && pa[i].temperatura <= 25) || (pa[i].pressao>=0.9 && pa[i].pressao <= 1.1) || (pa[i].umidade >=10 && pa[i].umidade <=30))
        {
            printf("Temp %.1f\nPressao %.1f\nUmidade %.1f\n", pa[i].temperatura,pa[i].pressao,pa[i].umidade);
        }
    }



    }


struct pontoFloresta FuncaoMedia (struct pontoFloresta *p){
    struct pontoFloresta EstruturaMedias;
    struct pontoFloresta somaCoisas = {0};
    int i;
    for(i=0;i<3;i++){
        somaCoisas.pressao += p[i].pressao;
        somaCoisas.temperatura += p[i].temperatura;
        somaCoisas.umidade += p[i].umidade;
        }
        EstruturaMedias.pressao = somaCoisas.pressao / i;
        EstruturaMedias.temperatura = somaCoisas.temperatura / i;
        EstruturaMedias.umidade = somaCoisas.umidade / i;


        return EstruturaMedias;


}





