#ifndef TIME_H
#define TIME_H

#include "Jogador.h"

class Time {
public:
    Time(string nome);
    virtual ~Time();
    void adicionaJogador(Jogador* jogador);
    void imprimeElenco();
private:
    string nome;
    Jogador **elenco;
    int qtde;
};

#endif /* TIME_H */

