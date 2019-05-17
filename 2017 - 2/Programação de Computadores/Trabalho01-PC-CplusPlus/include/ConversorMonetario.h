#ifndef CONVERSORMONETARIO_H
#define CONVERSORMONETARIO_H


class ConversorMonetario
{
    double taxaCompra;
    double taxaVenda;

    public:
        ConversorMonetario();
        ConversorMonetario(double tx1, double tx2);
       void imprimeTaxas();
        double vendeDolar(double quantia);
        double compraDolar(double quantia);
        void setTaxaC(double value);
        void setTaxaV(double value);
        double getTaxaC();
        double getTaxaV();

    protected:

    private:
};

#endif // CONVERSORMONETARIO_H
