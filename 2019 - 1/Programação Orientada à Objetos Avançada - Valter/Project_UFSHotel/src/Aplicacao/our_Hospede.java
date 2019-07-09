/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Aplicacao;

/**
 * @author João Vitor Azevedo 743554
 * @author Sabrina Miranda 743595
 * @author Vitor Sugaya 743605
 */
import Framework.TipoEndereco;
import Framework.TipoTelefone;
import Framework.TipoHospede;

public class our_Hospede extends TipoHospede {

    String pais_de_origem;

    public our_Hospede(String cpf, String nome, String email, TipoEndereco end, TipoTelefone tel, String pais_de_origem) {
        super(cpf, nome, email, end, tel);
        this.pais_de_origem = pais_de_origem;
    }
    @Override
   public String toString()  {
       return super.toString() + "Pais de Origem: " + pais_de_origem +'\n';
   }
    
    public our_Hospede(String cpf, String nome, String email, TipoEndereco end, TipoTelefone tel) {
        super(cpf, nome, email, end, tel);
    }

    
}
