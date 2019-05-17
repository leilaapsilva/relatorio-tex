#include <iostream>
#include "Time.h"
#include "Jogador.h"

using namespace std;

Time::Time(string nome) :
nome(nome) {
    cout << "Criando time " << nome << endl;
    qtde = 0;
    elenco = new Jogador*[22];
}

void Time::adicionaJogador(Jogador* jogador) {
    elenco[qtde++] = jogador;
}

void Time::imprimeElenco() {
    cout << "Elenco do " << nome << endl;
    for (int i = 0; i < qtde; i++) {
        elenco[i]->imprime();
    }
}

Time::~Time() {
    cout << "Destruindo time " << nome << endl;
}

