package br.ufscar.dc;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Main {

    static public void main(String[] args) {

        List<Carro> frota = new ArrayList<>();

        
        Carro c1 = new Carro("Fiat", "Uno", "Verde", 2014);
        
        Carro c2 = new Carro("VW", "Gol", "Branca", 2010);
        
        Carro c3 = new Carro("Honda", "Fit", "Preta", 2017);
        
        frota.add(c1);
        frota.add(c2);
        frota.add(c3);
        
        for (Carro c:frota) {
            System.out.println(c);
        }
        
        Collections.sort(frota);
        
        System.out.println("--------------------------------------");
        
        for (Carro c:frota) {
            System.out.println(c);
        }
        
        Collections.sort(frota, new CarroComparator());
        
        System.out.println("--------------------------------------");
        
        for (Carro c:frota) {
            System.out.println(c);
        }
        
    }
}
