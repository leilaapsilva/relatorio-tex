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
public abstract class TipoFuncionario {

    String setor, turno, cpf, nome, email;
    int idFuncionario;
    TipoEndereco end;
    TipoTelefone tel;

    static AtomicInteger idAuto = new AtomicInteger();

    @Override
    public String toString() {
        return ("\nNome: " + nome
                + "\nSetor: " + setor
                + "\nID: " + idFuncionario
                + "\nTurno: " + turno + "\n");

    }

    protected TipoFuncionario(String setor, String turno, String cpf, String nome, String email, TipoEndereco end, TipoTelefone tel) {
        this.setor = setor;
        this.idFuncionario = TipoFuncionario.idAuto.incrementAndGet();     // dar um jeito de auto-generate
        this.turno = turno;
        this.cpf = cpf;
        this.email = email;
        this.end = end;
        this.tel = tel;
        this.nome = nome;
    }

    //getters
    public String getCPF() {
        return cpf;
    }

    public String getEmail() {
        return email;
    }

    public TipoEndereco Getendereco() {
        return end;
    }

    public TipoTelefone getTelefone() {
        return tel;
    }

    public String getNome() {
        return nome;
    }

    public int getID() {
        return idFuncionario;
    }

    public String getSetor() {
        return setor;
    }

    public String getTurno() {
        return turno;
    }

    //setters
    public void setIdFuncionario(int idFuncionario) {
        this.idFuncionario = idFuncionario;
    }

    public void setSetor(String setor) {
        this.setor = setor;
    }

    public void setTurno(String turno) {
        this.turno = turno;
    }

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
