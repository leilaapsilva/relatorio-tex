#ifndef OBRADEARTE_H
#define OBRADEARTE_H

#include <string>
using namespace std;

namespace pc {

    class ObraDeArte {
    public:
        ObraDeArte(string titulo, string artista, string material, int ano);
        virtual ~ObraDeArte();
        virtual void imprime() = 0;
        string getTitulo() const;
        string getArtista() const;
        string getMaterial() const;
        int getAno() const;
    private:
        string titulo;
        string artista;
        string material;
        int ano;
    };

}

#endif /* OBRADEARTE_H */

