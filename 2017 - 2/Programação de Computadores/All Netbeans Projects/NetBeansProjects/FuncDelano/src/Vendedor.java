/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Vendedor extends Funcionario {
    
   
    private double valor_vendas; 

    
    public Vendedor(int numero, String nome, double cargaTrab, double valor_por_hora, double valor_vendas) {
        super(numero, nome, cargaTrab, valor_por_hora);
        this.valor_vendas = valor_vendas;
        
        
        
    }
    
    public double getSalario(){
        double salario_pai = super.getSalario();
        salario_pai += valor_vendas * 0.15;
    return salario_pai;
    
    
    
    

}
    

    
    
}
