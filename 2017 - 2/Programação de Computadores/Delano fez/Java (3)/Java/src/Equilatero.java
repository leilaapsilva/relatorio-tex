
public class Equilatero extends Triangulo {

    /* Sobrecarga de construtores */
    
    public Equilatero(double l1, double l2, double l3) {
        super(l1, l2, l3);
    }

    /* Sobrecarga de construtores */
    
    public Equilatero(double[] lado) {
        super(lado);
    }

    @Override
    public double área() {
        return this.lado[0] * this.lado[0] * Math.sqrt(3) / 4;
    }
}
