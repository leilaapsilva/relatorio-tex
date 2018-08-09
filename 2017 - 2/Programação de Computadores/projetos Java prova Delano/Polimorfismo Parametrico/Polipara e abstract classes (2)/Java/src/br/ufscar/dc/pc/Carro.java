package br.ufscar.dc.pc;

public class Carro extends Veiculo {

    private int volume; // Volume: 235 litros

    public Carro(int ano, String marca, String modelo, double motor, 
            int volume) {
        super(ano, marca, modelo, motor);
        this.volume = volume;
    }

    public int getVolume() {
        return volume;
    }

    public void setVolume(int volume) {
        this.volume = volume;
    }

    @Override
    public void imprime() {
        System.out.println("Ano        : " + this.getAno());
        System.out.println("Modelo     : " + this.getModelo());
        System.out.println("Motor  (c) : " + this.getMotor());
        System.out.println("Volume (l) : " + this.volume);        
    }
}
