package Aplicacao;

import Framework.TipoEndereco;
import Framework.TipoTelefone;
import Framework.TipoRecepcionista;

/**
 * @author João Vitor Azevedo 743554
 * @author Sabrina Miranda 743595
 * @author Vitor Sugaya 743605
 */
public class our_Recepcionista extends TipoRecepcionista {

    String periodo;

    public our_Recepcionista(int ramal, String setor, String turno, String cpf, String nome, String email, TipoEndereco end, TipoTelefone tel, String periodo) {
        super(ramal, setor, turno, cpf, nome, email, end, tel);
        this.periodo = periodo;
    }

    public our_Recepcionista(String nome) {
        super(0, null, null, null, nome, null, null, null);
    }

    public String getPeriodo() {
        return periodo;
    }

    public void setPeriodo(String periodo) {
        this.periodo = periodo;
    }

}
