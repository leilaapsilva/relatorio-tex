#include <iostream>
#include "Data.h"
#include "Professor.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Data *pData = new Data(19,"Agosto", 1996);
    pData->imprime();

    Professor *pProf = new Professor(754, "Julio Cesar", "Dep Comp", 14, "gosto", 1996);
    pProf->imprime();

    return 0;
}
