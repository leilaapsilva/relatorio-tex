package br.ufscar.dc.conta;

import br.ufscar.dc.conta.Conta;
import br.ufscar.dc.especial.ContaChequeEspecial;

public class Banco {

    public static void main(String[] args) {
        Conta conta = new Conta(100);
        conta.saque(80);
        System.out.println(conta.saldo);
        conta.saque(50);
        System.out.println(conta.getSaldo());
        System.out.println("Contas criadas : " + Conta.getQuantidade());
        ContaChequeEspecial especial = new ContaChequeEspecial(100, 100);
        especial.saque(80);
        System.out.println(especial.saldo);
        especial.saque(50);
        System.out.println(especial.getSaldo());
        System.out.println("Contas criadas : " + Conta.getQuantidade());
    }
    
}
