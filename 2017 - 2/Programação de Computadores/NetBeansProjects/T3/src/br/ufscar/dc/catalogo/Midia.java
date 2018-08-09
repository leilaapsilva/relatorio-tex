/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package br.ufscar.dc.catalogo;

import java.lang.Comparable;

/**
 *
 * @author Lobisgato
 */
public abstract class Midia implements Comparable<Midia> {

    private String titulo;
    private int anoCriacao;

    public Midia(String titulo, int anoCriacao) {
        this.titulo = titulo;
        this.anoCriacao = anoCriacao;
    }

    public abstract int getTipo();

    abstract void imprimeDados();

    void imprimeFicha() {
        System.out.println("-------------------------------");
        System.out.println("Título: " + this.getTitulo());
        System.out.println("Ano: " + this.getAnoCriacao());
        // tipo entendido como 'da subclasse' e impresso de acordo
        imprimeDados();

    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public int getAnoCriacao() {
        return anoCriacao;
    }

    public void setAnoCriacao(int anoCriacao) {
        this.anoCriacao = anoCriacao;
    }

    @Override
    public int compareTo(Midia o) {
        if (this.anoCriacao < o.anoCriacao) {
            return -1;
        } else if (this.anoCriacao > o.anoCriacao) {
            return 1;
        } else {
            return 0;
        }

    }
}
