package br.ufscar.dc.catalogo;

public class Main {

    private static void realizaTestes() {

        CD cd1, cd2;
        DVD dvd1, dvd2;
        Jogo jogo1, jogo2;

        cd1 = new CD("X & Y", 2005, "Cold Play");
        cd1.adicionaFaixa("Square One", 287); // 4:47
        cd1.adicionaFaixa("What If", 297); // 4:57
        cd1.adicionaFaixa("White Shadows", 328); // 5:28
        cd1.adicionaFaixa("Fix You", 294); // 4:54
        cd1.adicionaFaixa("Talk", 311); // 5:11
        cd1.adicionaFaixa("X&Y", 274); // 4:34

        dvd1 = new DVD("O Senhor dos Anéis - A Sociedade dos Anel", 2001,
                "Peter Jacson");
        dvd1.adicionaArtista("Elijah Wood", "Frodo Baggins");
        dvd1.adicionaArtista("Viggo Mortensen", "Aragorn");
        dvd1.adicionaArtista("Orlando Bloom", "Legolas Greenleaf");
        dvd1.adicionaArtista("Christopher Lee", "Saruman");
        dvd1.adicionaArtista("Ian McKellen", "Gandalf");

        jogo1 = new Jogo("Need For Speed - Underground II", 2005, "Corrida");

        cd2 = new CD("Bachianas Brasileiras No.2", 2004,
                "Orquestra de Câmara da Universidade de São Paulo");
        cd2.adicionaFaixa("(Prelúdio) O Canto do Capadócio", 512); // 4:32
        cd2.adicionaFaixa("(Ária) O Canto da Nossa Terra", 389); // 6:29
        cd2.adicionaFaixa("(Dança) Lembranca do Sertão", 324); // 5:24
        cd2.adicionaFaixa("(Tocata) O Trenzinho do Caipira", 284); // 4:44

        dvd2 = new DVD("Matrix", 1999, "Andy & Larry Wachoski");
        dvd2.adicionaArtista("Keanu Reeves", "Neo");
        dvd2.adicionaArtista("Laurence Fishburne", "Morpheus");
        dvd2.adicionaArtista("Carrie-Anne Moss", "Trinity");
        dvd2.adicionaArtista("Hugo Weaving", "Agente Smith");
        dvd2.adicionaArtista("Gloria Foster", "Óraculo");

        jogo2 = new Jogo("Fifa 2008", 2008, "Esporte");

        // Criar uma classe cadastro e tenta buscar uma midia na lista vazia
        Catalogo catalogo = new Catalogo();

        assert (catalogo.obtemMidia("Senhor dos Aneis") == null);

        // adiciona 6 midias
        catalogo.adicionaMidia(cd1);
        catalogo.adicionaMidia(dvd1);
        catalogo.adicionaMidia(jogo1);
        catalogo.adicionaMidia(cd2);
        catalogo.adicionaMidia(dvd2);
        catalogo.adicionaMidia(jogo2);

        catalogo.imprimeColecao();
        System.out.println("-------------------------------------\n");
        catalogo.imprimeColecaoPorTipo(1);

        System.out.println("-------------------------------------\n");
        catalogo.imprimeColecaoPorTipo(2);
        System.out.println("-------------------------------------\n");
        catalogo.imprimeColecaoPorTipo(3);
        System.out.println("-------------------------------------\n");

        assert (jogo2.equals(catalogo.obtemMidia("Fifa 2008")));
        assert (dvd2.equals(catalogo.obtemMidia("Matrix")));
        assert (cd1.equals(catalogo.obtemMidia("X & Y")));
        assert (jogo1.equals(catalogo.obtemMidia("Need For Speed - Underground II")));
        assert (dvd1.equals(catalogo.obtemMidia("O Senhor dos Anéis - A Sociedade dos Anel")));
        assert (cd2.equals(catalogo.obtemMidia("Bachianas Brasileiras No.2")));

        // Verificando lista (todos)
        assert (catalogo.quantidadeDeMidias() == 6);

        // Verificando lista (seleciona pelo tipo - CD de música - implementada
        // pela classe CD)
        assert (catalogo.quantidadeDeCDs() == 2);

        // Verificando lista (seleciona pelo tipo - DVD de filme - implementada
        // pela classe DVD)
        assert (catalogo.quantidadeDeDVDs() == 2);

        // Verificando lista (seleciona pelo tipo - Jogo Eletrônico -
        // implementada pela classe Jogo)
        assert (catalogo.quantidadeDeJogos() == 2);

        catalogo.removeMidia(cd2);

        // Verificando lista (seleciona pelo tipo - CD de música - implementada
        // pela classe CD)
        assert (catalogo.quantidadeDeCDs() == 1);

        catalogo.removeMidia(dvd2);

        // Verificando lista (seleciona pelo tipo - DVD de filme - implementada
        // pela classe DVD)
        assert (catalogo.quantidadeDeDVDs() == 1);

        catalogo.removeMidia(jogo2);

        // Verificando lista (seleciona pelo tipo - Jogo Eletrônico -
        // implementada pela classe Jogo)
        assert (catalogo.quantidadeDeJogos() == 1);

        System.out.println("Testes executados com sucesso !!");
    }

    public static void main(String[] args) {
        try {
            realizaTestes();
        } catch (AssertionError e) {
            System.out.println("Erros durante os testes !!");
        }
    }
}
