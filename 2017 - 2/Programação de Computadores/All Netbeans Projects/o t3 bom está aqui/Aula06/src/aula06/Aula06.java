/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula06;

/**
 *
 * @author Lobisgato
 */
public class Aula06 {

    
    public static void main(String[] args) {
        ControleRemoto c = new ControleRemoto();
        c.ligar();
        c.maisVolume();
        //c.ligarMudo();
        c.abrirMenu();
        c.fecharMenu();
    }
    
}
