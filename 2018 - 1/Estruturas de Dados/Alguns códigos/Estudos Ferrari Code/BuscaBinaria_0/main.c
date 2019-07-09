#include <stdio.h>
#include <stdlib.h>


struct Colecao{
  //  public int valores[10] = {12,56,87,23,96,43,27,76,33,11};
   int valores[10];



};

public int buscaSeq(int val, Struct Colecao col){
    int pos;
    for(pos = 0; pos < 10;pos++){
      if(val == col.valores[pos]){
        return pos;
      }

    }

return -1;
}
int main()
{
   struct Colecao colec;


    return 0;
}

