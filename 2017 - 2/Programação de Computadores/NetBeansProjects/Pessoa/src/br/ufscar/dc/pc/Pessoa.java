package br.ufscar.dc.pc;

import java.util.ArrayList;
import java.util.List;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Pessoa {
    
    private String nome;
    private String endereco;
    private List<Carro> carros;
    
    
    public Pessoa(String nome, String endereco){
        
        this.nome = nome;
        this.endereco = endereco;
        this.carros = new ArrayList<>();
    }
    
    public void imprime(){
          
        System.out.println("Nome: " + this.nome +   ", Endereco: " + this.endereco);
    }
    
         
    
    public void compra(Carro c){
        carros.add(c);
        
    }
     public void venda(Carro c){
        carros.remove(c);        
    } 

    public String getNome() {
        return nome;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }
    
    
    
    
}
