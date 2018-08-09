#include "Aluno.h"

#include <iostream>
using namespace std;

int Aluno::qtde = 0;

Aluno::Aluno(int ra, string nome) :
ra(ra), nome(nome) {
    cout << "Criando.... (" << ra << ", " << nome << ")" << endl;
    qtde++;
}

int Aluno::GetQtde() {
    return qtde;
}

Aluno::~Aluno() {
    cout << "Destruindo.... (" << ra << ", " << nome << ")" << endl;
    qtde--;
}

