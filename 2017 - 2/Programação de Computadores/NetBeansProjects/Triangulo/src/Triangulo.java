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

    public Triangulo(int a, int b, int c) {
        this.a = a;
        this.b = b;
        this.c = c;
        
        if(a+b >=c || a+c >=b || b+c >=a)
            System.out.println("deu merda cara");
        
    }
    
    public double getArea(int a, int b, int c){
        
        return 0;
    }
    
}



