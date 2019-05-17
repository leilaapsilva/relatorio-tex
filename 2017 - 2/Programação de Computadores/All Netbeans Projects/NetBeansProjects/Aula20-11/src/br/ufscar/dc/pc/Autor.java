package br.ufscar.dc.pc;


import java.util.ArrayList;
import java.util.List;


public class Autor {
    private String nome;
     List livros = new ArrayList();

    public Autor(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    

   public void AddLivros(Livro livroParaAdd){
       this.livros.add(livroParaAdd);
       
   }
     
    public void RmLivros(Livro livroParaRemover){
       this.livros.remove(livroParaRemover);
       
       
   }
     
       
    public String toString(){
        return nome; 
    }
    
}
