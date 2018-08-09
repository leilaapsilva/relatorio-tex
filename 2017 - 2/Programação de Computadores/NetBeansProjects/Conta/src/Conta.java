/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Conta {
    
    private float saldo;
    
    
    public float getSaldo(){
        return saldo;
    }

    public void Deposito(float valor){
        
        saldo += valor;
    }

    public boolean Saque(float valor){  
        
        if(valor <= saldo){
        saldo -= valor;
        return true;
        }
        else{
            System.out.println("Não rolou!!!!");
        return false;
        }
        
    }

  
    
    public Conta(float valor){
        
        saldo = valor;
    }
    
}
