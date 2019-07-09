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
public abstract class TipoTelefone {

    String codigoPais;
    String ddd;
    String numero;

    public TipoTelefone(String codigoPais, String ddd, String numero) {
        this.codigoPais = codigoPais;
        this.ddd = ddd;
        this.numero = numero;
    }

    @Override
    public String toString() {
        return "Fone: " + ddd + numero + "\n";
    }

    //getters 
    public String getCodigoPais() {
        return codigoPais;
    }

    public String getNumero() {
        return numero;
    }

    public String getDdd() {
        return ddd;
    }

    public String getNumComplete() {
        System.out.println("Numero completo é: (" + ddd + ") " + numero);
        return ddd + numero;

    }

    //setters
    public void setNumero(String numero) {
        this.numero = numero;
    }

    public void setDdd(String ddd) {
        this.ddd = ddd;
    }

    public void setCodigoPais(String codigoPais) {
        this.codigoPais = codigoPais;
    }

}
