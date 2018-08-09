/**
 *
@author João Vitor Azevedo Marciano - 743554
 * 
 * Proposta: 
 * Implemente a classe Pessoa que possua como atributos: nome, peso 
 * (em quilogramas)
e altura (em metros). Inclua na classe um construtor para definir os atributos 
* e os seguintes métodos:
– Métodos (getters e setters) para ler e alterar cada um dos atributos em 
* separado.
– O método double getIMC() que calcula o índice de Massa Corporal (IMC). 
* O cálculo é feito através da fórmula IMC = peso * altura2 .
– O método void imprimeCategoria() que informa a faixa de categoria do IMC 
* que a pessoa se encontra, utilizando a tabela adequada
 */
public class Pessoa {
    private String nome;
    private float pesoKg;
    private float altura;

    // Construtor
    public Pessoa(String nome, float pesoKg, float altura) {
        this.nome = nome;
        this.pesoKg = pesoKg;
        this.altura = altura;
    }
    //Calcula e retorna o IMC da pessoa
    public double getIMC(){
        return (this.pesoKg / (altura * altura));
    }
    //Imprime a categoria à qual tal pessoa pertence, baseado em seu IMC
    public void imprimeCategoria(){
        if(this.getIMC() < 18.5)
            System.out.println("Abaixo do Peso");        
        
        else if(this.getIMC() < 25)
            System.out.println("Peso Normal");
        
        else if (this.getIMC() < 30) 
            System.out.println("Sobrepeso");
        
        else if(this.getIMC() < 35)
            System.out.println("Obesidade grau I");
        
        else if(this.getIMC() < 40) 
            System.out.println("Obesidade grau II");
                
        else 
            System.out.println("Obesidade grau III e seu IMC é " + this.getIMC());
        
              
        
    }
    
    
    
    
    
    //Getters
    
    public String getNome() {
        return this.nome;
    }
    
    public float getAltura() {
        return this.altura;
    }

    public float getPesoKg() {
        return this.pesoKg;
    }

    //Setters
    public void setAltura(float altura) {
        this.altura = altura;
    }

    public void setPesoKg(float pesoKg) {
        this.pesoKg = pesoKg;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }
    
    
    
    
    
    
    
    
}
