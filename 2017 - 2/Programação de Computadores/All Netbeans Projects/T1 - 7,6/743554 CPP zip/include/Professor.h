#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Data.h"


class Professor
{
    int nroMatricula;
    char nomeProfessor[50];
    char nomeDept[35];
    Data *dataAdmiss;
    public:
        Professor();
    Professor(int nroMatr, char *nomeProf, char *nomeDepart, int dia2, char *mes2, int ano2);
        imprime();

    protected:

    private:
};

#endif // PROFESSOR_H
