package br.ufscar.dc.pc;

public class Juridica extends Pessoa {
    
    private String cnpj;

    public Juridica(String cnpj, String nome, String endereco) {
        super(nome, endereco);
        this.cnpj = cnpj;
    }

    public String toString() {
        return super.toString() + ", CNPJ: " + cnpj; 
    }

}
