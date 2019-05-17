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
public class Pessoa {
    
    private String nome;
    private int idade;
    private AnimalDomestico myAnimal;
    
    // Pessoa sempre tem um animal associado a ela, por isso, um unico construtor
    //( foi o que interpretei do diagrama UML ) 

    public Pessoa(String nome, int idade, AnimalDomestico anim) {
        this.nome = nome;
        this.idade = idade;
        this.myAnimal = anim;
            //animal
        anim.setDono(this);
        
        
    }
    
    public void imprime(){
        System.out.println("Nome: " + this.nome);
        System.out.println("Idade: " + this.idade);
        System.out.println("Nome do Animal: " + myAnimal.getNome());
        System.out.println("Peso do Animal: " + myAnimal.getPeso());    
        
        
    
    }
    
    
    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public AnimalDomestico getMyAnimal() {
        return myAnimal;
    }

    public void setMyAnimal(AnimalDomestico myAnimal) {
        this.myAnimal = myAnimal;
    }
    
    
    
}
