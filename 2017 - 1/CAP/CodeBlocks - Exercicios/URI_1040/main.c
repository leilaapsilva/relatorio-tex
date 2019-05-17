#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1,N2,N3,N4; float media = 0; float soma = 0;
    scanf("%f %f %f %f", &N1,&N2, &N3,&N4);
    //printf("%.1f %f %f %f", N1,N2,N3,N4);

     soma = (2*N1) + (3*N2) + (4*N3) + (1*N4);
    media = soma / 10;

    printf("Media: %.1f\n", media);
    if(media < 5)
        printf("Aluno reprovado.\n");
    else if(media > 7)
        printf("Aluno aprovado.\n");

    else{
            float aux;
            printf("Aluno em exame.\n");
    scanf("%f", &aux);
    printf("Nota do exame: %.1f\n" , aux);
    media = (media + aux) / 2;
        if(media >=5)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");
        printf("Media final: %.1f\n", media);

    }


    return 0;
}
