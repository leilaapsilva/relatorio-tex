package br.ufscar.dc.pc;

public class Main {

    public static void main(String[] args) {

        Triangulo t1 = new Triangulo(5, 4, 3);
        
        System.out.println(t1.getArea());

        Triangulo t2 = new Equilatero(3, 3, 3);
        
        System.out.println(t2.getArea());

        Triangulo t3 = new Retangulo(3, 4, 5);
        
        System.out.println(t3.getArea());
    }

}
