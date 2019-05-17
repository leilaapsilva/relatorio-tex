/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Banco {
    
    
    
    
    
    public static void main(String[] args){
        
        Conta c1 = new Conta(40.0f);      
        Conta c2 = new Conta(99.0f);
        
        System.out.println(c1.getSaldo());
        System.out.println(c2.getSaldo());
        
        c1.Deposito(4.6f);
        System.out.println(c1.getSaldo());
        System.out.println(c2.getSaldo());
        c1.Saque(9999.9f);
        
        System.out.println(c1.getSaldo());
        System.out.println(c2.getSaldo());
        
        
        
        
        
    }
    
}
