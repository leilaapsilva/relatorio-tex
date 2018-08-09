#include "Data.h"
#include <iostream>
#include <string.h>

using namespace std;


    //Imprime todos o  atributos na tela

void Data::imprime()
{
        cout << "Dia " << dia << " de " << mes << " de " << ano << endl;

}


   Data::Data(int dia1, char *mes1, int ano1){
        dia = dia1;
        strcpy(mes, mes1);
        ano = ano1;
    }






    // getters
     int Data::getDia(){
        return dia;

    }

      char Data::getMes(){
        char mesy[15];
        strcpy(mesy,mes);
        //return &mesy;
        return *mes;
    }

       int Data::getAno(){
       return ano;

    }

      // setters
    void  Data::setDia(int diab){
        dia = diab;
    }

        void Data::setMes(char *mesb){
        strcpy(mes, mesb);
    }

        void Data::setAno(int anob){
        ano = anob;
    }

