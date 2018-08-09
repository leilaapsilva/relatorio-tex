#include <iostream>
#include "Fracao.h"

using namespace std;

int main() {
    Fracao f1(3, 8), f2(1, 2), f3(10, 2);
    cout << f1 << " * " << f2 << " = " << f1 * f2 << '\n';
    cout << f2 << " * " << f3 << " = " << f2 * f3 << '\n';
    cout << 2  << " * " << f1 << " = " << 2 * f1 << '\n';
    cout << f2 << " + " << f3 << " = " << f2 + f3 << '\n';
}