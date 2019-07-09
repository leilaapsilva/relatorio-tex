/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Framework;

import java.util.concurrent.atomic.AtomicInteger;

/**
 * @author João Vitor Azevedo 743554
 * @author Sabrina Miranda 743595
 * @author Vitor Sugaya 743605
 */
public abstract class TipoQuarto {

    int idQuarto;
    int andar;
    public TipoCategoriaDeQuarto tipo;
    public TipoStatusQuarto status;
    static AtomicInteger idGen = new AtomicInteger();

//Construtores
    public TipoQuarto(int andar, TipoCategoriaDeQuarto tipo) {
        this.idQuarto = TipoQuarto.idGen.incrementAndGet();
        this.andar = andar;
        this.tipo = tipo;

    }

    @Override
    public String toString() {
        return ("\nID: " + idQuarto
                + "\nAndar: " + andar
                + "\n");

    }

    //getters
    public int getAndar() {
        return andar;
    }

    public int getIdQuarto() {
        return idQuarto;
    }

    public TipoStatusQuarto getWholeStatus() {
        return status;
    }

    public boolean getStatusLimpeza() {
        return status.isLimpavel();
    }

    public boolean getStatusDisponibilidade() {
        return status.isVago();
    }

    public TipoCategoriaDeQuarto getTipo() {
        return tipo;
    }

    //setters
    public void setTipo(TipoCategoriaDeQuarto tipo) {
        this.tipo = tipo;
    }

    public void setIdQuarto(int idQuarto) {
        this.idQuarto = idQuarto;
    }

    public void setAndar(int andar) {
        this.andar = andar;
    }

    public void setStatuslimpeza(boolean bol) {
        this.status.limpeza = bol;
    }

    public void setStatusDisponibilidade(boolean bol) {
        this.status.disponibilidade = bol;
    }

}
