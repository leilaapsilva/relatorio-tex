#include <iostream>

using namespace std;

void printv(int *, int);

int main(){
	const int tamanho = 6;
	int v[tamanho];
	int aux;
	for(int i = 0; i < tamanho; i++)
		cin >> v[i];
	// crescente
	for(int i = 0; i < tamanho; i++)
		for(int j = 0; j < tamanho; j++)
			if(v[i] < v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
	cout << "crescente:" << endl;
	printv(v, tamanho);
	cout << endl;

	// decrescente
	for(int i = 0; i < tamanho; i++)
		for(int j = 0; j < tamanho; j++)
			if(v[i] > v[j]){
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
	cout << "decrescente:" << endl;
	printv(v, tamanho);
	cout << endl;
	return 0;
}

void printv(int *v, int tam){
	for(int i = 0; i < tam; i++)
		cout << v[i] << " ";
	cout << endl;
};