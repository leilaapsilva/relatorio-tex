#include "Professor.h"
#include <string.h>
#include "Data.h"
#include <iostream>


using namespace std;

Professor::Professor(int nroMatr, char *nomeProf, char *nomeDepart, int dia2, char *mes2, int ano2){
    nroMatricula = nroMatr;
    strcpy(nomeProfessor, nomeProf); //    nomeProfessor = nomeProf;
    strcpy(nomeDept, nomeDepart); // nomeDept = nomeDepart;
   /* dataAdmiss.setDia(dia2);
    dataAdmiss.setMes(mes2);
    dataAdmiss.setAno(ano2); */
    dataAdmiss = new Data(dia2,mes2,ano2);



}

Professor::imprime(){
    cout << "Matricula: " << nroMatricula << endl << "Nome: " << nomeProfessor << endl;
    cout << "Departamento: " << nomeDept << endl << "Admissao: " << dataAdmiss->getDia() << " de " << dataAdmiss->mes << " de " << dataAdmiss->getAno() << endl;

}


