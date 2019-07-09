/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Application;

import Framework.Documento;
import Framework.ManipuladorDocumento;



/**
 *
 * @author 743554
 */
public class MeuManipulador extends ManipuladorDocumento {

    public MeuManipulador() {
        
        
    

    }
    
    
    @Override
    public Documento createDocument(){
        
        return new BirthCertificate();
           
           
       }
    

    @Override
    public void closeDocument(int index) {
        super.closeDocument(index); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void openDocument(int index) {
        super.openDocument(index); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public String toString() {
        return super.toString(); //To change body of generated methods, choose Tools | Templates.
    }

    @Override
    public void saveDocument(int index) {
        super.saveDocument(index); //To change body of generated methods, choose Tools | Templates.
    }
    
    @Override
       public Documento newDocument(){
      return super.newDocument();
       
       }
       
       
       public void addDoc(Documento d){
           super.addDoc(d);
       }

    
    
    
    
    
    
   
    
// override create document, método que da new no birth certificate
    
  
    
}
