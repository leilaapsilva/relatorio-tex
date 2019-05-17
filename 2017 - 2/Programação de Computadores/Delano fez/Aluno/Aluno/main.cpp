#include "Aluno.h"
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv) {

    Aluno** aluno = new Aluno*[10];
    string nomes[] = {"ana", "bob", "carol", "joe", "ted", "frank", 
                      "bill", "mary", "harry", "lisa"};
    
    for (int i = 0; i < 10; i++) {
        aluno[i] = new Aluno(i, nomes[i]);
        cout << "Agora temos " << Aluno::GetQtde() << " alunos" << endl;
    }
    
    for (int i = 9; i >= 0; i--) {
        delete aluno[i];
        cout << "Agora temos " << Aluno::GetQtde() << " alunos" << endl;
    }
}

