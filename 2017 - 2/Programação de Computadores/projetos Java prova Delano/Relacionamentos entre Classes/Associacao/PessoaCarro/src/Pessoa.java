
/**
 * Classe Pessoa
 *
 * @author Delano Medeiros Beder
 */
public class Pessoa {

    private String CPF, nome;

    public Pessoa(String CPF, String nome) {
        this.CPF = CPF;
        this.nome = nome;
    }

    public String getCPF() {
        return CPF;
    }

    public String getNome() {
        return nome;
    }

    public String toString() {
        return CPF + " - " + nome;
    }

    public static void main(String[] args) {
        Pessoa ana = new Pessoa("0123456789", "Ana da Silva");
        Pessoa bob = new Pessoa("9876543210", "Bob dos Santos");

        Carro ferrari = new Carro("Ferrari", "Vermelho", 2012);
        Carro audi = new Carro("Audi", "Branco", 2011);
        Carro porsche = new Carro("Porche", "Amarelo", 2013);

        ferrari.setDono(ana);
        audi.setDono(bob);
        porsche.setDono(ana);

        System.out.println("Antes ...............");

        System.out.println(ferrari);
        System.out.println(audi);
        System.out.println(porsche);

        // Venda do audi bob => ana
        System.out.println("Depois ...............");

        audi.setDono(ana);

        System.out.println(ferrari);
        System.out.println(audi);
        System.out.println(porsche);

    }
}
