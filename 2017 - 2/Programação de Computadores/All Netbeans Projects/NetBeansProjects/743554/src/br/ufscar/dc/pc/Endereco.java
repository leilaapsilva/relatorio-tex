/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package br.ufscar.dc.pc;

/**
 *
 * @author 743554
 */
public class Endereco {
    
    private String logradouro;
    private int numero;
    private String CEP;

    //Construtor 
    public Endereco(String logradouro, int numero, String CEP) {
        this.logradouro = logradouro;
        this.numero = numero;
        this.CEP = CEP;
    }
    
    
    
    
    
    public void imprime(){
        System.out.println("Logradouro : " + this.logradouro + ", numero " + this.numero + " , CEP: " + this.CEP);
        
        
    }
    
    
    
}
