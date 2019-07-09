package Framework;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 *
 * @author 743554
 */

public abstract class  Documento {
    
    private String nome;
 
    
    
    public Documento() {
                
    }
    
       
    
    
    public Documento(String nome) {
        
        this.nome = nome;
    }

   

    
    
    
    
    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNome() {
        return nome;
    }
    
    
    
    
    
    
    
    public void open(){
    
        System.out.println("Opening Document..." + this.getNome() );
    
    }
    
    
    public void close(){
        
        System.out.println("Closing Document..." + this.getNome());
    
    
    }
    
      public void save(){
    
          System.out.println("Saving Document..." + this.getNome());
    }
    
    
    
    
}
