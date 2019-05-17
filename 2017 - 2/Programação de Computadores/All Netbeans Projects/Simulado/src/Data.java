/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Data {
    private int dia;
    private String mes;
    private int ano;

    
    public void imprime(){

        System.out.println("Dia " + this.dia + " de " + this.mes + " de " + this.ano);

        
        
    }

    public Data(int dia, String mes, int ano) {
        this.dia = dia;
        this.mes = mes;
        this.ano = ano;
    }
    
    
    
    //getters
    public int getDia(){
        
        return this.dia;
    }
    public String getMes(){
        return this.mes;
    }
    public int getAno(){
        
    return this.ano;
    
    }
    
    //setters
    public void setDia(int dia){
        this.dia = dia;
    }
    public void setMes(String mes){
        this.mes  = mes;
    }
    public void setAno(int ano){
        this.ano = ano;
    }
    
}
