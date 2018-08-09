/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula14.pkg09;

/**
 *
 * @author 743554
 */
public class Pessoa {
    
    private String nome;
    private int idade;
    private  int qtde;

    
    private Carro carros[];
    
    
    
    
    public Pessoa(String nome, int idade) {
        this.nome = nome;
        this.idade = idade;
        this.qtde = 0;
    }
    
  public  void compra(Carro c){
        
        if(qtde <10){
            
           carros[qtde++] = c;
           c.setDono(this);
           
        }
        
    }
    
    public void imprime(){
        System.out.println("Nome : " + this.nome);
        System.out.println("Idade : " + this.idade);
        
        for(int i=0;i<qtde;i++){
            carros[i].imprime();
                      
            
        }
        
        
        
    } 
      
    
}




