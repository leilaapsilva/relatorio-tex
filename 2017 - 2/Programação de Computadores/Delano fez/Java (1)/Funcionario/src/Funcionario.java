
public class Funcionario {

    private int numero;
    private String nome;
    private int horas;
    private float valor;

    public Funcionario(int numero, String nome, int horas, float valor) {
        this.numero = numero;
        this.nome = nome;
        this.horas = horas;
        this.valor = valor;
    }

    public float getSalario() {
        return horas * valor;
    }

    public void imprimeDados() {
        System.out.println("O salário de " + nome + " é R$ " + getSalario());
    }
}
