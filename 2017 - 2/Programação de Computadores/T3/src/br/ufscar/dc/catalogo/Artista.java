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
class Artista {

    private String nome;
    private String papel;

    public Artista(String nome, String papel) {
        this.nome = nome;
        this.papel = papel;
    }

    public String toString() {
        return (this.nome + ", papel: " + this.papel);

    }

}
