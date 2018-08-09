#include "CConta.h"
#include "Data.h"
#include "Professor.h"
#include "Pessoa.h"
#include "ConversorMonetario.h"

#include <iostream>

using namespace std;

int main()
{
    Data *d1 = new Data(9,"Agosto",1996);
    d1->setDia(15);
    d1->setAno(1565);
    d1->setMes("mariazinha");
  //  d1->imprime();

    Professor *prof = new Professor(14,"Ivan nelson", "DC", 6, "julho",1991);

    // prof->imprime();

    Pessoa *pes = new Pessoa("Marcelinho", 80, 1.80);
    pes->setAltura(1.60);
    pes->setPeso(130);
  //  pes->imprimeCategoria();

  ConversorMonetario *conv = new ConversorMonetario(3.14, 3.25);
 // conv->imprimeTaxas();
  // cout << conv->compraDolar(200) << endl;
  //  cout << conv->vendeDolar(63.69) << endl;



  return 0;
}


