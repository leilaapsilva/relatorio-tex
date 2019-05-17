package br.ufscar.dc.pc.biblioteca;

import java.util.Collection;

public class Main {

    public static void imprimeAcervo(Collection<Livro> acervo) {

        for (Livro livro : acervo) {
            System.out.println(livro);
        }
    }

    public static void main(String[] args) {

        Biblioteca b = new Biblioteca();

        Autor joao = new Autor("João Teixeira");

        Autor douglas = new Autor("Douglas Adam");

        Livro[] l = new Livro[5];

        l[0] = new Livro("Mente, Cerebro e Cognicao", "Português", 2007, joao);

        l[1] = new Livro("Mochileiro das Galáxias", "Português", 2001, douglas);

        l[2] = new Livro("A Vida, o Universo e Tudo Mais", "Português", 2011, douglas);

        l[3] = new Livro("Cem Anos de Solidão", "Português", 2001,
                new Autor("Garcia Marquez"));

        l[4] = new Livro("Ensaio sobre a Cegueira", "Português", 2000,
                new Autor("José Saramago"));

        for (Livro livro : l) {
            b.adicionaLivro(livro);
        }

        //imprimeAcervo(b.getAcervo());

      //  System.out.println("------------------------");

        //b.imprimeAcervo("Douglas Adam");
        
       // System.out.println("------------------------");
        
        b.imprimeAcervo(2001);

    }

}
