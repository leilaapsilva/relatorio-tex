/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Framework;

/**
 * @author João Vitor Azevedo 743554
 * @author Sabrina Miranda 743595
 * @author Vitor Sugaya 743605
 */
public abstract class TipoPagamento {

    float valor;
    String ModalidadePagamento;
    int qtdParcelas;
    boolean statusPagamento;

    public TipoPagamento(String ModalidadePagamento, int qtdParcelas, boolean statusPagamento) {
        this.ModalidadePagamento = ModalidadePagamento;
        this.qtdParcelas = qtdParcelas;
        this.statusPagamento = statusPagamento;
    }

    //getters
    public String getModalidadePagamento() {
        return ModalidadePagamento;
    }

    public int getQtdParcelas() {
        return qtdParcelas;
    }

    public float getValor() {
        return valor;
    }

    //setters
    public void setModalidadePagamento(String ModalidadePagamento) {
        this.ModalidadePagamento = ModalidadePagamento;
    }

    public void setQtdParcelas(int qtdParcelas) {
        this.qtdParcelas = qtdParcelas;
    }

    public void setStatusPagamento(boolean status) {
        this.statusPagamento = status;
    }

    public void setValor(float valor) {
        this.valor = valor;
    }

    public void receberPagamento(float valor) {
        if (valor == this.valor) {
            this.statusPagamento = true;
            this.valor = 0;
            System.out.println("Pagamento efetuado com sucesso");
        } else {
            this.valor -= valor;
            System.out.println("Ainda faltam pagar R$" + this.valor + " reais");
        }
    }

    public void incrementarPagamento(float valor) {
        if (this.statusPagamento == true) {
            this.statusPagamento = false;
        }
        this.valor += valor;

        System.out.println("\nValor após incremento: " + this.valor);
    }

    public boolean addDesconto(float percentDisc) {
        float Desconto;

        System.out.println("Valor Anterior: " + this.valor);

        Desconto = this.valor * (1 - (percentDisc / 100));
        this.valor = this.valor - Desconto;

        System.out.println("\nValor com Desconto: " + this.valor);

        return true;
    }

}
