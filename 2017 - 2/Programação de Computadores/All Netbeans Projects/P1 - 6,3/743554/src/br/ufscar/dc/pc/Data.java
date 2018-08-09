/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package br.ufscar.dc.pc;

/**
 *
 * @author 743554
 */
public class Data {
    
    
   protected int dia;
   protected int mes;
   protected int ano;

   //Construtor
    public Data(int dia, int mes, int ano) {
        this.dia = dia;
        this.mes = mes;
        this.ano = ano;
    }
    
    public boolean maior(Data outra){
        // Entendida aqui como maior data, a que veio ANTES, em que é maior o tempo que já se passou desde a data
        // retorna TRUE se a data que chamou o metodo for maior ( tiver ocorrido antes) que a data passada como parametro
        
        Data maior;
        
        if(this.ano < outra.ano){           
    
            return true;
        }
        else if(this.ano == outra.ano && this.mes < outra.mes)
            return true;
        else if(this.ano == outra.ano && this.mes == outra.mes && this.dia < outra.dia)
            return true;
        else{
            return false;
        }       
    }
   
   
   public void imprime(){
       
       System.out.println("Data: " + this.dia +"/" + this.mes + "/" + this.ano);
                   
   }
   
   //Bonus
        //Getters

    public int getDia() {
        return dia;
    }

    public int getMes() {
        return mes;
    }

    public int getAno() {
        return ano;
    }
        //Setters

    public void setDia(int dia) {
        this.dia = dia;
    }

    public void setMes(int mes) {
        this.mes = mes;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }
    
    
    
}
