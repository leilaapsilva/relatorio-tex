
public class Triangulo {

    protected double[] lado;

    /* Sobrecarga de construtores */
    
    public Triangulo(double l1, double l2, double l3) {
        this.lado = new double[3];
        this.lado[0] = l1;
        this.lado[1] = l2;
        this.lado[2] = l3;
    }
    
    /* Sobrecarga de construtores */
    
    public Triangulo(double[] lado) {
        this.lado = lado;
    }

    public double área() {
        double s = perímetro() / 2;
        return Math.sqrt(s * (s - lado[0]) * (s - lado[1]) * (s - lado[2]));
    }

    public double perímetro() {
        return lado[0] + lado[1] + lado[2];
    }
}
