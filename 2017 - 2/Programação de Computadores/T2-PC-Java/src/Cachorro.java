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
    
    
    
    @Override
    public void imprime(){
        System.out.println("Nome: " + getNome());
        System.out.println("Peso: " + getPeso());
        System.out.println("Raça: " +  this.raca);
    
}
    
}
