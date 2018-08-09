#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno{
    int RA;
    int IRA;
    int idade;
    char sexo;


};

int main()
{
    char lixo[2];
    int i;
    int n;
    scanf("%d", &n);
    if(n>100)
        n = 100;
   struct Aluno alun[n];

   for(i=0;i<n;i++){
    printf("Informe o RA do aluno %d: \n", i+1);
    scanf("%d", &alun[i].RA);
    printf("Informe o IRA do aluno %d: \n", i+1);
    scanf("%d", &alun[i].IRA);
    printf("Informe a idade do aluno %d: \n", i+1);
    scanf("%d", &alun[i].idade);
    printf("Informe o sexo do aluno %d: \n", i+1);
    gets(lixo);
    scanf("%c", &alun[i].sexo);
   }
   int cont1822 = 0;
   for(i=0;i<n;i++)
    if(alun[i].idade >=18 && alun[i].idade <=22)
        cont1822++;

        printf("Alunos com idade entre 18 e 22: %d\n", cont1822);
   for(i=0;i<n;i++){

    printf("\nAluno %d\nRA: %d\nIRA: %d\nIdade: %d\nSexo: %c\n",i+1,alun[i].RA,alun[i].IRA,alun[i].idade,alun[i].sexo);

   }

    return 0;
}
