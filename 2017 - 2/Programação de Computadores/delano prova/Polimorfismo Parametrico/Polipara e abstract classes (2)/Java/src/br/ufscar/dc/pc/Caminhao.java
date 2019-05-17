package br.ufscar.dc.pc;

public class Caminhao extends Veiculo {

    private int nroEixos; // Número de eixos: 2

    public Caminhao(int ano, String marca, String modelo, double motor, 
            int nroEixos) {
        super(ano, marca, modelo, motor);
        this.nroEixos = nroEixos;
    }

    public int getNroEixos() {
        return nroEixos;
    }

    public void setNroEixos(int nroEixos) {
        this.nroEixos = nroEixos;
    }

    @Override
    public void imprime() {
        System.out.println("Ano        : " + this.getAno());
        System.out.println("Modelo     : " + this.getModelo());
        System.out.println("Motor  (c) : " + this.getMotor());
        System.out.println("Nro. Eixos : " + this.nroEixos);
    }
}
