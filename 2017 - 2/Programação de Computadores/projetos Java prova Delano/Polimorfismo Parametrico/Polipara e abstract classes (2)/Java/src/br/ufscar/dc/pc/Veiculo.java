package br.ufscar.dc.pc;

public abstract class Veiculo implements Comparable<Veiculo>{

    private int ano; // Ano: 2017
    private String marca; // Marca: Fiat
    private String modelo; // Modelo: Mobi
    private double motor; // Motor: 1.0

    public Veiculo(int ano, String marca, String modelo, double motor) {
        this.ano = ano;
        this.marca = marca;
        this.modelo = modelo;
        this.motor = motor;
    }

    public abstract void imprime();

    public int getAno() {
        return ano;
    }

    public void setAno(int ano) {
        this.ano = ano;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }

    public String getModelo() {
        return modelo;
    }

    public void setModelo(String modelo) {
        this.modelo = modelo;
    }

    public double getMotor() {
        return motor;
    }

    public void setMotor(double motor) {
        this.motor = motor;
    }

    @Override
    public int compareTo(Veiculo o) {
        return this.ano - o.ano;
    }
    
    
}
