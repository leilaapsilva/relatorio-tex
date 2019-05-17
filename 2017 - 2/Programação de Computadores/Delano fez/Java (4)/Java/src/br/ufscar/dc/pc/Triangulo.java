package br.ufscar.dc.pc;

import java.util.Arrays;

public class Triangulo {

    protected final double a, b, c;
    protected final boolean ok;

    public Triangulo(double a, double b, double c) {
        double[] lados = new double[]{a, b, c};
        Arrays.sort(lados);
        this.a = lados[0];
        this.b = lados[1];
        this.c = lados[2];
        ok = ((a < b + c) && (b < a + c) && (c < a + b));
    }

    public double getArea() {
        System.out.println("[Triângulo] getArea()");
        if (ok) {
            double s = (a + b + c) / 2;
            return Math.sqrt(s * (s - a) * (s - b) * (s - c));
        } else {
            return Double.NaN;
        }
    }
    
    @Override
    public String toString() {
        return "(" + a + ", " + b + ", " + c + ")";
    }

}
