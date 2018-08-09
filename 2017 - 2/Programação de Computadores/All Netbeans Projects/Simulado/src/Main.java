/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Main {
    
    public static void main(String args[]){
        
        
        Data dataTeste = new Data(1,"agosto", 1996);
        Pessoa pessoaTeste = new Pessoa("joao",6,"abril", 1954, "Rua tra lala nro 25");
        Aluno Juliete = new Aluno("juliete",8,"abril", 1954, "Rua tda mae da juliete, nr0 888", 8.0, "5B");
        
        dataTeste.imprime();
        dataTeste.setAno(1991);
        dataTeste.imprime();
        
        pessoaTeste.imprime();
        pessoaTeste.setNome("Rosicleison");
        pessoaTeste.imprime();
        
        Juliete.imprime();
        Juliete.setNome("uhauehaehae");
        Juliete.imprime();
        

      
        

                

        
        
        
        
        
        
    }
}
