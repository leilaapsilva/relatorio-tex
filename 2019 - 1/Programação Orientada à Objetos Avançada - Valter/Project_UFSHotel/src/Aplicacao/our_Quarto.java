/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Aplicacao;

import Framework.TipoQuarto;

/**
 * @author João Vitor Azevedo 743554
 * @author Sabrina Miranda 743595
 * @author Vitor Sugaya 743605
 */
public class our_Quarto extends TipoQuarto {

    public our_Quarto(int andar, our_TipoCategoriaDeQuarto tipo) {
        super(andar, tipo);
        this.status = new our_Status(true, true);

    }

    void printData() {
        System.out.println("Imprimindo dados de " + this.toString());
        System.out.println("ID: " + this.getIdQuarto());
        System.out.println("Andar: " + this.getAndar());
        System.out.println("------CategoriaDoQuarto----- ");
        this.getTipo().printCat();
        System.out.println("");
    }

    public our_Status getStatus() {
        return (our_Status) this.getWholeStatus();
    }

    public void setLimpeza(boolean status) {
        this.setStatuslimpeza(status);
    }

    public void setDisponibilidade(boolean disponibilidade) {
        this.setStatusDisponibilidade(disponibilidade);
    }

}
