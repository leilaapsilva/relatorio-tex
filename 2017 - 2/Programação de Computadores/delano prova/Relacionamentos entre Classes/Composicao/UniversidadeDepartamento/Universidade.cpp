#include "Universidade.h"
#include "Departamento.h"

#include <iostream>

using namespace std;

Universidade::Universidade(string nome) :
nome(nome) {
    cout << "Construindo universidade " << nome << endl;
    qtde = 0;
    departamentos = new Departamento*[15];
}

void Universidade::adicionaDepartamento(string nome, string sigla) {
    departamentos[qtde++] = new Departamento(nome, sigla);
}

void Universidade::imprime() {
    cout << "Departamento da " << nome << endl;
    for (int i = 0; i < qtde; i++) {
        departamentos[i]->imprime();
    }
}

Universidade::~Universidade() {
    for (int i = 0; i < qtde; i++) {
        delete departamentos[i];
    }
    cout << "Destruindo universidade " << nome << endl;
}
