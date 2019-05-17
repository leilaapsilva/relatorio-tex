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
public class Juridica extends Pessoa {
    
    private String CNPJ;

    public Juridica(String nome, String endereco, String cnpj) {
        super(nome, endereco);
        this.CNPJ = cnpj;
    }
    
    
    public void imprime(){
         // System.out.println("Nome: " + this.getNome() +   " Endereco: " + this.getEndereco
                  super.imprime();
          System.out.println("CNPJ: " + this.CNPJ);
    }
    
    
}
