/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package br.ufscar.dc.catalogo;

/**
 *
 * @author Lobisgato
 */
public class T3 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        Midia m = new Midia("Thiaguinho", 1997) {
            @Override
            int getTipo() {
                throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }

            @Override
            void imprimeDados() {
                throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        };
        m.imprimeFicha();
        
        
        CD cdzinho = new CD("Elba ramalho cd", 125, "Elba");
       
        cdzinho.adicionaFaixa("Lata dagua na cabeca", 55);
        //cdzinho.imprimeDados();
        cdzinho.adicionaFaixa("Lata dagua na cabeca2", 55);
        cdzinho.adicionaFaixa("Lata dagua na cabeca2", 55);
        cdzinho.imprimeDados();
        
        // TODO code application logic here
    }
    
}
