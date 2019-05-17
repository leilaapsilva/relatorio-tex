
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Main {
    
   /* import java.util.Scanner; */

    
   public static void main(String[] args){
        
        
        Scanner sc = new Scanner(System.in);
        
    
    Funcionario func = new Funcionario(1000, "João", 160.0, 20.0);
    
    
   int numero = sc.nextInt();
    String nome = sc.next();
    double carga = sc.nextDouble();
    double valor_por_hora = sc.nextDouble();
    double total_vendas = sc.nextDouble(); 
   
    
    
    Vendedor v = new Vendedor(numero, nome, carga, valor_por_hora, total_vendas);
    
  
    
    
    
   // func.Imprimir();      
    v.Imprimir();
    
   
    
    
    
    
    
    
    
    
    }
}
