/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Framework;

/**
 * @author João Vitor Azevedo 743554
 * @author Sabrina Miranda 743595
 * @author Vitor Sugaya 743605
 */
public abstract class TipoCategoriaDeQuarto {

    String categoria;
    int capacidade;
    float preco;

    public TipoCategoriaDeQuarto(String categoria, int capacidade, float preco) {
        this.categoria = categoria;
        this.capacidade = capacidade;
        this.preco = preco;
    }

    //getters
    public int getCapacidade() {
        return capacidade;
    }

    public String getCategoria() {
        return categoria;
    }

    public float getPreco() {
        return preco;
    }

    //setters
    public void setCapacidade(int capacidade) {
        this.capacidade = capacidade;
    }

    public void setCategoria(String categoria) {
        this.categoria = categoria;
    }

    public void setPreco(float preco) {
        this.preco = preco;
    }

    public abstract void printCat();

}
