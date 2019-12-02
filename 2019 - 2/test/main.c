#include <stdio.h>
#include <stdlib.h>

int main() {

    FILE* arquivo = fopen("arquivo.txt", "r");
    if(arquivo == NULL) {
        fprintf(stderr, "Erro ao abrir o arquivo.txt.");
        return 1;
    }

    char linha[1024];
    while(fgets(linha, sizeof(linha), arquivo) != NULL) {
    	/* note como não precisamos especificar uma nova linha, o fgets já a inclui na string linha quando a encontra */
        printf("%s", linha);
    }

    fclose(arquivo);

    return 0;

}


