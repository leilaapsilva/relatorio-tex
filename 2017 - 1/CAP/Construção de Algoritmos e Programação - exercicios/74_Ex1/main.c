#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void upperTom(char *pChar);
void contVogais(char *pchar);
void exerc8();
void allBlocks();
void merc();
void exerc13();
void cesarCoiso();
int main()
{



   // allBlocks();
   // contVogais(stringa);
    //exerc8();
    //upperTom(stringa);
    //merc();


  //  exerc13();

 cesarCoiso();

    return 0;
}
void contVogais( char *pChar){
    int i = 0, contvog = 0; char carac;
    for(i=0; i<strlen(pChar); i++){
        if(pChar[i] == 'a' ||  pChar[i] == 'e' ||  pChar[i] == 'i' ||  pChar[i] == 'o' ||  pChar[i] == 'u' ||
           pChar[i] == 'A' ||  pChar[i] == 'E' ||  pChar[i] == 'I' ||  pChar[i] == 'O' ||  pChar[i] == 'U') {
            contvog++;
           }


    }
    printf("Quantidade de vogais: %d\n", contvog);
    printf("entre com um caractere: ");
           scanf("%c", &carac);
            contvog = 0;
           for(i=0; i<strlen(pChar); i++){
        if(pChar[i] == 'a' ||  pChar[i] == 'e' ||  pChar[i] == 'i' ||  pChar[i] == 'o' ||  pChar[i] == 'u' ||
           pChar[i] == 'A' ||  pChar[i] == 'E' ||  pChar[i] == 'I' ||  pChar[i] == 'O' ||  pChar[i] == 'U') {
            pChar[i] = carac;
           }


           if(pChar[i] == 'a' ||  pChar[i] == 'e' ||  pChar[i] == 'i' ||  pChar[i] == 'o' ||  pChar[i] == 'u' ||
           pChar[i] == 'A' ||  pChar[i] == 'E' ||  pChar[i] == 'I' ||  pChar[i] == 'O' ||  pChar[i] == 'U') {
            contvog++;
           }


    }
            printf("A string ficou \n%s\n", pChar);
           printf("Quantidade de vogais agora: %d\n", contvog);



}

void exerc8(){
    char str1[50];
    char str2[50];
    char lixo[2];
    printf("String 1: \n");
    gets(lixo);
    gets(str1);
    printf("String 2: \n");
    gets(str2);
    int i = 0, j = 0, w = 0, vr2=0, x;
    int vr = 0;
    if(strlen(str1)<strlen(str2)) {
// sair
}


else {




            for(i=0;i<strlen(str1);i++){
            if(str1[i] == str2[w]) {
                    w++; vr++;
            }
            else {
                    vr = 0; w = 0;
            }
            if(vr == strlen(str2)) {
                    vr++;
                    vr2 = (i-(strlen(str2)-1));
                    x = 1;
                    break;

            }
            }
            if (x != 0) { printf("String2 estah contida em String1, comecando na posicao: %d de string1 e terminando na posicao %d .\n",
                                    vr2, vr2+strlen(str2)-1);

             }
            else {
                    printf("String2 nao estah contida em String1\n");
            }


    for(i = 0; i<strlen(str1); i++)
    for(j = 0; j<strlen(str2); j++){
        if(str1[i] = str2[j]){


        }
        else{


        }


    }






}
}


void upperTom(char *pChar){
    int i;
    for(i=0;i<strlen(pChar);i++){

        if(pChar[i] >= 65 && pChar[i] <= 90){
            pChar[i] += 32;
        }

    }

printf(" upperTom : %s", pChar);
}


void allBlocks(){




printf("Insira sua string: \n");
    char stringa[50];
    int i, j, contLetras = 0;
    gets(stringa);
    printf("%s\n", stringa);
    for(i=0;i<4;i++){
        printf("%c", stringa[i]);

    }
    for(i=0;stringa[i] != '\0'; i++)
        contLetras++;
    printf("\nCont Letras: %d\n", contLetras);

   // for(i=strlen(stringa); i>=0; i--)
     //   printf("%c", stringa[i]);

        for(i=0, j = strlen(stringa) -1; i<j; i++,j--){
            char aux;
            aux = stringa[i];
            stringa[i] = stringa[j];
            stringa[j] = aux;
       // printf("%c", stringa[i]);


        }
            printf("Reeordenada %s\n", stringa);

}


void exerc13(){
        char S[10]; int i,j;
    printf("Informe S: \n");
    gets(S);
    printf("Informe i e j: \n");
    scanf("%d %d",&i, &j);
    for(;i<j;i++){
        printf("%c", S[i]);

    }
    printf("\n\n\nend \n");

}


void cesarCoiso(char *pChar){
    printf("String para criptografar: \n"); char stringzinha[100];
    gets(stringzinha); int n;
    printf("Quantas letras andar pra frente? \n");
    scanf("%d", &n);
    int i;
    for(i=0;i<strlen(stringzinha); i++){
        if(stringzinha[i] >=65 && stringzinha[i] <= 122)
        stringzinha[i] += n;

    }

    printf("%s", stringzinha);

}


void merc(){
 char nome[20]; double valor;
    printf("Informe nome e valor: \n");
    scanf("%s %lf", nome, &valor);
    printf("Mercadoria: %s\nValor total: %lf\nValor do desconto: %lf\nValor com desconto: %lf\n\n",nome, valor, valor/10, (valor * 0.9));


}

