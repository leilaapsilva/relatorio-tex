/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula04;

/**
 *
 * @author Lobisgato
 */
public class Caneta {
    
    private String modelo;
    private float ponta;
    
    
    
    public  Caneta(String m, float po){
        
        this.modelo = m;
        this.ponta = po;
    
    }

    
    
    public void SetModelo(String m){
        this.modelo = m;
        
    }
    
    public void SetPonta(float p){
        this.ponta = p;
        
    }
    
    public String getModelo(){
        
        return this.modelo;
    }
    
    public float getPonta(){
        
        return this.ponta;
    }
    
    public void status(){
        System.out.println("Modelo: " + this.modelo +" Ponta: "+ this.ponta+" ! ");
        
        
    }
}
