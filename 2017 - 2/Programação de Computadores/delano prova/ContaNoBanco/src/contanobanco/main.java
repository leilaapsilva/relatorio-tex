package contanobanco;

import java.util.HashSet;



/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Lobisgato
 */
public class main {
    
    public static void main(String[] args){
        ContaBanco p1 = new ContaBanco();
        p1.setNumConta(1111);
        p1.setDono("Jubileu");
        p1.abrirConta("CC");
        
        ContaBanco p2 = new ContaBanco();
        p2.setNumConta(2222);
        p2.setDono("Creusa");
        p2.abrirConta("CP");
        
        p1.depositar(100.0f);
        p2.depositar(500.0f);
        
        p2.sacar(100.0f);
        p1.sacar(150.0f);
        p1.fecharConta();
        p1.estadoAtual();
        p2.estadoAtual();
        
    }
    
}
