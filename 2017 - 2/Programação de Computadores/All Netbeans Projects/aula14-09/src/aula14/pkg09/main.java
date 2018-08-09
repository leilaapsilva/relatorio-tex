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
public class main {
    
    
    public static void main(String[] args){
        
        
        Pessoa p1 = new Pessoa("Jose", 30); 
        Pessoa p2 = new Pessoa("maria", 20);
        
        Carro c1 = new Carro("Camaro", "Vermelho", 2017);
        Carro c2 = new Carro("Ferrari", "Preta", 2015);
        Carro c3 = new Carro("Fusca", "Azul", 1969);
        
        p1.compra(c1);
        p2.compra(c2);
        p1.compra(c3);
        
        p1.imprime();
        System.out.println();
        p2.imprime();
        
        System.out.println();
        c1.getDono().imprime();
        
        
    }
    
}
