/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package br.ufscar.dc.catalogo;

import java.util.ArrayList;
import java.util.Collection;

/**
 *
 * @author Lobisgato
 */
public class DVD {
    
    private String diretor;
    private Collection<Artista> listaArtistas = new ArrayList<>();
    
    
    
    
    
    public void imprimeDados(){
         int i = 0;
         System.out.println("Diretor: " + this.diretor);
         for(Artista aux : listaArtistas){
             i++;
             System.out.print("Artista " + i + ": ");
             System.out.println(aux);
             
         }        
        
    }
    
    public void adicionaArtista(String artista, String papel){
        Artista aux = new Artista(artista,papel);
        listaArtistas.add(aux);
        
        
    }
    
    public int getTipo(){
        return 2;
    }
    
}
