public class Main {
    
   public static void main(String[] args) {
        Triangulo[] tri = new Triangulo[2];

        tri[0] = new Triangulo(4, 4, 4);            
        tri[1] = new Equilatero(4, 4, 4);

        for(int i = 0; i < tri.length; i++) {
            System.out.println(tri[i].perímetro());
            System.out.println(tri[i].área());
        }
   }
    
}
