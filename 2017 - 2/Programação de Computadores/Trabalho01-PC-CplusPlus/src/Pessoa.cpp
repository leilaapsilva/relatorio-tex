#include "Pessoa.h"
#include <string.h>
#include <iostream>

using namespace std;

Pessoa::Pessoa()
{

}
Pessoa::Pessoa(char name[50], double pesin, double height)
{
    strcpy(nome,name); // nome = name;
    pesoKg = pesin;
    altura = height;
}



double Pessoa::getIMC(double pesinho, double alturinha){
        return (pesinho / (alturinha * alturinha));


}


void Pessoa::imprimeCategoria(){

        if(getIMC(pesoKg,altura) < 18.5 ){
            cout << "Abaixo do peso" << endl;
            }

        else if(getIMC(pesoKg, altura) < 25 && getIMC(pesoKg, altura) >= 18.5)
        cout << "Peso normal " << endl;


        else if(getIMC(pesoKg, altura) >= 25 && getIMC(pesoKg, altura) < 30)
            cout << "Sobrepeso" << endl;

        else if(getIMC(pesoKg, altura) >= 30 && getIMC(pesoKg, altura)< 35)
            cout << "Obesidade grau I" << endl;

        else if(getIMC(pesoKg, altura) >=35 && getIMC(pesoKg, altura) < 40)
            cout << "Obesidade grau II "  << endl;

        else if(getIMC(pesoKg, altura) >= 40)
            cout << "Obesidade grau III" << endl;

}

//getters
double Pessoa::getAltura(){
    return altura;

}
double Pessoa::getPeso(){
    return pesoKg;

}
char Pessoa::getNome(){
    return *nome; // não consigo implementar esse, problemas gerenciando "char" .

}

// setters
void Pessoa::setAltura(double value){
    altura = value;

}

void Pessoa::setPeso(double value){
    pesoKg = value;

}

void Pessoa::setNome(char noma[50]){
    strcpy(nome, noma);

}
