
import java.util.ArrayList;
import java.util.List;


public class Main {

    public static void main(String[] args) {
        
        List<Figura2D> figuras = new ArrayList<>();
        
        figuras.add(new Retangulo(3,4));
        figuras.add(new Quadrado(4));
        figuras.add(new Triangulo(3,4,5));
        figuras.add(new Equilatero(3));
        
        for (Figura2D f: figuras) {
            System.out.println(f.getTipo() + " --- " + f.calculaÁrea());
        }
    }
}
