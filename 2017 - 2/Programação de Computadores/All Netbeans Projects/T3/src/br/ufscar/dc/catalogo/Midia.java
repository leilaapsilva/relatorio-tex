/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package br.ufscar.dc.catalogo;

/**
 *
 * @author Lobisgato
 */
public abstract class Midia {
    
    private String titulo;
    private int anoCriação;

    public Midia(String titulo, int anoCriação) {
        this.titulo = titulo;
        this.anoCriação = anoCriação;
    }
    
    
    abstract int getTipo();
    abstract void imprimeDados();
  
    void imprimeFicha(){
        System.out.println("Título: " + this.getTitulo());
        System.out.println("Ano: " + this.getAnoCriação());
        
    }
    

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public int getAnoCriação() {
        return anoCriação;
    }

    public void setAnoCriação(int anoCriação) {
        this.anoCriação = anoCriação;
    }
    
    
    
    
    
    
    
}


 