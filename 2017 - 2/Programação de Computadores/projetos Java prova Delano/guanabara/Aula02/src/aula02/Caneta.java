package aula02;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Lobisgato
 */
public class Caneta {
    public String modelo;
    public String cor;
    private float ponta;
    protected int carga;
    protected boolean tampada;
    
     
    public  void Status(){
         System.out.println("Uma caneta " + this.cor);
         System.out.println("Ponta: " + this.ponta + "mm");
         System.out.println("Carga : " + this.carga + "%");
         System.out.println("Está tampada? " + this.tampada);
     }
     protected void Tampar(){
         if(!this.tampada)
             this.tampada = true;
     
     
     }
     protected void Destampar(){
         if(this.tampada)
             this.tampada = false;
         
     }
   public  void Rabiscar(){
     
         if(!this.tampada){
             System.out.println("Estou rabiscando");
         }
         else{
             System.out.println("Nao posso rabiscar com tampa");
         }
     }
    
    
    
}
