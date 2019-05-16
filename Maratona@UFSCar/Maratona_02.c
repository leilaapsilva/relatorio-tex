


#include <stdio.h>
#include <iostream>
#include <cstdio>

using namespace std; 

int recursiveFib(int x){
    
         if (x<0) return -1;

  
    if(x == 2 || x == 1)
    return 1;
  /*   fib1 = 1;
    fib2 = 1;
    fib3 = fib1 + fib2;
    fib4 = fib2 + fib3; */
    
    return recursiveFib(x-1) + recursiveFib(x-2);
    
    
    
    
}


 int fibonacci(int x){
     if (x<0) return -1;
    
    int vetor[90]; int i;
    
    vetor[0] = 1;     vetor[1] = 1;
    for(i=2;i<90;i++){
        vetor[i] = vetor[i-1] + vetor[i-2];
    }

    
    
    
    return  vetor[x - 1];
     
     
 }
 
int globalInt;

void swap(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

void bubblesort(int *v, int n){
    int i,j;    
    for(i=0;i<n;i++){
      //  if(swapei == false) break;
        
      //  boolean swapei = false;
        for(j=i+1;j<n;j++){
            
            if(v[i] > v[j]){
                
                swap(v[i], v[j]); //swapei = true;   
                
            }
                
                
            
        }
    }
    
    for(i=0;i<n;i++)
        printf("%d ", v[i]);
    
}

int fatorial(int x){
    
    
    return (x > 1) ? x*fatorial(x-1) : x;
 
     //  if(x == 0)
    //   return 1;
   //  return ( x * fatorial(x - 1));  
    
}



void moveCopy(int x){   // muda copia alocada pela função
    
    
    x++;
    
    
}

void moveOriginal(int *x){ // end. de memória, muda diretamente
    
    (*x)++;
    
    
    
}

int resto_divisao(int x, int y){
    
    return x % y;
    
}


void bomdia(int dia, char *nome){
    
    cout << "Hoje é dia " << dia << endl << "Bom dia, "<<nome << endl;
    
    
    printf("\n-------------------------------------------\n");
    
    
    printf("em C: Hoje é o dia %d\nBom dia, %s!!!\n",dia,nome);
    
}

int main()
{
     
    char nome[50] = "Joaozin";
    int dd = 13;
    int a,b;
    
  /*    bomdia(14,"josé");
      bomdia(19,"NAMING");
      bomdia(27,"OUTRO NOME");
      bomdia(31,"JULIETA"); 
      bomdia(22,"JONATHAN");
      bomdia(5,"mauricio");
      
      */
       
       
       
       
       
       
      int rest = resto_divisao(10,3);
    printf("O resto foi: %d\n", rest);
    
    globalInt =  'a';
    printf("int cast : %d\n", globalInt);
    
    
int af = 2;
moveCopy(af);
printf("movecopy %d\n", af);

moveOriginal(&af);
printf("moveOriginal %d\n", af);

int fat;
printf("De que numero tu quer saber o fatorial fdp\n");
scanf("%d", &fat);

printf("fatorial de %d eh: %d\n",fat, fatorial(fat));


int vetor[10] = {3,1,9,0,4,5,8,6,2,7}; 

bubblesort(vetor,10);
printf("\n\n\n");


printf("\nfib 8 eh %d\n", fibonacci(8));
printf("Recursive fib 8 eh %d\n", recursiveFib(8));

    return 0;
}
