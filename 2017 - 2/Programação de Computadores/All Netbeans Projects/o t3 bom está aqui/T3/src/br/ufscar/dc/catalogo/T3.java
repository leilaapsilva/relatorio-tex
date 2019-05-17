/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package br.ufscar.dc.catalogo;

import java.util.Collection;
import java.util.TreeSet;

/**
 *
 * @author Lobisgato
 */
public class T3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
               
        
        CD cdzinho = new CD("Bachianas Brasileiras No.2", 2004, "Orquestra de Câmara da Universidade de São Paulo");       
        cdzinho.adicionaFaixa("(Prelúdio) O Canto do Capadócio", 512);
        //cdzinho.imprimeDados();
        cdzinho.adicionaFaixa(" (Ária) O Canto da Nossa Terra", 389);
        cdzinho.adicionaFaixa("(Dança) Lembrança do Sertão", 324);
        //cdzinho.imprimeDados();
        //cdzinho.imprimeFicha();
        
        DVD dvdzinho = new DVD("O Senhor dos Anéis - A Sociedade do Anel", 2001, "Peter Jackson");
        dvdzinho.adicionaArtista("Elijah Wood", "Frodo Baggins");
        dvdzinho.adicionaArtista("Orlando Bloom", "Legolas Greenleaf");
       // dvdzinho.imprimeFicha();
       
       Jogo need = new Jogo("Need For Speed - Underground II", 2005, "Corrida");
       //need.imprimeFicha();
        Collection<Midia> midiasEt = new TreeSet<>();
        midiasEt.add(dvdzinho);
        midiasEt.add(need);
        midiasEt.add(cdzinho);
        
       Catalogo myCat = new Catalogo(midiasEt);
       myCat.imprimeColecao();
       
      
        
        
        
        
       
    }
    
}
