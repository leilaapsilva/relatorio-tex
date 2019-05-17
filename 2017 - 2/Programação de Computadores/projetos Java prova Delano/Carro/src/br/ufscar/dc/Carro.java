package br.ufscar.dc;

public class Carro implements Comparable<Carro> {
    
    private int ano;
    private String montadora;
    private String nome;
    private String cor;

    public Carro(String montadora, String nome, 
            String cor, int ano) {
        this.montadora = montadora;
        this.nome = nome;
        this.cor = cor;
        this.ano = ano; 
    }

    public String getNome() {
        return nome;
    }

    public int compareTo(Carro o) {
        return this.ano - o.ano;
    }
    
    
    public String toString() {
        return nome + ", " + montadora + ", " + cor + ", " + ano;
    }
}
