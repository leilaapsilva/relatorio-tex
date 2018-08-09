#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

//Exercicio do elevador
char lixo[10];
char elevador = 'j';
char periodo = 'j';
int contaA =0,contaB = 0,contaC = 0;
int contaM = 0,contaV = 0,contaN = 0;
int cma=0,cva=0,cna=0,cmb=0,cvb=0,cnb=0,cmc=0,cvc=0,cnc=0;
char elemais,horariomais,elemaisperiodo;

while (periodo != 'x' || elevador != 'x'){
printf("O elevador que utilizava com maior frequencia (A,B ou C) : \n");
scanf("%c",&elevador);
gets(lixo);
printf("o período em que mais utilizava o elevador(M,V,N) : \n");
scanf("%c",&periodo);
gets(lixo);

if(elevador == 'A' || elevador == 'a')
{
  contaA++;
  if(periodo == 'M' || periodo == 'm')
    {
      contaM++;
      cma++;
    }
    else if(periodo == 'V' || periodo == 'v')
      {
        contaV++;
        cva++;
      }
      else if(periodo == 'N' || periodo == 'n')
        {
          contaN++;
          cna++;
        }
}
else if(elevador == 'B' || elevador == 'b')
{
  contaB++;
  if(periodo == 'M' || periodo == 'm')
    {
      contaM++;
      cmb++;
    }
    else if(periodo == 'V' || periodo == 'v')
      {
        contaV++;
        cvb++;
      }
      else if(periodo == 'N' || periodo == 'n')
        {
          contaN++;
          cnb++;
        }
}

else if(elevador == 'C' || elevador == 'c')
{
  contaC++;
  if(periodo == 'M' || periodo == 'm')
    {
      contaM++;
      cmc++;
    }
    else if(periodo == 'V' || periodo == 'v')
      {
        contaV++;
        cvc++;
      }
      else if(periodo == 'N' || periodo == 'n')
        {
          contaN++;
          cnc++;
        }
}
}



//Elevador mais badalado
if(contaA > contaC && contaA > contaB)
  elemais = 'A';
  else if(contaB > contaC && contaB > contaA)
    elemais = 'B';
    else if(contaC > contaA && contaC > contaB)
      elemais = 'C';

//Horario mais badalado
if(contaM > contaV && contaM > contaN)
  horariomais = 'M';
  else if(contaV > contaM && contaV > contaN)
    horariomais = 'V';
    else if(contaN > contaM && contaN > contaV)
      horariomais = 'N';

printf("elevador mais utilizado e %c e seu periodo de maior utilizacao ",elemais);
printf("periodo mais utilizado e %c \n",horariomais );

}
