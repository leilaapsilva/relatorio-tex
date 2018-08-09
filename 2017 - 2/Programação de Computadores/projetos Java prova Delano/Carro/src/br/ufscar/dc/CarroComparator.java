package br.ufscar.dc;

import java.util.Comparator;

public class CarroComparator implements Comparator<Carro> {

    public int compare(Carro o1, Carro o2) {
        return o1.getNome().compareTo(o2.getNome());
    }
    
}