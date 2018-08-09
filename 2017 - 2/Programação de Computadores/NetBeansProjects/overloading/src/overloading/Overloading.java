/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package overloading;

/**
 *
 * @author 743554
 */
public class Overloading {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        System.out.println("soma " + soma(14));
        
        
        
    }
    



public static int soma(int ... numero){
    int soma = 0;
   for(int i = 0; i<numero.length;i++){
           soma += numero[i];      
       
   }
    return soma;


}

}




