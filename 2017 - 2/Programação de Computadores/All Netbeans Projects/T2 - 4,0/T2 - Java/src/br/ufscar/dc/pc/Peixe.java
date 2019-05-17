package br.ufscar.dc.pc;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author bloco36
 */
public class Peixe extends AnimalDomestico {
    
    private String tipoHabitat;

    public Peixe(String tipoHabitat, String nome, double peso) {
        super(nome, peso);
        this.tipoHabitat = tipoHabitat;
    }
    // Peixe como um animal, pode ter um dono ou nao
    public Peixe(String tipoHabitat, String nome, double peso, Pessoa don) {
        super(nome, peso, don);
        this.tipoHabitat = tipoHabitat;
        don.setMyAnimal(this);
        
        
    }
    
    
    
    
    
    @Override
      public void imprime(){
        System.out.println("Nome: " + getNome());
        System.out.println("Peso: " + getPeso());
        System.out.println("Tipo de habitat: " +  this.tipoHabitat);
    
}
     
     

    public String getTipoHabitat() {
        return tipoHabitat;
    }

    public void setTipoHabitat(String tipoHabitat) {
        this.tipoHabitat = tipoHabitat;
    }
    
    
    
    
    
}
