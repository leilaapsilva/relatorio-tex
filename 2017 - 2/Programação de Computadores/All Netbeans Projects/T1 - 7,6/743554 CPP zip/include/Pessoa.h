#ifndef PESSOA_H
#define PESSOA_H


class Pessoa
{
    char nome[50];
    double pesoKg;
    double altura;


    public:
        Pessoa();
        Pessoa(char name[50], double pesin, double height);
        char getNome();
        double getPeso();
        double getAltura();
        void setNome(char noma[50]);
        void setPeso(double value);
        void setAltura(double value);
        double getIMC(double pesinho, double alturinha);
        void imprimeCategoria();

    protected:

    private:
};

#endif // PESSOA_H
