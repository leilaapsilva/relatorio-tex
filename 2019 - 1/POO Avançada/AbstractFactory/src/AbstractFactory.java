package Application;


import Application.BirthCertificate;
import Application.MeuManipulador;

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

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        MeuManipulador meu = new MeuManipulador();
        BirthCertificate brt = new BirthCertificate();
        
   //     meu.openDocument();
        meu.closeDocument();
        
        
        
        
        
    }
    
}
