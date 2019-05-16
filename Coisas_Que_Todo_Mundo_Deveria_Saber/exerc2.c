#include <stdio.h>
#include <stdlib.h>
#include <string.h>




int  isLuckyNumber(int i){
    
    if(i==0) return 0;
    
    while(i != 0){
        
        int digito = i % 10;
        i = i / 10;
        
        
        if (i != 4 && i !=  7)
            return 0;
            
    }
    
    return 1;
    
    
    
}


int maiorDoVet(int *v, int tam){
    int i;
    int maior = v[1];
    for(i=1;i<tam;i++)
    {
        if(v[i] > v[i+1])
        maior = v[i];
        
    }
    
    
    
    
    
    return maior;
}

int buscaX(int x,int *v, int tam){
     //int v[10] = {1,0,5,3,7,9,3,5,3,3};
    int i; 
    
   
    for(i=0;i<tam;i++){
        if(v[i] == x) return 1;
    }
    return 0;
    
    
}

int main()
{
    
     int v[10] = {1,0,5,3,7,9,3,5,3,3};
     
    printf("maior: %d\n", maiorDoVet(v,10));
    
    
         // Brute Force     - Busca Completa
        //  Algoritmos Gulosos
       //   
       int achou = 0;
       
    
            int i,na;
            
            scanf("%d", &na);
            
            
            for(i=0;i<na;i++){
               
               if(na % i == 0 && isLuckyNumber(i) == 1) {
              printf("SIM!!!\n");
              // return i;
               achou = 1;
               break;
               }
            
            }
    return 0;
}









