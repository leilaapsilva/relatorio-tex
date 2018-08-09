#ifndef DATA_H
#define DATA_H


class Data
{
    public:
        Data(int dia1, char mes1[15], int ano1);
        getDia();
       char getMes();
        getAno();
       void setDia(int dia2);
       void  setMes(char *mes2);
       void  setAno(int anu);
        imprime();


    protected:

    private:
        int dia;
        char mes[15];
        int ano;
};

#endif // DATA_H
