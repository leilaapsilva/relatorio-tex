#include "Pintura.h"

#include <iostream>

using namespace std;

namespace pc {

    Pintura::Pintura(string titulo, string artista, string material, int ano, string tipo) :
    ObraDeArte(titulo, artista, material, ano), tipo(tipo) {
    }

    Pintura::~Pintura() {
    }

    string Pintura::getTipo() const {
        return tipo;
    }

    void Pintura::imprime() {
        cout << "=======================================" << endl;
        cout << "=             PINTURA                 =" << endl;
        cout << "=======================================" << endl;
        cout << "Título   : " + this->getTitulo() << endl;
        cout << "Artista  : " + this->getArtista() << endl;
        cout << "Material : " + this->getMaterial() << endl;
        cout << "Ano      : ";
        cout << this->getAno() << endl;
        cout << "Tipo     : " + this->getTipo() << endl;
    }

}