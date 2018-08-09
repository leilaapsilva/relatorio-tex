
#include <iostream>
#include "ObraDeArte.h"
#include "Pintura.h"
#include "Escultura.h"

using namespace std;
using namespace pc;

int main(int argc, char** argv) {

    ObraDeArte* o1 = new Pintura("Mona Lisa", "Leonardo da Vinci", "Madeira", 1503, "Óleo");
    
    o1->imprime();
    
    ObraDeArte* o2 = new Escultura("David", "Michelangelo", "Mármore", 1501,  1.99);
                    
    cout << endl;
    
    o2->imprime();
    
    return 0;
}

