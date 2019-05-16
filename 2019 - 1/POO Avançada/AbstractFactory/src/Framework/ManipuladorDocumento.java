package Framework;

import java.util.ArrayList;
import java.util.List;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 *
 * @author 743554
 */

public abstract class ManipuladorDocumento {
    
    
    List<Documento> lista;
    
public void addDoc(Documento d){
    
    this.lista.add(d);
}
    
    
    public ManipuladorDocumento() {
        
        this.lista = new ArrayList<Documento>();
        
        
    }
    
        
    
    public void openDocument(int index){
        
         this.lista.get(index).open();

    }

    public void closeDocument(int index){
         this.lista.get(index).close();

    }
    
    public void saveDocument(int index){
    
        this.lista.get(index).save();
    }
    
   public Documento newDocument(){
        return createDocument();
   
   }
   
   public abstract Documento createDocument();
    
    

    
    
    
    
    
    
}

