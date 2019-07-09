/**
 * @author João Vitor Azevedo 743554
 * @author Sabrina Miranda 743595
 * @author Vitor Sugaya 743605
 */
package Framework;

import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.Date;
import java.util.HashMap;
import java.util.Map;
import java.util.Map.Entry;

public abstract class TipoReserva {

    static AtomicInteger idGen = new AtomicInteger();
    Date dataIn;
    Date dataOut;
    int idReserva;
    TipoHospede hospedeReserva;
    TipoQuarto quarto;
    TipoPagamento pagamento;
    Float preco;
    Map<String, Float> consumidos;
    ArrayList<TipoServicos> servicos = new ArrayList<>(); // lista de serviços pertencentes a reserva

    public TipoReserva(Date dataIn, Date dataOut, TipoHospede Hospede, TipoQuarto quarto, TipoPagamento pag) {
        this.consumidos = new HashMap<>();
        this.dataIn = dataIn;
        this.dataOut = dataOut;
        this.idReserva = TipoReserva.idGen.incrementAndGet();
        this.hospedeReserva = Hospede;
        this.quarto = quarto;
        this.pagamento = pag;
        this.preco = CalcularPreco();

    }

    public TipoReserva(Date dataIn, int dias, TipoHospede Hospede, TipoQuarto quarto, TipoPagamento pag) {
        this.consumidos = new HashMap<>();
        this.dataIn = dataIn;
        this.dataOut = incrementDays(dataIn, dias);
        this.idReserva = idGen.incrementAndGet();
        this.hospedeReserva = Hospede;
        this.quarto = quarto;
        this.pagamento = pag;
        this.preco = CalcularPreco();

    }

    private Date incrementDays(Date dataIn, int dias) {
        int a_day = 86400000;
        Date new_dt = new Date(dataIn.getTime() + dias * a_day);
        return new_dt;
    }

    @Override
    public String toString() {
        return "Cliente: " + hospedeReserva.getNome()
                + "\nID Quarto: " + this.quarto.getIdQuarto() + "\n"
                + "Data Entrada: " + dataIn + "\n"
                + "Data Saida: " + dataOut + "\n"
                + "Preco Atual da reserva: " + getPrecoTotal() + "\n";
    }

    //getters
    public Map getConsumido() {
        return consumidos;
    }

    public float getPrecoTotal() {
        return preco;
    }

    public TipoPagamento getPag() {
        return pagamento;
    }

    public Date getDataIn() {
        return dataIn;
    }

    public TipoHospede getCliQueReservou() {
        return hospedeReserva;
    }

    public String getNomeCli() {
        return hospedeReserva.getNome();
    }

    public TipoQuarto getQuarto() {
        return quarto;
    }

    public int getIdReserva() {
        return idReserva;
    }

    public Date getDataOut() {
        return dataOut;
    }

    //setters
    public void addConsumido(Float valor, String produto) {
        consumidos.put(produto, valor);
    }

    public void setCliQueReservou(TipoHospede cliQueReservou) {
        this.hospedeReserva = cliQueReservou;
    }

    public void setDataOut(Date dataOut) {
        this.dataOut = dataOut;
    }

    public void setQuarto(TipoQuarto quarto) {
        this.quarto = quarto;
    }

    public void setIdReserva(int idReserva) {
        this.idReserva = idReserva;
    }

    public void setDataIn(Date dataIn) {
        this.dataIn = dataIn;
    }

    public void FazerCheckout(Date dataOut) {
        setDataOut(dataOut);
    }

    public void addServico(TipoServicos serv) {
        this.servicos.add(serv);
    }

    public void rmServico(TipoServicos servToRemove) {
        this.servicos.remove(servToRemove);
    }

    public ArrayList<TipoServicos> getServicos() {
        return servicos;
    }

    //Retorna o preco total de todos os serviços cadastrados para esse quarto
    public float getPrecoServicos() {
        Float Total = 0f;

        for (TipoServicos or : servicos) {
            Total += or.getPrecoDoServico();

        }
        return Total;
    }

    public void printServicos() {
        servicos.forEach((serv) -> {
            System.out.println(serv.getNomeDoServico());
        });
    }

    public float getPrecoConsumidos() {
        Float Total = 0f;

        for (Entry<String, Float> entry : consumidos.entrySet()) {
            Total += entry.getValue();
        }

        return Total;
    }

    private Float CalcularPreco() {
        Float PrecoTotal = 0f;

        PrecoTotal += getPrecoConsumidos();
        PrecoTotal += getPrecoServicos();
        PrecoTotal += getQuarto().getTipo().getPreco();

        pagamento.setValor(PrecoTotal);

        return PrecoTotal;
    }
}
