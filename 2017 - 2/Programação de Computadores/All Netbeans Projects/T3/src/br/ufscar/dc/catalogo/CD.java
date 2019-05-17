package br.ufscar.dc.catalogo;

import java.util.ArrayList;
import java.util.Collection;
import java.util.TreeSet;
import java.util.List;





public class CD extends Midia {

    private String artista;
    private Collection<Faixa> lista =  new ArrayList<>();
    
    
    
    public CD(String titulo, int anoCriacao, String artista){
        super(titulo, anoCriacao);
        this.artista = artista;
    }
    
    
   void adicionaFaixa(String faixa, int duração){
       Faixa aux = new Faixa(faixa, duração);
        lista.add(aux);
       
       
       
       
   }
     void imprimeDados(){
         int i = 0;
         System.out.println("Artista: " + this.artista);
         for(Faixa f : lista){
             i++;
             System.out.print("Faixa " + i + ": ");
             System.out.println(f);
             
         }
     
     
     
     }        
    
    public int getTipo(){
        return 1;
    }
    
}
