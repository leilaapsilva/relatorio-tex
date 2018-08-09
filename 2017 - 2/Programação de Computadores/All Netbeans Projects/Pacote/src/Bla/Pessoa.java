/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Bla;

/**
 *
 * @author 743554
 */
public class Pessoa {
    
    private  int idade;
    private  String nome;
    
    public Pessoa(int i, String n){
            
            nome = n;
            idade = i;
            
        
    }
    public void Imprime(){
    
    System.out.println("Nome: " + nome + "Idade: " + idade);
    System.out.println(nome.toUpperCase());
    
    
    
    }
    
    
    
}
