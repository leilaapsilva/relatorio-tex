package cap.dc.ufscar.br;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Carro extends Veiculo{
    
    private int capacidadeMala;

    public Carro(int ano, String modelo, String marca, float motor, int capacidadeMala) {
        super(ano, modelo, marca, motor);
        this.capacidadeMala = capacidadeMala;
        
    }

    public int getCapacidadeMala() {
        return capacidadeMala;
    }

    public void setCapacidadeMala(int capacidadeMala) {
        this.capacidadeMala = capacidadeMala;
    }
    
    
    @Override
   public void imprime(){
       System.out.println("Ano : " + this.ano);
       System.out.println("Modelo: " + this.modelo);
       System.out.println("Marca: " + this.marca);
       System.out.println("Motor: " + this.motor);
       System.out.println("Capacidade do porta-malas em litros: " + this.capacidadeMala);
       
   } 

    
    @Override
    public int compareTo(Veiculo o) {
        
        if(this.ano == o.ano){        
        
            return this.marca.compareTo(o.marca);
           } 
        else {
            
       return this.ano - o.ano;
                
               
        
        }
}
    
    
    
    
    
}
