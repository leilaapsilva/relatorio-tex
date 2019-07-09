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
public abstract class TipoHospede {

    static AtomicInteger idAuto = new AtomicInteger();
    int idHospede;
    String cpf, nome, email;
    TipoEndereco end;
    TipoTelefone tel;

    protected TipoHospede(String cpf, String nome, String email, TipoEndereco end, TipoTelefone tel) {
        this.idHospede = TipoHospede.idAuto.incrementAndGet();
        this.cpf = cpf;
        this.email = email;
        this.end = end;
        this.tel = tel;
        this.nome = nome;

    }

    protected TipoHospede(String nome) {
        this.idHospede = TipoHospede.idAuto.incrementAndGet();
        this.cpf = "999.999.999-99";
        this.email = null;
        this.end = null;
        this.tel = null;
        this.nome = nome;

    }

    @Override
    public String toString() {
        return ("\n--Dados do Hospede--"
                + "\nNome: " + nome
                + "\nID: " + idHospede
                + "\nCPF: " + cpf + "\n");

    }

    //getters
    public int getID() {
        return this.idHospede;
    }

    public String getCPF() {
        return cpf;
    }

    public String getEmail() {
        return email;
    }

    public TipoEndereco getEndereco() {
        return end;
    }

    public TipoTelefone getTelefone() {
        return tel;
    }

    public String getNome() {
        return nome;
    }

    //setters
    public void setCPF(String cpf) {
        this.cpf = cpf;
    }

    public void setEmail(String email) {
        this.email = email;
    }

    public void setendereco(TipoEndereco end) {
        this.end = end;
    }

    public void setTelefone(TipoTelefone tel) {
        this.tel = tel;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

}
