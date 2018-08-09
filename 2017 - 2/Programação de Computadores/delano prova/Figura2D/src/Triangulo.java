
public class Triangulo implements Figura2D {

    protected double lado1, lado2, lado3;

    public Triangulo(double lado1, double lado2, double lado3) {
        this.lado1 = lado1;
        this.lado2 = lado2;
        this.lado3 = lado3;
    }

    public double getLado1() {
        return lado1;
    }

    @Override
    public double calculaÁrea() {
        double s = (lado1 + lado2 + lado3) / 2;

        return Math.sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));
    }

    @Override
    public String getTipo() {
        return "Triângulo";
    }

}
