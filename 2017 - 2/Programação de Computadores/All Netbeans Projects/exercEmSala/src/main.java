/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */

public class main{
    
public static void main(String[] args) {
    
    
    Triangulo t = new Triangulo(3,4,5);
    
    System.out.println(t.getArea());
    double[] lados = new double[3];
    lados[0] = 3;
    lados[1] = 4;
    lados[2] = 5;
    Triangulo t2 = new Triangulo(lados);
    
    System.out.println(t2.getArea());
    
    
    
}



}