package cap.dc.ufscar.br;

import java.util.Arrays;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Main {
    
    public static void main(String args[]){
        
        Carro ca1 = new Carro(1996, "Brasilia", "wolks", 2.2f, 1000);
        //ca1.imprime();
        
        System.out.println("  ");
        Caminhao ca2 = new Caminhao(1996, "Brasilia", "VW", 2.2f, 1000);
        //ca2.imprime();
        
        Veiculo[] carvet = new Veiculo[3];
        
        carvet[0] = new Carro(1996, "Brasilia", "wolks", 2.2f, 1000);
        carvet[1] = new Caminhao(1996, "Scania", "VW", 2.2f, 100);
        carvet[2] = new Carro(1222, "carro ferpa", "woks", 2.3f, 10);
        
        
      /* for(int i=0; i< 3;i++){
            for(int j = 1; j < 3; j++){
                
                if(carvet[i].ano > carvet[j].ano){
                    Veiculo aux;
                    aux = carvet[i];
                     carvet[i] = carvet[j];
                     carvet[j] = aux;
                     
                     
                }
                    
                
            } */
            
    
               Arrays.sort(carvet);
               
               
            
               for(Veiculo v : carvet){
                v.imprime();
                System.out.println(" ");
        
                
        
    }  
                
            }
           
        } 

}
    

