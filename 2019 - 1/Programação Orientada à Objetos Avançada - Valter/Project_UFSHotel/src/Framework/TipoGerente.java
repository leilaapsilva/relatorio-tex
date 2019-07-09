/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Framework;

import Banco.SimulaBD;
import Banco.iBancoGerente;

/**
 * @author João Vitor Azevedo 743554
 * @author Sabrina Miranda 743595
 * @author Vitor Sugaya 743605
 */
public abstract class TipoGerente extends TipoFuncionario {

    protected TipoGerente(String setor, String turno, String cpf, String nome, String email, TipoEndereco end, TipoTelefone tel) {
        super(setor, turno, cpf, nome, email, end, tel);
    }

    @Override
    public String toString() {
        return "\n--Dados do Gerente--" + super.toString();
    }

    //Métodos úteis
    public void cadastrarGerente() {
        iBancoGerente BG = SimulaBD.getInstanceBD();

        if (BG.addGerente(this)) {
            System.out.println("Cadastrado o gerente");
        }

    }

}
