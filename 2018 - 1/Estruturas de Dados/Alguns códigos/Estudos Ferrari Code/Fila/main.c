#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[])
{



    struct Fila f;
  //  int elemento;
    create(&f); // criei a fila vazia


    // algumas inserções
        inserir(&f,345);
        inserir(&f,917);
        inserir(&f,14);
        inserir(&f,872);
        inserir(&f,5763);
        inserir(&f,2);

        printf("Bem vindos!!");
        printf("\n------ atendimento -----\n");
        while(!isEmpty(f)){
              int  elemento = retirar(&f);
            printf("Senha a ser atendida: %d", elemento);


        }




    return 0;
}
