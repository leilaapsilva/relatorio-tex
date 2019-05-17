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
public abstract class Veiculo implements Comparable<Veiculo>{
    
    protected int ano;
    protected String modelo;
    protected String marca;
    protected float motor;

    
    public Veiculo(int ano, String modelo, String marca, float motor) {
        this.ano = ano;
        this.modelo = modelo;
        this.marca = marca;
        this.motor = motor;
    }
    
    
    
    
    
    
   public abstract void imprime();
   
   
   
   
   

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public void setMotor(float motor) {
        this.motor = motor;
    }
   
   
   
   
           
           
           
           

    public int getAno() {
        return ano;
    }

    public String getModelo() {
        return modelo;
    }

    public float getMotor() {
        return motor;
    }

    public String getMarca() {
        return marca;
    }
    

    
    
    
    
}

