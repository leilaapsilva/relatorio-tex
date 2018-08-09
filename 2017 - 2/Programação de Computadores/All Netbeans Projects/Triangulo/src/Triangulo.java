/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Triangulo {
    protected int a;
    protected int b;
    protected int c;
    protected boolean ok;

    public Triangulo(int a, int b, int c) {
        
        
        this.a = a;
        this.b = b;
        this.c = c;
        
        if(a+b >=c || a+c >=b || b+c >=a){
            ok = false;
            System.out.println("deumerda ");
        } 
        else{    
            ok = true;
        }
    
    
    }
        
    
    
    public double getArea(int a, int b, int c){
                
        return Math.sqrt(3);
    }
    
}



