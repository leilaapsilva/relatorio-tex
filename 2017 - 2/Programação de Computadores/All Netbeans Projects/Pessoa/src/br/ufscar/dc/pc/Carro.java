package br.ufscar.dc.pc;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Carro {
    
    private String marca;
    private String modelo;
    private String cor;
    private int ano;
    private Pessoa dono;

    
    public Carro(String marca, String modelo, String cor, int ano, Pessoa dono) {
        this.marca = marca;
        this.modelo = modelo;
        this.cor = cor;
        this.ano = ano;
        this.dono = dono;
    }

    public void setDono(Pessoa dono) {
        this.dono = dono;
    }
    
    

    
    
    
    public String getCor() {
        return cor;
    }

    public int getAno() {
        return ano;
    }

    public String getModelo() {
        return modelo;
    }

    public String getMarca() {
        return marca;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public void setCor(String cor) {
        this.cor = cor;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }
    
    
    
}
