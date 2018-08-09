#include "Departamento.h"

#include <iostream>

using namespace std;

Departamento::Departamento(string nome, string sigla) :
nome(nome), sigla(sigla) {
    cout << "Construindo departamento " << nome << " de sigla " << sigla << endl;
}

void Departamento::imprime() {
cout << "Departamento " << nome << " de sigla " << sigla << endl;
}

Departamento::~Departamento() {
cout << "Destruindo departamento " << nome << " de sigla " << sigla << endl;
}


