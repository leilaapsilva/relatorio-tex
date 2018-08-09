/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Funcionario {
    
    private int numero;
    private String nome;
    private double cargaTrab;
    private double valor_por_hora;

   
    
    public Funcionario(int numero, String nome, double cargaTrab, double valor_por_hora) {
        this.numero = numero;
        this.nome = nome;
        this.cargaTrab = cargaTrab;
        this.valor_por_hora = valor_por_hora;
    }
    
    
    

    
    
public double getSalario(){
    return cargaTrab * valor_por_hora;

}
    
public double getValorPorHora(){
        return valor_por_hora;
        
    

}
    
public void Imprimir(){   
    
    System.out.println("O Salario de " + nome + " eh: R$ " + getSalario());
    

    
}



public String toString(){
    
    return "O salario de " + nome.toUpperCase() + " é R$ "+ getSalario();
    
}
    
    
}
