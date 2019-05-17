package br.ufscar.dc.pc;

public class Pessoa {
    
    private String nome;
    private String endereco;

    public Pessoa(String nome, String endereco) {
        this.nome = nome;
        this.endereco = endereco;
    }
    
    public void imprime() {
        System.out.println(this);
    }
    
    public String toString() {
        String s = "Nome: " + nome;
        s += ", Endereço: " + endereco;
        return s;
    }
}
