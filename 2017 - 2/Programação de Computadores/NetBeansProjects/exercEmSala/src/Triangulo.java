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
    
     private double l1,l2,l3;
    
    public Triangulo(double la1, double la2, double la3){
        
        
               
    }
    public Triangulo(double[] lados){
    
       this.l1 = lados[0];
       this.l2 = lados[1];
       this.l3 = lados[2];
        
        
    }
   

    public double getL1() {
        return l1;
    }

    public double getL2() {
        return l2;
    }

    public double getL3() {
        return l3;
    }
    
   
    
    public double getSemiPerimetro(){
        double s  = (l1 + l2 + l3) /2;
        return Math.sqrt(s* (s-l1) * (s-l2) * (s-l3));
        
        
    }
    
    
     public double getArea(){
        double area = 0;
        
        
        return area;
        
    }
    
    
    
}
