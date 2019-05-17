/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Equilatero extends Triangulo {
    
    protected boolean equilatero;
    public Equilatero(int a, int b, int c) {
        super(a, b, c);
    }
    
    @Override
    public double getArea(int a, int b, int c){
        if(a == b && b == c){
               return ((a*a) * (Math.sqrt(3) / 4));
            
        }
        
       
           return super.getArea(a,b,c);
        
    
    }
    
    
}
