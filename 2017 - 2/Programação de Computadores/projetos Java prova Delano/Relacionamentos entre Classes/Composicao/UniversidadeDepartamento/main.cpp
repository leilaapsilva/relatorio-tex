
#include <cstdlib>

#include "Universidade.h"

using namespace std;

int main(int argc, char** argv) {
    
    Universidade *ufscar = new Universidade("UFSCar");
    
    ufscar->adicionaDepartamento("Computação", "DC");
    ufscar->adicionaDepartamento("Matemática", "DM");
    
    delete ufscar;
    
    return 0;
}

