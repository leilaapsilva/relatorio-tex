#ifndef ALUNO_H
#define ALUNO_H

#include <string>
using namespace std;

class Aluno {
public:
    Aluno(int ra, string nome);
    virtual ~Aluno();
    static int GetQtde();
private:
    int ra;
    string nome;
    static int qtde;
};

#endif /* ALUNO_H */

