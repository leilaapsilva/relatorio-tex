/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Aluno extends Pessoa {
    
    private double nota;
    private String turma;

    public Aluno(String nome, int dia, String mes, int ano, String endereco, double nota, String turma) {
        super(nome, dia, mes, ano, endereco);
        this.nota = nota;
        this.turma = turma;
        
        
    }
    
    public void imprime(){
        System.out.println("---------------------------------------");
        System.out.println("Imprimindo aluno");
        super.imprime();
        //System.out.println("Nome: " + this.nome);
        //System.out.println("Endereco: " + this.endereco);
        //System.out.println("Data Nasc: dia " + super.dataNasc.getDia() +  " de " + super.dataNasc.getMes() + " de " + super.dataNasc.getAno() );
        System.out.println("Nota: " + this.nota);
        System.out.println("Turma: " + this.turma);
        System.out.println("---------------------------------------");

        
        
    }
    
    
    
}
