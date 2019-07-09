package Application;


import Application.BirthCertificate;
import Application.MeuManipulador;
import Framework.Documento;
import Framework.ManipuladorDocumento;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


/**
 *
 * @author 743554
 */

public class AbstractFactory {

    
    public static void main(String[] args) {
        
      
        
        MeuManipulador meu = new MeuManipulador();
        Documento d = meu.newDocument();
        d.setNome("CertidaoNaSC");
        
        meu.addDoc(d);
        
       
   
        meu.openDocument(0);
        meu.saveDocument(0);       
        meu.closeDocument(0);
        
        
        
        
        
        
        
        
   //     meu.openDocument();
        
        
        
        
        
    }
    
}
