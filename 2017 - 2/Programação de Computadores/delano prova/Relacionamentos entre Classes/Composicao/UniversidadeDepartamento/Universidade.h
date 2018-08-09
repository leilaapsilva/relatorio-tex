#ifndef UNIVERSIDADE_H
#define UNIVERSIDADE_H

#include <iostream>
#include "Departamento.h"

using namespace std;

class Universidade {
public:
    Universidade(string nome);
    virtual ~Universidade();
    void adicionaDepartamento(string nome, string sigla);
    void imprime();
private:
    string nome;
    Departamento** departamentos;
    int qtde;
};

#endif /* UNIVERSIDADE_H */