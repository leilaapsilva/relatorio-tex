package br.ufscar.dc.pc;

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

    public void imprime() {
        System.out.println(this);
        System.out.println("Dono: [" + this.dono + "]");
    }
    
    @Override
    public String toString() {
        String s = "Marca: " + marca;
        s += ", Modelo: " + modelo;
        s += ", Cor: " + cor;
        s += ", Ano: " + ano;
        return s;
    } 
}
