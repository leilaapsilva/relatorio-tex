package br.ufscar.dc.pc;

public class Main {
    
    public static void main(String[] args) {
                
        ObraDeArte o1 = new Pintura("Mona Lisa", "Leonardo da Vinci", "Madeira", 
                1503, "Óleo");
        
        o1.imprime();
        
        System.out.println();
                
        ObraDeArte o2 = new Escultura("David", "Michelangelo", "Mármore", 1501,  1.99);
        
        o2.imprime();
    }
}
