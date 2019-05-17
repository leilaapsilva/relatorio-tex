package br.ufscar.dc.pc;

public class Fisica extends Pessoa {
    
    private String cpf;

    public Fisica(String cpf, String nome, String endereco) {
        super(nome, endereco);
        this.cpf = cpf;
    }
    
    public String toString() {
        return super.toString() + ", CPF: " + cpf; 
    }
}
