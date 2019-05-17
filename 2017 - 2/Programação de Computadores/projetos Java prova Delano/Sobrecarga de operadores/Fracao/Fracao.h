#ifndef FRACAO_H
#define FRACAO_H

#include <iostream>
using namespace std;
        
class Fracao {
public:
    Fracao(int n, int d = 1) : n(n/mdc(n, d)), d(d/mdc(n, d)) {}
    Fracao& operator*=(const Fracao& rhs);
    Fracao& operator+=(const Fracao& rhs);
    int num() const { return n; }
    int den() const { return d; }
private:
    int n, d;
    int mdc(int a, int b);
};

ostream& operator<<(ostream& out, const Fracao& f);
bool operator==(const Fracao& lhs, const Fracao& rhs);
bool operator!=(const Fracao& lhs, const Fracao& rhs);
Fracao operator*(Fracao lhs, const Fracao& rhs);
Fracao operator+(Fracao lhs, const Fracao& rhs);

#endif /* FRACAO_H */

