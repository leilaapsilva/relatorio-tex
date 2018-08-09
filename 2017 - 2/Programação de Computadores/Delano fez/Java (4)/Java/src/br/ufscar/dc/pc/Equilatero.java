package br.ufscar.dc.pc;

public class Equilatero extends Triangulo {

    private boolean equilatero;
    
    public Equilatero(double a, double b, double c) {
        super(a, b, c);

        if (ok) {
            equilatero = (a == b) && (a == c);
        }
    }

    @Override
    public double getArea() {
        System.out.println("[Equilátero] getArea()");
        if (equilatero) {
            return a * a * Math.sqrt(3) / 4;
        } else if (ok) {
            return super.getArea();
        } else {
            return Double.NaN;
        }
    }

}
