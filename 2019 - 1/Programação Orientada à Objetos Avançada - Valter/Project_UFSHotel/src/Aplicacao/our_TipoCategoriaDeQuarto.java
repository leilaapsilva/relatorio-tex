/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Aplicacao;

import Framework.TipoCategoriaDeQuarto;

/**
 * @author João Vitor Azevedo 743554
 * @author Sabrina Miranda 743595
 * @author Vitor Sugaya 743605
 */
public class our_TipoCategoriaDeQuarto extends TipoCategoriaDeQuarto {

    public our_TipoCategoriaDeQuarto(String categoria, int cap, float preco) {
        super(categoria, cap, preco);
    }

    @Override
    public void printCat() {
        System.out.println("Nome da categoria: " + this.getCategoria());
        System.out.println("Comporta  " + this.getCapacidade() + " pessoas");
        System.out.println("Valor Diaria: " + this.getPreco());
        System.out.println("");
    }

}
