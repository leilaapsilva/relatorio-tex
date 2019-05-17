
public class Main {

    public static void main(String[] args) {
        Funcionario f1 = new Funcionario(1000, "João", 160, 20);
        f1.imprimeDados();

        Funcionario f2 = new Funcionario(1001, "Ana", 80, 30);
        f2.imprimeDados();

        Vendedor v1 = new Vendedor(1003, "José", 160, 20, 1000);
        v1.imprimeDados();
    }
}
