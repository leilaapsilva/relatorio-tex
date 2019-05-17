#include <iostream>

using namespace std;

int main(){
	const int tamanho = 8;
	int sImpar = 0, sPar = 0;
	int v[tamanho];
	for(int i = 0; i < tamanho; i++)
		cin >> v[i];

	for(int i = 0; i < tamanho; i++)
		if(v[i]%2 == 0)
			sPar += v[i];
		else
			sImpar += v[i];

	cout << "soma dos impares: " << sImpar << endl;
	cout << "soma dos pares: " << sPar << endl;

	return 0;
}