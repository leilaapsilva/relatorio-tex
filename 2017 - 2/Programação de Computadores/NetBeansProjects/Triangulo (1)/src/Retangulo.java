/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Retangulo extends Triangulo {
    
    protected boolean retangulo;
    
    public Retangulo(int a, int b, int c) {
        super(a, b, c);
    }
    
    
     public double getArea(int a, int b, int c){
        
        return (a * b) / 2;
    }
    
    
}
