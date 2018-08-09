#include <iostream>
#include "Ponto2D.h"

using namespace std;

int main(int argc, char** argv) {
    
    Ponto2D p(10,20);
    
    cout << p << endl;
    
    p += 10;
    
    cout << p << endl;
    
    return 0;
}

