#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Data.h"


class Professor
{
    public:
    Professor( int numMatricula1, char nomeProf1[50], char nomeDept1[25], int dia, char mes[15], int ano);
    imprime();
    Data *dataAdmissao = new Data(0, "mes", 0);
    getnumMatricula();
    getnomeProf();
    getnomeDept();


    protected:

    private:
        int numMatricula;
        char nomeProf[50];
        char nomeDept[30];

};

#endif // PROFESSOR_H
