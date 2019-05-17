#include "ObraDeArte.h"

namespace pc {

    ObraDeArte::ObraDeArte(string titulo, string artista, string material, int ano) :
    titulo(titulo), artista(artista), material(material), ano(ano) {
    }

    ObraDeArte::~ObraDeArte() {
    }

    int ObraDeArte::getAno() const {
        return ano;
    }

    string ObraDeArte::getArtista() const {
        return artista;
    }

    string ObraDeArte::getMaterial() const {
        return material;
    }

    string ObraDeArte::getTitulo() const {
        return titulo;
    }

}
