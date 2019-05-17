#ifndef DATA_H
#define DATA_H


class Data
{
        int dia;        //São Atributos
           //privados por
        int ano;        //default
    public:

       Data();
        Data(int dia1, char *mes1, int ano1);
       int getDia();
       char getMes();
       char mes[15];
       int getAno();
       void setDia(int dia);
       void setMes(char *mes);
       void setAno(int ano);
       void  imprime();

    protected:

    private:

};

#endif // DATA_H
