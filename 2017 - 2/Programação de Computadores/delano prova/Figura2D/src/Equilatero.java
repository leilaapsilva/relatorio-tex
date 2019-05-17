
public class Equilatero extends Triangulo {

    public Equilatero(double lado) {
        super(lado, lado, lado);
    }

    public double calculaÁrea() {
        return (lado1 * lado1 * Math.sqrt(3)) / 4;
    }

    public String getTipo() {
        return "Triângulo Equilátero";
    }

}
