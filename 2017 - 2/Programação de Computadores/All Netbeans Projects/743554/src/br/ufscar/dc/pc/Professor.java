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
public class Professor extends Pessoa {
    
    private float salario;
    
    protected Universidade trabalhaNesta;
    
    // Como foi pedido um construtor unico, entao o professor não ficará desempregado nunca
    public Professor(String nome, int dia, int mes, int ano, String logr, int numero, String cepp, float salarioa, Universidade univ) {
        super(nome, dia, mes, ano, logr, numero, cepp);
        this.salario = salarioa;
        this.trabalhaNesta = univ;
        
    }
         
    
    public void imprime(){
        
        System.out.println("Dados do Professor: ");
        super.imprime();
        System.out.println("Salario do Professor: R$ " + this.salario);
        System.out.println("Universidade onde trabalha:  " + this.trabalhaNesta.getNome());
        
    
    }
    
    //Getters

    public float getSalario() {
        return this.salario;
    }

    public Universidade getTrabalhaNesta() {
        
        // Nao utilizado na impressao na classe Coordenador, pois utilizei this.trabalhaNesta.getNome() no lugar
        return trabalhaNesta;
    }
    
    
    
}
