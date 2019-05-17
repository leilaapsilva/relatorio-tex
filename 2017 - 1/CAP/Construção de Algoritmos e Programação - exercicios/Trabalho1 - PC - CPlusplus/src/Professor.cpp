#include "Professor.h"
#include "Data.h"
#include <string.h>
#include <iostream>

using namespace std;


getnumMatricula(){
//return numMatricula;

}
    getnomeProf(){
//    return nomeProf;

    }
    getnomeDept(){


    }



Professor::Professor( int numMatricula1, char nomeProf1[50], char nomeDept1[25], int dia1, char mes1[15], int ano1)
{
    numMatricula = numMatricula1;
    strcpy(nomeProf, nomeProf1);
    strcpy(nomeDept, nomeDept1);
    dataAdmissao->setDia(dia1);
    //strcpy(dataAdmissao->mes, mes1);
    dataAdmissao->setMes(mes1);
    dataAdmissao->setAno(ano1);
}

Professor::imprime(){

    cout << "Matricula " << numMatricula << endl;
    cout << "Nome: " << nomeProf << endl;
    cout << "Nome do Departamento: " << nomeDept << endl;
    cout << dataAdmissao->getDia() << " de " << dataAdmissao->getMes() << " de " << dataAdmissao->getAno() << endl;


}
