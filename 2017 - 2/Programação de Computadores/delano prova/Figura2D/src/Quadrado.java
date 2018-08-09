public class Quadrado extends Retangulo {

    public Quadrado(double lado) {
        super(lado, lado);
    }

    @Override
    public String getTipo() {
        return "Quadrado";
    }
}
