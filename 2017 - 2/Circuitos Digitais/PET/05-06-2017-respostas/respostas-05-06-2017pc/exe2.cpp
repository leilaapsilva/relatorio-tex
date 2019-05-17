#include <iostream>

using namespace std;

int mmc(int, int);

int main(){
	int a, b; // corrijam no exercício q são 2 inteiros :P
	cin >> a >> b;
	cout << "o mmc: " << mmc(a,b) << endl;
	return EXIT_SUCCESS;
}

int mmc(int num1, int num2){
    int resto, a, b;
    a = num1;
    b = num2;
    do {
        resto = a % b;
        a = b;
        b = resto;
    } while (resto != 0);
    return ( num1 * num2) / a;
}