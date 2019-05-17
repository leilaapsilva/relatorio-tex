/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Tempo {
    
     private  int hora_inicial;
     private int hora_final;
     private  int minuto_inicial;
     private  int minuto_final;
     
     private int hora = 1;
     private  int minuto = 2;
    
        
     
     
    
    public static void  main(String[] args){
        
        imprime();
        
        
    }
    
    
    
    public void Tempo(int hora1, int minuto1){ 
       
       hora = hora1; minuto = minuto1;
    
    }
    
    public  void imprime(){
        System.out.println(hora + " hora(s) e " + minuto + " minuto(s)");
        
        
        
    }
        
   /* public int CalcularHoras(int hora_inicial, int hora_final){
         int diferenca_horas = 0;
        
        
        return diferenca_horas;
        
        
        
    }
    
    public int CalcularMinutos(int minuto_inicial, int minuto_final){
        int diferenca_minutos = 0;
        
        
        return diferenca_minutos;
    }
    
    */
   
}
