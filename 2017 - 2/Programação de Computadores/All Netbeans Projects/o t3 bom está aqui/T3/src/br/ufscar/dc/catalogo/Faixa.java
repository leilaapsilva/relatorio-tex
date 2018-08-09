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
public class Faixa {
    
    private String nome;
    private int duracao;

    public Faixa(String nome, int duracao) {
        this.nome = nome;
        this.duracao = duracao;
    }
    
    public String toString(){
        int aux = duracao / 60;
        int aux2 = duracao % 60;
        return (this.nome + ", duração: " + aux + ":" + aux2);
        
    }
    
    
}
