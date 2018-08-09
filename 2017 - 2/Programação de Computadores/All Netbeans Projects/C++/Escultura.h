#ifndef ESCULTURA_H
#define ESCULTURA_H

#include "ObraDeArte.h"

namespace pc {

    class Escultura : public ObraDeArte {
    public:
        Escultura(string titulo, string artista, string material, int ano, double altura);
        virtual ~Escultura();
        virtual void imprime();
        double getAltura() const;
    private:
        double altura;
    };

}

#endif /* ESCULTURA_H */

