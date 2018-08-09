#include <iostream>
#include <string>
using namespace std;

int * func(int);

int main(){
	srand(time(NULL)); 
	string s;
	int *v;
	do{
		cout << "continue: " << endl;
		cin >> s;
		if(s != "jv"){ 
			v = func(rand() % 42 + 0);
		}else
			cout << "fim" << endl;	
	}while(s != "jv");
	cout << endl << "impares: " << v[0] << endl << "pares: " << v[1] << endl;
	return 0;
}

int * func(int x){
	static int v[2] = { 0, 0 };
	if(x % 2 == 0)
		v[0]++;
	else
		v[1]++;
	return v;
}