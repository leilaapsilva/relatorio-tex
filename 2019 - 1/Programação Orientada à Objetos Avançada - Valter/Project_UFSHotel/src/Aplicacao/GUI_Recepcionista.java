package Aplicacao;

import Banco.SimulaBD;
import Banco.iBancoRecepcionista;
import java.util.Date;
import java.util.List;

/**
 *
 * @author 743554
 */
public class GUI_Recepcionista {

    public static void main(String args[]) {
        iBancoRecepcionista mRecepcionista = SimulaBD.getInstanceBD();

        //Cadastrar hospede   
        our_Endereco end1 = new our_Endereco("13.677-201", "34", "Capitolio", "Veneza", "SP");
        our_Telefone fone1 = new our_Telefone("+55", "16", "2345-9876");
        our_Hospede mohammed = new our_Hospede("356.545.677-00", "Mohammed Salim", "Mohammed@gmail.com", end1, fone1, "Sri Lanka");
        mRecepcionista.addHospede(mohammed);

        our_Endereco end2 = new our_Endereco("13.455-200", "36", "Capivara", "Limeira", "GO");
        our_Telefone fone2 = new our_Telefone("+55", "11", "9999-9876");
        our_Hospede vitor = new our_Hospede("345.345.233-00", "Vitor Sugaya", "Vitor@gmail.com", end2, fone2, "Brasil");
        mRecepcionista.addHospede(vitor);

        System.out.println("\n");

        //Lista todos os hospedes cadastrados fazendo uso da sobrescrita de método (há atributos a mais na classe filha)
        System.out.println("~~Listando todos os hospedes~~");
        mRecepcionista.listarHospedes();

        
        System.out.println("\n");

        System.out.println("~~Buscando Hospede de ID 1~~");
        //Retorna o nome do Hospede a partir do id
        System.out.println(mRecepcionista.getNomeHospede(1));
        System.out.println("\n");

        //Construindo uma reserva
        our_Quarto quartoDisp = (our_Quarto) mRecepcionista.getQuartoDisp();
        Date dataIn = new Date(2019, 0, 21);
        our_Pagamento pagamento = new our_Pagamento("Crédito", 3, false);

        our_Reserva Reserva1 = new our_Reserva(dataIn, 2, vitor, quartoDisp, pagamento);

        mRecepcionista.addReserva(Reserva1);
        System.out.println("\n");

        System.out.println("~~Listando todas as reservas~~");
        mRecepcionista.listarReservas();
        System.out.println("\n");

        System.out.println("~~Realizando pagamento de Reserva1~~");
        System.out.println("Valor a pagar: R$" + Reserva1.getPrecoTotal());
        Reserva1.getPag().receberPagamento(100);

    }

}
