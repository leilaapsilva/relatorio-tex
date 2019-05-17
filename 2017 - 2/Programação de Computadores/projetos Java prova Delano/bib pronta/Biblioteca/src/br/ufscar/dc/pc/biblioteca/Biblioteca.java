package br.ufscar.dc.pc.biblioteca;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Comparator;
import java.util.SortedSet;
import java.util.TreeSet;

public class Biblioteca {

    private Collection<Livro> acervo;

    public Biblioteca() {
        acervo = new ArrayList<>();
    }

    public Collection<Livro> getAcervo() {
        return acervo;
    }

    public void adicionaLivro(Livro l) {
        acervo.add(l);
    }

//    public void imprimeAcervo(String autor) {
//
//        List<Livro> lista = new ArrayList<>();
//        lista.addAll(acervo);
//        Collections.sort(lista);
//
//        for (Livro livro : lista) {
//            
//            if (livro.getAutor().getNome().equalsIgnoreCase(autor)) {
//                System.out.println(livro);
//            }
//        }
//    }
//    public void imprimeAcervo(String autor) {
//        List<Livro> lista = new ArrayList<>();
//        for (Livro livro : acervo) {
//            if (livro.getAutor().getNome().equalsIgnoreCase(autor)) {
//                lista.add(livro);
//            }
//        }
//        Collections.sort(lista);
//        for (Livro livro : lista) {
//            System.out.println(livro);
//        }
//    }
    
    public void imprimeAcervo(String autor) {
        SortedSet<Livro> cjto = new TreeSet<>();
        for (Livro livro : acervo) {
            if (livro.getAutor().getNome().equalsIgnoreCase(autor)) {
                cjto.add(livro);
            }
        }
        for (Livro livro : cjto) {
            System.out.println(livro);

        }
    }

    public void imprimeAcervo(int ano) {

        SortedSet<Livro> cjto = new TreeSet<>(new ComparatorByAnoAndTitle());

        for (Livro livro : acervo) {
            if (livro.getAno() >= ano) {
                cjto.add(livro);
            }
        }

        for (Livro livro : cjto) {
            System.out.println(livro);

        }
    }
}

class ComparatorByAnoAndTitle implements Comparator<Livro> {

    public int compare(Livro o1, Livro o2) {
        if (o1.getAno() == o2.getAno()) {
            return o1.getTitulo().compareToIgnoreCase(o2.getTitulo());
        } else {
            return o1.getAno() - o2.getAno();
        }
    }
}
