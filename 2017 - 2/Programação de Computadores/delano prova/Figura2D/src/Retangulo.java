public class Retangulo implements Figura2D{

    private double lado1, lado2;

    public Retangulo(double lado1, double lado2) {
        this.lado1 = lado1;
        this.lado2 = lado2;
    }
    
    @Override
    public double calculaÁrea() {
        return lado1 * lado2;
    }

    @Override
    public String getTipo() {
        return "Retângulo";
    }
}
