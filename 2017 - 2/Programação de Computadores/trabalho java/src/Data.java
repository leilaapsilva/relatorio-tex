

/**@author João Vitor Azevedo Marciano - 743554
 
 * 
 * Proposta: 
 * Defina a classe Data com os dados: dia, mês e ano. Inclua na classe um construtor capaz
de setar os atributos (dia, mês e ano) e o método void imprime() responsável pela impressão
das informações de uma data.
 */

public class Data {
    //Atribuios
    private int dia;
    private String mes;
    private int ano;
   
    // cONSTRUTOR 
    public Data(int dia, String mes, int ano){
        this.dia = dia;
        this.mes = mes;
        this.ano = ano;        
    }
   
    //Imprime todos o  atributos na tela
    public void imprime(){
        System.out.println("Dia " + this.dia + " de " + this.mes +" de " + this.ano);
        
        
    }
    
    
    
    
    // getters
    public int getDia(){
        return this.dia;
        
    }
    
     public String getMes(){
        return this.mes;
        
    }
     
      public int getAno(){
        return this.ano;
        
    }
      
      // setters
       public void setDia(int dia){
        this.dia = dia;        
    }
      
       public void setMes(String mes){
        this.mes = mes;        
    }
      
       public void setAno(int ano){
        this.ano = ano;        
    }
       
      
    
    
}
