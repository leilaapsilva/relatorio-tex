
#ifndef PINTURA_H
#define PINTURA_H

#include "ObraDeArte.h"
#include <string>

using namespace std;

namespace pc {

    class Pintura : public ObraDeArte {
    public:
        Pintura(string titulo, string artista, string material, int ano, string tipo);
        virtual ~Pintura();
        virtual void imprime();
        string getTipo() const;
    private:
        string tipo;
    };

}

#endif /* PINTURA_H */

