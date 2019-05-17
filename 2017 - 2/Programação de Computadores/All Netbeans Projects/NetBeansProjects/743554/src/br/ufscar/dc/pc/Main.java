/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package br.ufscar.dc.pc;

/**
 *
 * @author 743554
 */
public class Main {
    
    public static void main(String args[]){
        
        Data data1 = new Data(6,8,1996);
        data1.imprime();
        //data1.setDia(12);
        data1.imprime();
        
        Data daTA2 = new Data(12,8,1996);
        System.out.println("Data 1 é maior(veio antes)  que data2? : " + data1.maior(daTA2));
        data1.setAno(2099);
        System.out.println("Data 1 é maior(veio antes)  que data2? : " + data1.maior(daTA2));
        data1.setAno(1996);
        data1.setMes(8);
        data1.setDia(11);
        System.out.println("Data 1 é maior(veio antes)  que data2? : " + data1.maior(daTA2));
        
        Endereco end = new Endereco("Rodovia WaSHINGTON luis KM 235", 0, "13565-905");
        end.imprime();
        
        Pessoa jose = new Pessoa("Jose", 6,12,1991, "Rua tralala", 222, "aqui vai um cep");
        jose.imprime();
        
        Universidade ufscar = new Universidade("UFSCar","Rodovia WaSHINGTON luis KM 235", 0, "13565-905");
        ufscar.imprime();
        
        Professor delano = new Professor("Delano", 1,1,1974, "Sua rua,", 1500, "Seu cep",  999999.90f, ufscar);
        delano.imprime();
        
        Coordenador valter = new Coordenador("Valter", 1,1,1974, "Sua rua valter",1500, "Seu cep",  9992.90f, ufscar, "BCC");
        valter.imprime();
        
        
        


        
         
        
        
        
        
    }
    
}
