package Aplicacao;

import Framework.TipoEndereco;
import Framework.TipoTelefone;
import Framework.TipoGerente;

/**
 * @author João Vitor Azevedo 743554
 * @author Sabrina Miranda 743595
 * @author Vitor Sugaya 743605
 */
public class our_Gerente extends TipoGerente {

    public our_Gerente(String setor, String turno, String cpf, String nome, String email, TipoEndereco end, TipoTelefone tel) {
        super(setor, turno, cpf, nome, email, end, tel);

    }

    public our_Gerente(String nome) {
        super(null, null, null, nome, null, null, null);
    }

    @Override
    public String toString() {
        return super.toString();
    }

}
