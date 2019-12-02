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


  char comandoCompleto[50];
  char cmd[3];
  char filename[10];


  //gets(comandoCompleto);
  //fgets(comandoCompleto,sizeof(comandoCompleto),stdin);




  printf("%s\n", comandoCompleto);
    /************************/

    char mytext;
    cmdReader(mytext);




    /************************/



  fclose(pFile);

  sout("eae men\n");
  return 0;

}
