package br.ufscar.dc.pc;

public class Main {

    public static void main(String[] args) {
        Pessoa p1 = new Pessoa("Fulano", "Rua Italia, 100");
        
        p1.imprime();
        
        
        Pessoa p2 = new Fisica("355.879.943-76", "Sincrano", "Rua Japão, 200");
        
        p2.imprime();
        
        Pessoa p3 = new Juridica("67.963.858/0001-22", "Lojas Americanas", 
                "R. Carlos Botelho, 1000");
        
        p3.imprime();
        
        Carro fusca = new Carro("VW", "Fusca", "Azul", 1969, p2);
        
        fusca.imprime();
    }
    
}
