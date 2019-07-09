/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Aplicacao;

import java.util.Date;

//import Framework.Data;
import Framework.TipoHospede;
import Framework.TipoPagamento;
import Framework.TipoQuarto;
import Framework.TipoReserva;

/**
 * @author João Vitor Azevedo 743554
 * @author Sabrina Miranda 743595
 * @author Vitor Sugaya 743605
 */
public class our_Reserva extends TipoReserva {

    public our_Reserva(Date dataIn, Date dataOut, TipoHospede cli, TipoQuarto quarto, TipoPagamento pag) {
        super(dataIn, dataOut, cli, quarto, pag);
    }

    public our_Reserva(Date dataIn, int dias, TipoHospede cli, TipoQuarto quarto, TipoPagamento pag) {
        super(dataIn, dias, cli, quarto, pag);
    }

    @Override
    public String toString() {
        return super.toString();
    }

}
