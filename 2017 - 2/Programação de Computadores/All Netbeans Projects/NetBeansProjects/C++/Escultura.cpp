#include "Escultura.h"

#include <iostream>
using namespace std;

namespace pc {

    Escultura::Escultura(string titulo, string artista, string material, int ano, double altura) :
    ObraDeArte(titulo, artista, material, ano), altura(altura) {
    }

    Escultura::~Escultura() {
    }

    double Escultura::getAltura() const {
        return altura;
    }

    void Escultura::imprime() {
        cout << "=======================================" << endl;
        cout << "=            ESCULTURA                =" << endl;
        cout << "=======================================" << endl;
        cout << "Título   : " + this->getTitulo() << endl;
        cout << "Artista  : " + this->getArtista() << endl;
        cout << "Material : " + this->getMaterial() << endl;
        cout << "Ano      : ";
        cout << this->getAno() << endl;
        cout << "Altura   : ";
        cout << this->getAltura() << endl;
    }

}
