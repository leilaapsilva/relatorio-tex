package br.ufscar.dc.catalogo;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Comparator;
import java.util.SortedSet;
import java.util.TreeSet;
import java.lang.Comparable;
import java.util.Collections;


public class Catalogo {

    private Collection<Midia> midias = new ArrayList<>();

    public Catalogo(Collection<Midia> midias ) {
        
        this.midias = midias;
    }
    
    

    public boolean adicionaMidia(Midia midia) {
        midias.add(midia);
        return true;
    }

    public boolean removeMidia(Midia midia) {
        midias.remove(midia);
        return true;
    }

    public Midia obtemMidia(String titulo) {

        for (Midia aux : midias) {
            if (aux.getTitulo().equalsIgnoreCase(titulo)) {
                return aux;
            } 
        }
        return null;
        /*Método que retorna a mídia cujo título é igual ao parâmetro
passado e null, caso a mídia não seja encontrada no catálogo. */
    }

    public int quantidadeDeMídias() {
        /*. Fornece a quantidade de mídias no catálogo.
         */
        return midias.size();
    }

    public int quantidadeDeCDs() {
        int cont;
        cont = 0;
        for(Midia aux : midias){
            if(aux.getTipo() == 1){
                cont++;
            }
            
            
        }
        return cont;
    }

    public int quantidadeDeDVDs() {
        int cont; cont = 0;
        for(Midia aux : midias){
            if(aux.getTipo() == 2){
                cont++;
            }
        }
        return cont;
    }

    public int quantidadeDeJogos() {
       int cont = 0;
       for(Midia aux : midias){
           if(aux.getTipo() == 3)
               cont++;
           
       }
       return cont;
    }

    public void imprimeColecao() {
        
        /* Imprime as fichas das mídias do catálogo, ordenadas pelo ano + título.
Isto é, as mídias são ordenadas levando em consideração o ano da mídia. Caso duas mídias
tenham o mesmo ano, então são ordenadas pelo título.
         */
         SortedSet<Midia> conjunto;
        conjunto = new TreeSet<>(new CompararPorAnoeTitulo());
         

         for(Midia aux : midias){
             conjunto.add(aux);
             
         }
        // conjunto.sort();
         for(Midia aux : conjunto){
             aux.imprimeFicha();
         }
        
        
    }

    public void imprimeColeçãoPorTipo(int tipo) {

        
        /*  Imprime as fichas das mídias de um determinado tipo,
ordenadas pelo ano + título. Isto é, as mídias são ordenadas levando em consideração o ano da
mídia. Caso duas mídias tenham o mesmo ano, então são ordenadas pelo título.
   [CD = 1, DVD = 2 e Jogo = 3]
         */
    }

}

   class CompararPorAnoeTitulo implements Comparator<Midia>{
      
    @Override
    public int compare(Midia o1, Midia o2) {
        if(o1.getAnoCriacao() == o2.getAnoCriacao()) 
            return o1.getTitulo().compareTo(o2.getTitulo());
   
        else if(o1.getAnoCriacao() < o2.getAnoCriacao())
            return -1;
        else if (o1.getAnoCriacao() > o2.getAnoCriacao())
            return 1;
        else
                return 0;
        
        
        /*   else {
            return o1.getAnoCriacao() - o2.getAnoCriacao();
            
        }
*/
    }
    
  } 


   




