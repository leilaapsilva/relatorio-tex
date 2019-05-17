package br.ufscar.dc.pc;

public class Retangulo extends Triangulo {

    private boolean retangulo;

    public Retangulo(double a, double b, double c) {
        super(a, b, c);

        if (ok) {
            retangulo = (c * c == (a * a + b * b));
        }
    }

    @Override
    public double getArea() {
        System.out.println("[Triângulo Retângulo] getArea()");
        if (retangulo) {
            return a * b / 2;
        } else if (ok) {
            return super.getArea();
        } else {
            return Double.NaN;
        }
    }

}
