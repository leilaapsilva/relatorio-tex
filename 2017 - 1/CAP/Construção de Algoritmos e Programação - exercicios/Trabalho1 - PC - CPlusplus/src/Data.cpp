#include "Data.h"
#include <string.h>
#include <iostream>

using namespace std;


Data::getDia(){
return dia;

}


char Data::getMes(){
return (char)*mes;

}



Data::getAno(){
return ano;

}



void Data::setDia( int dia2){
dia = dia2;

}



void Data::setMes(char mes1[15]){
 strcpy(mes,mes1);

}


void Data::setAno(int anu){
ano = anu;

}




Data::Data(int dia1, char mes1[15], int ano1)
{
    dia = dia1;
    strcpy(mes, mes1);
    ano = ano1;

}

Data::imprime(){
    cout << "Dia " << dia <<" de " << mes << " de " << ano << endl;
}
