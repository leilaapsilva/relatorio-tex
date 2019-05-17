package br.ufscar.dc.pc;

import java.util.HashSet;
import java.util.Set;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author bloco36
 */
public class AnimalDomestico {
    
    protected String nome;
    protected double peso;
    protected Pessoa dono;

    public AnimalDomestico(String nome, double peso) {
        this.nome = nome;
        this.peso = peso;
    }
    // Pode ter um dono, mas não obrigatorio
    public AnimalDomestico(String nome, double peso, Pessoa don) {
        this.nome = nome;
        this.peso = peso;
        this.dono = don;
        don.setMyAnimal(this);
        
    }
    
    

    public void setDono(Pessoa dono) {
        this.dono = dono;
    }

    public Pessoa getDono() {
        return dono;
    }
    
    

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setPeso(double peso) {
        this.peso = peso;
    }

    public String getNome() {
        return nome;
    }

    public double getPeso() {
        return peso;
    }
    
    
       
     public void imprime(){
        System.out.println("Nome: " + getNome());
        System.out.println("Peso: " + getPeso());
        
    
}
    
}
