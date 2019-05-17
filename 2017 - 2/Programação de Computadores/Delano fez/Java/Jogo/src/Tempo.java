
public class Tempo {

    private int hora;
    private int minuto;

    public Tempo(int hora, int minuto) {
        this.hora = hora;
        this.minuto = minuto;
    }

    Tempo diferenca(Tempo outro) {
        int difM = outro.minuto - this.minuto;
        int difH = outro.hora - this.hora;
        if (difM < 0) {
            difM += 60;
            difH -= 1;
        }

        if (difH < 0 || (difH == 0 && difM == 0)) {
            difH += 24;
        }

        return new Tempo(difH, difM);
    }

    void imprime() {
        System.out.println(hora + " hora(s) e " + minuto + " minuto(s)");
    }
}
