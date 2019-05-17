#include "ConversorMonetario.h"
#include <iostream>


using namespace std;


ConversorMonetario::ConversorMonetario()
{

}

ConversorMonetario::ConversorMonetario(double tx1, double tx2)
{
    taxaCompra = tx1;
    taxaVenda  = tx2;

}

double ConversorMonetario::vendeDolar(double quantia){
    return quantia * taxaVenda;

}

double ConversorMonetario::compraDolar(double quantia){
     return quantia / taxaCompra;

}

void ConversorMonetario::imprimeTaxas(){
    cout << "Taxa de compra: " << taxaCompra << endl << "Taxa de venda: " << taxaVenda << endl;

}

// Getters
double ConversorMonetario::getTaxaC(){

    return taxaCompra;
}

double ConversorMonetario::getTaxaV(){
    return taxaVenda;
}
// Setters

void ConversorMonetario::setTaxaC(double value){
    taxaCompra = value;
}

void ConversorMonetario::setTaxaV(double value){
    taxaVenda = value;


}
