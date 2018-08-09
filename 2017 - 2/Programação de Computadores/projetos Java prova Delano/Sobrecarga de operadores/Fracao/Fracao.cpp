#include <iostream>
#include "Fracao.h"

using namespace std;

int Fracao::mdc(int a, int b) {
    return b == 0 ? a : mdc(b, a % b);
}

Fracao& Fracao::operator*=(const Fracao& rhs) {
    this->n = this->n * rhs.n;
    this->d = this->d * rhs.d;
    int mdc = this->mdc(this->n, this->d);
    this->n = this->n / mdc;
    this->d = this->d / mdc;
    return *this;
}

Fracao& Fracao::operator+=(const Fracao& rhs) {    
    int new_n = this->n * rhs.d + rhs.n * this->d;
    int new_d = this->d * rhs.d;
    
    int mdc = this->mdc(new_n, new_d);
    this->n = new_n / mdc;
    this->d = new_d / mdc;
    return *this;
}

ostream& operator<<(std::ostream& out, const Fracao& f) {
    return out << f.num() << '/' << f.den();
}

bool operator==(const Fracao& lhs, const Fracao& rhs) {
    return lhs.num() == rhs.num() && lhs.den() == rhs.den();
}

bool operator!=(const Fracao& lhs, const Fracao& rhs) {
    return !(lhs == rhs);
}

Fracao operator*(Fracao lhs, const Fracao& rhs) {
    return lhs *= rhs;
}

Fracao operator+(Fracao lhs, const Fracao& rhs) {
    return lhs += rhs;
}