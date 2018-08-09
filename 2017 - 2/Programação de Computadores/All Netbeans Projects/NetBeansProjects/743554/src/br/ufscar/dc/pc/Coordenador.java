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
public class Coordenador extends Professor{
    
    private String curso;

    //Construtor
    public Coordenador(String nome, int dia, int mes, int ano, String logr, int numero, String cepp, float salarioa, Universidade univ, String curse) {
        super(nome, dia, mes, ano, logr, numero, cepp, salarioa, univ);
        this.curso = curse;
    }

 
    
    
    
    @Override
    public void imprime(){
        
        System.out.println("------- Dados do Coordenador -------");
        System.out.println("Nome: " + this.nome);
        System.out.print("Nascimento ");
        this.nascimento.imprime();
        this.endereco.imprime();
        System.out.println("Salario do Coordenador: " + this.getSalario());
        System.out.println("Universidade onde trabalha:  " + this.trabalhaNesta.getNome());
        System.out.println("Curso: " + this.curso);
        
        
        
        
        
    }
    
    
    
    
    @Override
    public float getSalario(){
        
        return super.getSalario() + 2000;
             
              
        
    }
    
    
    
    
    
}
