
/** 
 *
@author João Vitor Azevedo Marciano - 743554
* 
* 
* 
* 
* Proposta 
 * Você foi contratado por uma agência de viagens para implementar um 
 * aplicativo de conversão de reais para dólar de acordo com a taxa de compra
 * e a taxa de venda. Para isso, você deve implementar a classe ConversorMonetário
 * que inclui os seguintes atributos (taxa de compra e taxa de venda), 
 * um construtor para definir os atributos e os seguintes métodos:
– void imprimeTaxas() que imprime o valor das 2 taxas de conversão;
– double vendeDólar(double quantia) que recebe uma quantia em dólares
* e devolve o valor correspondente em reais;
– double compraDólar(double quantia) que recebe uma quantia em reais e
* devolve o valor correspondente em dólares; 
* – Os métodos (getters e setters) 
* para ler e alterar cada um dos atributos em separado.
* 

 */
public class ConversorMonetario {
    private float taxaDeCompra;
    private float taxaDeVenda;
    
    // Construtor
    public ConversorMonetario(float taxaDeCompra, float taxaDeVenda){
            this.taxaDeCompra = taxaDeCompra;
            this.taxaDeVenda  = taxaDeVenda;
              
    }
    
    // Getters
    public float getTaxaCompra(){
    return this.taxaDeCompra;
    }
    
    public float getTaxaVenda(){
        return this.taxaDeVenda;
    } 
    
    //Setters
    public void setTaxaCompra(float taxaSet){
        this.taxaDeCompra = taxaSet;
    }
    
    public void setTaxaVenda(float taxaSet){
        this.taxaDeVenda = taxaSet;        
    }
    
    
    //Demais Métodos - Nomes sugestivos e auto-explicativos
    public void imprimeTaxas(){
        System.out.println("A taxa de Compra atual é " + this.taxaDeCompra);
        System.out.println("Ou seja, " + this.taxaDeCompra +" reais aqui valem 1 dolar!!");
        System.out.println("A taxa de Venda atual é " + this.taxaDeVenda);
        System.out.println("Ou seja, 1 dolar aqui vale " + this.taxaDeVenda + " reais");
               
        
        
    }
    
    public double vendeDolar(double quantia){
         // Recebe um valor em dólares e retorna seu equivalente em reais
        return quantia * taxaDeVenda;
    }
    
    public double compraDolar(double quantia){
        // Recebe um valor em reais e retorna seu equivalente em dólares
        return quantia / taxaDeCompra;
                
    }
}
