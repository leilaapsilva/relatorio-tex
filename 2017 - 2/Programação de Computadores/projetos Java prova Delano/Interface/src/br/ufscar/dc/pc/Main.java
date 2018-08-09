package br.ufscar.dc.pc;

public class Main {

    public static void main(String[] args) {
        Voador v = new Passarinho();

        v.decolar();
        v.aterissar();
        
        MeioDeTransporte m = new Onibus();

        m.subir();
        m.descer();
        
        Aviao a = new Aviao();

        a.decolar();
        a.aterissar();
        a.subir();
        a.descer();
        
    }
}
