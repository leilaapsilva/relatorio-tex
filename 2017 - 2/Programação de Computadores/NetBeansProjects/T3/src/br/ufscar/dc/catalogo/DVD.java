package br.ufscar.dc.catalogo;

import java.util.ArrayList;
import java.util.Collection;

public class DVD extends Midia {

    private String diretor;
    private Collection<Artista> listaArtistas = new ArrayList<>();

    public DVD(String titulo, int anoCriacao, String diretor) {
        super(titulo, anoCriacao);
        this.diretor = diretor;
    }

    public void imprimeDados() {
        int i = 0;
        System.out.println("Tipo: Filme em DVD");
        System.out.println("Diretor: " + this.diretor);
        for (Artista aux : listaArtistas) {
            i++;
            System.out.print("Artista " + i + ": ");
            System.out.println(aux);
            // Não foi especificado se era necessário ordenação para os artistas no DVD 
            // ( apenas nas impressões especificas ) , então deixei a cargo da ArrayList( ordem de inserção,
            // aparentemente

        }

    }

    public void adicionaArtista(String artista, String papel) {
        Artista aux = new Artista(artista, papel);
        listaArtistas.add(aux);

    }

    public int getTipo() {
        return 2;
    }

    public void imprimeFicha() {
        // declaração não obrigatória, feita por desencargo de consciência.
        // Optei por deixar o pai resolver o imprimeFicha();
        super.imprimeFicha();

    }

}
