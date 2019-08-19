#include <stdlib.h>
#include <stdio.h>
#define sout printf




void cmdReader(char* line){



}




int main(){

  FILE * pFile;
  pFile = fopen("mydatabase.bin","w+b");

  if (pFile == NULL) {
    sout("\nporra tu eh burro!?\n");
    return 0;

  }
/************************/



cmdReader(mytext);



/************************/



  fclose(pFile);

  return 0;

}
