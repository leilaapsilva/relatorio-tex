#ifndef PONTO2D_H
#define PONTO2D_H

#include <iostream>
using namespace std;

class Ponto2D {
public:
    virtual ~Ponto2D();
    Ponto2D(double x, double y);
    Ponto2D& operator+=(const int& valor);
    friend ostream& operator<<(ostream& os, const Ponto2D& ponto);
private:
    double x,y;
};

#endif /* PONTO2D_H */

