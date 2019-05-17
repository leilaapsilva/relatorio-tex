public class Vendedor extends Funcionario {
    
    private float vendas;
    
    public Vendedor(int numero, String nome, int horas, float valor, 
            float vendas) {
        super(numero, nome, horas, valor);
        this.vendas = vendas;
    }

    @Override
    public float getSalario() {
        float salario = super.getSalario(); 
        salario += this.vendas * 0.15;
        return salario;
    } 
}
