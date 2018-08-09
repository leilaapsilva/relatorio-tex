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
public class Pessoa {
    protected String nome;
    protected final Data nascimento;
    protected Endereco endereco;

    //Construtor
    public Pessoa(String nome, int dia, int mes, int ano, String logr,int numero, String cepp) {
        this.nome = nome;
        this.nascimento = new Data(dia,mes,ano);
        this.endereco = new Endereco(logr,numero,cepp);
    }
    
    public void imprime(){
        System.out.println("Nome: " + this.nome);
        System.out.print("Nascimento ");
        this.nascimento.imprime();
        this.endereco.imprime();
        
        
        
    }
    
    
    
    
    
    
    
    
}
