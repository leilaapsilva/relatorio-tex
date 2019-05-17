package br.ufscar.dc.pc;


import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import static java.util.Collections.list;
import java.util.List;
import java.util.SortedSet;
import java.util.TreeSet;



public class Biblioteca  implements Comparable<Livro>{
    private Collection<Livro> acervo;

    public Biblioteca() {
        
         acervo = new ArrayList<>();
         
    }
    
    public Collection<Livro> getAcervo(){
        
        return this.acervo;         
    
    }
    
    
    
    public void imprime(int ano){
        
        
    }
    
    public void imprimeAc(String autor){
        
        SortedSet<Livro> conjunto = new TreeSet<>();
       // lista.addAll(acervo);
       //Collections.sort(lista);
        
        
        for(Livro livro : acervo){
            if(livro.getAutor().getNome().equalsIgnoreCase(autor)){
                conjunto.add(livro);
            }
            
        }
      // Collections.sort(conjunto);
       
       for(Livro livro : conjunto){
           System.out.println(livro);
       }
        
        /*
            for(Livro livro : acervo){
            if(livro.getAutor().getNome().equals(autor));
            
            
            System.out.println(livro);
            
            
        } */
        
        
        
    }
    
    public void imprimeAc(){
        for(Livro livro: acervo){
            System.out.println(livro);
        }
        
    }
    
    public void imprimeAc( int ano){
        SortedSet<Livro> cj = new TreeSet<>();
        for(Livro livro : acervo){
            if(livro.getAno() >= ano){
                cj.add(livro);
            }
            
        }
        
        for(Livro livro : cj){
            System.out.println(livro);
            
        }
        
    }
    
    
   public void AddLivros(Livro livroParaAdd){
       this.acervo.add(livroParaAdd);
       
   }
     
    public void RmLivros(Livro livroParaRemover){
       this.acervo.remove(livroParaRemover);
       
       
   }

    @Override
    public int compareTo(Livro o) {
        
        return 0; // temporario
        
    }
     
       
    
// class MyComparatorTabajara implements Comparator<Livro>{
    
  //  public int compare(Livro o1, Livro o2){
        
   // }
    
    
//}


   
}

