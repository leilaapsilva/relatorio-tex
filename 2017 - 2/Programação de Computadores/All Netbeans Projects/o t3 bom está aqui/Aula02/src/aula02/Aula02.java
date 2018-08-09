/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula02;

/**
 *
 * @author Lobisgato
 */
public class Aula02 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Caneta c1 = new Caneta();
        c1.modelo = "Bic Amorzinho";
        c1.cor = "Vermelha";
        c1.ponta = 0.5f;
        c1.tampada = true;
        c1.carga = 75;
        
        c1.Status();
        c1.Rabiscar();
        c1.Destampar();
        
        c1.Status();        
        c1.Rabiscar();
        c1.Tampar();
        c1.Status(); 
        c1.Rabiscar();
    }
    
}
