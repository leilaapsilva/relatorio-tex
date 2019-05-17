
#include "Ponto2D.h"

Ponto2D::Ponto2D(double x, double y) :
x(x), y(y) {
}

Ponto2D::~Ponto2D() {
}

Ponto2D& Ponto2D::operator+=(const int& valor) {
    this->x += valor;
    this->y += valor;
    return *this;
}

ostream& operator<<(ostream& os, const Ponto2D& ponto) {
    os << '(' << ponto.x << ',' << ponto.y << ')';
    return os;
}


