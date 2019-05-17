#include <iostream>

using namespace std;

int main(){
	const int tam = 10;
	int v[tam];
	int maior, menor;
	for(int i = 0; i < tam; i++)
		cin >> v[i];
	maior = v[0];
	menor = v[0];
	for(int i = 1; i < tam; i++)
		if(v[i] > maior)
			maior = v[i];
		else
			menor = v[i];

	cout << "maior: " << maior << endl;
	cout << "menor: " << menor << endl;
	return 0;
}