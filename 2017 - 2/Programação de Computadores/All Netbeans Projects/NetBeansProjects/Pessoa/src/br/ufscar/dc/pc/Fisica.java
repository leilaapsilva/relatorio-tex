package br.ufscar.dc.pc;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Fisica extends Pessoa {
    
   private String CPF;

    public Fisica(String nome, String endereco, String CPF) {
        super(nome, endereco);
        this.CPF = CPF;
        
    }
    
    
    public void imprime(){
          //System.out.println("Nome: " + this.getNome() +   " Endereco: " + this.getEndereco());
          super.imprime();
          System.out.println("CPF: " + this.CPF);
    }
    
    
}
