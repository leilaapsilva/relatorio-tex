package br.ufscar.dc.catalogo;

public class Jogo extends Midia {

    private String genero;

    public Jogo(String titulo, int anoCriacao, String genero) {
        super(titulo, anoCriacao);
        this.genero = genero;
    }

    @Override
    public int getTipo() {
        return 3;
    }

    @Override
    void imprimeDados() {
        System.out.println("Tipo: Jogo Eletrônico");
        System.out.println("Gênero: " + this.genero);

    }

    void imprimeFicha() {
        super.imprimeFicha();
        // Usada mesma implementação explicada nas outras classes filhas de Midia
    }

}
