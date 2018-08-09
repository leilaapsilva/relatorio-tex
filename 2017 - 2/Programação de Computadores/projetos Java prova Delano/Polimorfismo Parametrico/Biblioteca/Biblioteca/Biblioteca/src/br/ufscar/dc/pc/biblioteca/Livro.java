package br.ufscar.dc.pc.biblioteca;

public class Livro implements Comparable<Livro> {

    private String titulo;
    private String idioma;
    private int ano;
    private Autor autor;

    public Livro(String titulo, String idioma, int ano, Autor autor) {
        this.titulo = titulo;
        this.idioma = idioma;
        this.ano = ano;
        this.autor = autor;
    }

    public String getTitulo() {
        return titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public String getIdioma() {
        return idioma;
    }

    public void setIdioma(String idioma) {
        this.idioma = idioma;
    }

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public Autor getAutor() {
        return autor;
    }

    public void setAutor(Autor autor) {
        this.autor = autor;
    }

    public String toString() {
        return titulo + ", " + idioma
                + ", " + ano + " [" + autor + "]";
    }

    public int compareTo(Livro o) {        
        return this.ano - o.ano;
    }
}
