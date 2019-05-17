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
public class Carro extends Veiculo {
 
    
    private String marca;
    private String cor;
    private int ano;
    
    private Pessoa dono; 
    
    public Carro(String marca, String cor, int ano) {
        this.marca = marca;
        this.cor = cor;
        this.ano = ano;
    }
    
    public Pessoa getDono(){
        
        return dono;
    
    }
    
     public void setDono(Pessoa donuu){
        
        this.dono = donuu;

    }
     
     
     public void imprime(){
         
         System.out.println("Marca " + this.marca);
         System.out.println("Cor " + this.cor);
         System.out.println("Ano " + this.ano);
         
     }
    
    
    
    
    
}
