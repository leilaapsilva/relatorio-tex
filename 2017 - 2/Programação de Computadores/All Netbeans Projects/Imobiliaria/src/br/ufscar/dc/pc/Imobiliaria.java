




package br.ufscar.dc.pc;

public class Imobiliaria {
    private String nome;
    private String endereco;
    private  int CNPJ;
    private  int nroImoveis;

    public Imobiliaria(String nome, String endereco, int CNPJ, int nroImoveis) {
        this.nome = nome;
        this.endereco = endereco;
        this.CNPJ = CNPJ;
        this.nroImoveis = nroImoveis;
    }
    
  

    public int getNroImoveis() {
        return nroImoveis;
    }
    
  class Imob2 extends Imobiliaria{
    public Imob2(String nome, String endereco, int CNPJ, int nroImoveis){
        
        super(nome,endereco,CNPJ, nroImoveis);
        
    }
    public int getNumeroImoveis(){
        return 20;
    }

}
    
    
}
