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
public class Universidade {
        
       private String nome;
       private Endereco endereco;
       

    public Universidade(String nome, String logr,int numero, String cepp) {
        this.nome = nome;
        this.endereco = new Endereco(logr, numero, cepp);
        
    }
    public void imprime(){
        System.out.println("Nome da Universidade: " + this.nome);
        System.out.print("Endereco da universidade - ");
        this.endereco.imprime();
             
        
    }

    public String getNome() {
        return nome;
    }
       
       
       
    
            
    
    
}
