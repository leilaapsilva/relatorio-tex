#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_BLOCO 512
#define BYTES_USAVEIS ( 510 )  // TAM_BLOCO - 2 bytes formato  little endian que identificam o espaco utilizado com caracteres validos
#define FIM_CAMPO 0x0D
#define FIM_BLOCO 0x0A

#define AUX_BYTES 5

/* grupo
    João Vitor Azevedo          743554
    Amanda Ribeiro              743504
    Augusto Mendes              743509

typedef struct{
    char ra[7];
    char nome[201], curso[201],ano[5];          // 1  a mais pois haverão concatenações à frente


} Registro;

typedef struct {
    char num[2];

} LittleEnd; // struct especial para lidar com o Lend


// tipo um .h mas sem ser

void cria_populaArq( const char *name_arq, const unsigned int qtdReg );
void searchBy_RA( const char *name_arq, const char *ra );
void criaLista( const char *name_arq );
unsigned int getTamReg( const Registro registro );
void escreverBloco( FILE *arq, char *bloco, const unsigned short int qtdBytes);
LittleEnd convParaLittleEnd( const unsigned short int numero );
unsigned short int inverteLittle( const LittleEnd little);



// famoso main


int main( int argc, char const *argv[] ) {

    char name_arq[21];
    unsigned int qtdReg;

    scanf( "%s%d",name_arq,&qtdReg);
    cria_populaArq(name_arq,qtdReg );
    char ra[7];

    while(scanf(" %s",ra)){
        if( strcmp(ra,"0") == 0){ break; }

        searchBy_RA( name_arq,ra);
    }
    criaLista( name_arq );

    return 0;
}

void cria_populaArq( const char *name_arq, const unsigned int qtdReg){
    char nome_arq_c_ext[ 25 ];

    strcpy( nome_arq_c_ext,name_arq);  // uma na outra
    strcat( nome_arq_c_ext, ".dat" );  // concatena com a extensao .dat

    FILE *arquivo = fopen( nome_arq_c_ext,"wb");

    if(!arquivo){
        fprintf( stderr, "Erro ao criar o arquivo %s!\n", nome_arq_c_ext);
        exit(EXIT_FAILURE);
    }

    char bloco[TAM_BLOCO];
    Registro registro;
    unsigned int qtdBytes = 0;

    for(int i=0;i<qtdReg;i++) {
        scanf("%s ",           registro.ra);
        scanf("%[^\n] ",       registro.nome);
        scanf("%s ",           registro.curso);
        scanf("%s ",           registro.ano);

        unsigned int tamanhoRegistro = getTamReg(registro);

        if(qtdBytes + tamanhoRegistro > BYTES_USAVEIS) {
            escreverBloco(arquivo, bloco, qtdBytes);
            qtdBytes = 0;
        }

        sprintf(&bloco[qtdBytes],"%s%c%s%c%s%c%s%c%c",registro.ra,FIM_CAMPO,registro.nome,FIM_CAMPO,
                registro.curso,FIM_CAMPO,registro.ano,FIM_CAMPO,FIM_BLOCO);

            qtdBytes += tamanhoRegistro;
    }

    escreverBloco(arquivo,bloco,qtdBytes);

    fclose(arquivo); // fclose "gerencia" a gravação real no arquivo
}

void searchBy_RA( const char *name_arq, const char *ra ) {
    char name_arqIn_c_Ext[20];
    char name_arqOut_c_Ext[20];  // tamanho maximo de nameFile arbritrário

    strcpy( name_arqIn_c_Ext, name_arq );
    strcpy( name_arqOut_c_Ext, name_arq );
    strcat( name_arqIn_c_Ext, ".dat" );
    strcat( name_arqOut_c_Ext, ".out" );

    FILE *arquivoIn = fopen( name_arqIn_c_Ext,"rb");
    FILE *arquivoOut   = fopen( name_arqOut_c_Ext,"a");

    if( !arquivoIn ) {
        fprintf( stderr, "Erro ao abrir o arquivo %s!\n", name_arqIn_c_Ext );
        exit( EXIT_FAILURE );
    }

    if( !arquivoOut ) {
        fprintf( stderr, "Erro ao criar o arquivo %s!\n", name_arqOut_c_Ext );
        exit( EXIT_FAILURE );
    }

    char bloco[ TAM_BLOCO ];
    char *inicioRegistro = NULL;
    do {
        fread( bloco, sizeof( bloco ), 1, arquivoIn );
        inicioRegistro = strstr( bloco, ra );
    } while( !inicioRegistro && !feof( arquivoIn ) );

    if( inicioRegistro ) {
        char *finalRegistro = strchr( inicioRegistro, FIM_BLOCO );
        *finalRegistro      = '\0';

        char *finalCampo = strchr( inicioRegistro, FIM_CAMPO );
        while( finalCampo && finalCampo < finalRegistro - 1 ) {
            *finalCampo = ':';
            finalCampo = strchr( inicioRegistro, FIM_CAMPO );
        }
        *finalCampo    = '\n';
        *finalRegistro = '\0';
        fprintf( arquivoOut,"%s",inicioRegistro );
    } else {
        fprintf( arquivoOut,"*\n");
    }

    fclose(arquivoIn); // grava
    fclose(arquivoOut);   // grava
}

void criaLista( const char *name_arq ) {
    char name_arqIn_c_Ext[ 25 ];
    char name_arqOut_c_Ext[ 25 ];

    strcpy( name_arqIn_c_Ext, name_arq );
    strcpy( name_arqOut_c_Ext, name_arq );
    strcat( name_arqIn_c_Ext, ".dat" );
    strcat( name_arqOut_c_Ext, ".lst" );

    FILE *arquivoIn = fopen( name_arqIn_c_Ext, "rb");
    FILE *arquivoOut   = fopen( name_arqOut_c_Ext, "w");

    if( !arquivoIn ) {
        fprintf( stderr, "Erro ao abrir o arquivo %s!\n", name_arqIn_c_Ext );
        exit( EXIT_FAILURE );
    }

    if( !arquivoOut ) {
        fprintf(stderr, "Erro ao criar o arquivo %s!\n",name_arqOut_c_Ext);
        exit(EXIT_FAILURE);
    }

    char bloco[TAM_BLOCO];
    unsigned int quantidadeBlocos = 0;
    while( fread( bloco, sizeof( bloco ), 1, arquivoIn ) ) {
        unsigned int qtdReg = 0;

        LittleEnd little;
        little.num[ 0 ] = bloco[ BYTES_USAVEIS ];
        little.num[ 1 ] = bloco[ BYTES_USAVEIS + 1 ];

        unsigned short int tamanhoBloco = inverteLittle(little);
        fprintf( arquivoOut, "Bloco %d (%d bytes)\n", quantidadeBlocos, tamanhoBloco );

        char *posicao = NULL;
        while( ( posicao = strchr( bloco, FIM_CAMPO ) ) ) {
            *posicao = ':';
        }

        posicao = bloco;
        while( posicao = strchr( posicao, FIM_BLOCO ) ) {
            posicao += 1;
            qtdReg++;
        }

        bloco[ BYTES_USAVEIS ] = '\0';

        fprintf( arquivoOut, "%s%d registros", bloco, qtdReg );

        if( !feof( arquivoIn ) ) {
            fprintf( arquivoOut, "\n" );
        }

        quantidadeBlocos++;
    }

    fclose( arquivoIn );
    fclose( arquivoOut );
}

unsigned int getTamReg( const Registro registro ) {
    unsigned int tamanhoRegistro = strlen( registro.ra ) + strlen( registro.nome ) +
                                   strlen( registro.curso ) + strlen( registro.ano );
    tamanhoRegistro *= sizeof( char );
    tamanhoRegistro += AUX_BYTES;
    return tamanhoRegistro;
}
void escreverBloco( FILE *arq, char *bloco, const unsigned short int qtdBytes ) {
    LittleEnd little = convParaLittleEnd( qtdBytes );
    sprintf( &bloco[ BYTES_USAVEIS ], "%c%c", little.num[ 0 ], little.num[ 1 ] );
    fwrite( bloco, sizeof( char ) * TAM_BLOCO, 1, arq );
}
LittleEnd convParaLittleEnd( const unsigned short int nume ) {
    unsigned short int first_BYTE = ( nume &0xFF00) >> 8;       // 0xFF00 -> 11111111 . 00000000
    unsigned short int second_BYTE  = ( nume & 0xFF );         // 0xFF    -> 00000000 . 11111111

    LittleEnd little;
    little.num[ 0 ] = second_BYTE;
    little.num[ 1 ] = first_BYTE;

    return little;
}

unsigned short int inverteLittle(const LittleEnd little) {
    unsigned short int first_BYTE = (little.num[ 1 ] & 0xFF) << 8;
    unsigned short int second_BYTE  = little.num[ 0 ] & 0xFF;


    return first_BYTE | second_BYTE;
}
