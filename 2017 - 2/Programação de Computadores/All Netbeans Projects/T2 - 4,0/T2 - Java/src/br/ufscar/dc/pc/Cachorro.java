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
public class Cachorro extends  AnimalDomestico {
    private String raca;

    public Cachorro(String raca, String nome, double peso) {
        super(nome, peso);
        this.raca = raca;
    }
    
    // cachorro pode t er um dono ou nao, por isso 2 construtores
    public Cachorro(String raca, String nome, double peso, Pessoa don) {
        super(nome, peso,don);
        this.raca = raca;
        don.setMyAnimal(this);
    }
    
    
    
    @Override
    public void imprime(){
        System.out.println("Nome: " + getNome());
        System.out.println("Peso: " + getPeso());
        System.out.println("Raça: " +  this.raca);
    
}

    public String getRaca() {
        return raca;
    }

    public void setRaca(String raca) {
        this.raca = raca;
    }
    
    
    
}
