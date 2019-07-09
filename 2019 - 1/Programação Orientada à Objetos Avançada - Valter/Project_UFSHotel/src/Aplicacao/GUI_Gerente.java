package Aplicacao;

import Banco.SimulaBD;
import Banco.iBancoGerente;

public class GUI_Gerente {

    public static void main(String args[]) {
        iBancoGerente BGerente = SimulaBD.getInstanceBD();

        //Cadastrando uma nova Recepcionista - entrando com os dados
        our_Endereco end = new our_Endereco("13.235-089", "34", "Casa Branca", "Porto Velho", "MA");
        our_Telefone tel = new our_Telefone("+55", "14", "998987677");
        our_Recepcionista Marilda = new our_Recepcionista(23, "Recepção", "noturno", "345.543.345-55", "Marilda Garcia", "Marilda@gmail.com", end, tel, "semestre");

        BGerente.addRecepcionista(Marilda);
        

        System.out.println("\n");

        //Listando todos os funcionários
        System.out.println("~~~listando funcionarios~~~");
        BGerente.listarFuncionarios();
        System.out.println("\n");

        //Buscando Funcionario pelo ID
        System.out.println("~~~Buscando Funcionario de ID 3 ~~~");
        System.out.println(BGerente.getNomeRecepcionista(1));

    }
}
