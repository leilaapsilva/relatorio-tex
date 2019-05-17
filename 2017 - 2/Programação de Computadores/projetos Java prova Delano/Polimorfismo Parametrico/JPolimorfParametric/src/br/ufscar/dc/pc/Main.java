package br.ufscar.dc.pc;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

public class Main {

    public static void imprime(List<Veiculo> veiculos) {
        for (Veiculo v: veiculos) {
            v.imprime();
            System.out.println();
        }
    }
    
    public static void main(String[] args) {

        List<Veiculo> veiculos = new ArrayList<>();

        Veiculo fusca = new Carro(1974, "VW", "Fusca", 1.6, 180);
        veiculos.add(fusca);

        Veiculo mobi = new Carro(2017, "Fiat", "Mobi", 1.0, 235);
        veiculos.add(mobi);

        Veiculo scania = new Caminhao(2011, "Scania", "P 340", 4.5, 2);
        veiculos.add(scania);

        System.out.println("-- Antes da Ordenação --\n");

        imprime(veiculos);
        
        System.out.println("-- Depois da Ordenação (Ano Crescente) --\n");
        
        Collections.sort(veiculos);
        
        imprime(veiculos);

        // remova o 2o elemento
        
        veiculos.remove(1);
        
        System.out.println("-- Depois da remoção do 2o Elemento --\n");
        
        imprime(veiculos);

        Veiculo hrv = new Carro(2016, "Honda", "HRV", 1.5, 437);
        veiculos.add(hrv);
        
        System.out.println("-- Depois da inserção de mais um elemento --\n");
        
        imprime(veiculos);
        
        System.out.println("-- Depois da Ordenação (Ano Decrescente) --\n");
        
        Collections.sort(veiculos, new ReverseComparator());
        
        imprime(veiculos);

    }
}

class ReverseComparator implements Comparator<Veiculo> {

    @Override
    public int compare(Veiculo o1, Veiculo o2) {
        return o2.getAno() - o1.getAno();
    }
    
}
