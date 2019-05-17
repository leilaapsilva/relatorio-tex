/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package br.ufscar.dc.pc;

/**
 *
 * @author bloco36
 */
public class main {
    
    public static void main(String args[]){
        
        // Apenas para alguns testes
        
        AnimalDomestico indef = new AnimalDomestico("rex", 35.0);
        Pessoa p1 = new Pessoa("Delano", 34, indef);
        Pessoa weber = new Pessoa("max weber", 34, indef);

    //    indef.imprime();
        indef.setDono(p1);
      //  indef.imprime();
        
        //p1.imprime();
       // Pessoa weber = new Pessoa("Max Weber", 34);
        
        Cachorro dogSemDono = new Cachorro("bullterrier", "MAIK", 14.0);
        Cachorro dogComDono = new Cachorro("comdono", "MAIK", 14.0,weber);
        Pessoa weberWife = new Pessoa("Cristina", 34, dogComDono);
        //dogSemDono.imprime();
      //  dogComDono.imprime();
        
        Peixe peix1 = new Peixe("Agua salgada", "nemo", 1.0, p1);
        //p1.imprime();
        
        
        Peixe peixcomdono = new Peixe("Agua salgada", "nemo com dono", 1.6, p1);
        Pessoa p3 = new Pessoa("name", 13, peixcomdono);
        //p3.imprime();
        System.out.println(peixcomdono.dono.getNome());
        System.out.println("imprime peixe 1");
        System.out.println(peix1.dono.getNome());
        Pessoa p4 = new Pessoa("donodopeixekjasiuasb", 19, peix1);
        System.out.println("imprime peixe 1");
        System.out.println(peix1.dono.getNome());



        
        
        
        

        
        
        

        
        
        
        
    }
    
}
