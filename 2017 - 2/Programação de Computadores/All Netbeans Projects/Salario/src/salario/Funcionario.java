package salario;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author 743554
 */
public class Funcionario {
    
    private int numero;
    private String nome;
    private float cargaTrab;
    private float valor_por_hora;
    
    
    
    
    public void Funcionario(int num, String name, float cargatr, float vahor){
        
    numero = num; 
     nome = name;
    cargaTrab = cargatr;
    valor_por_hora = vahor;
    
    }
    
    public float CalcSalario(float cargaTra, float hourvalue){
    float salariototal;
salariototal = cargaTra * hourvalue;





return salariototal;
}



public void PrintSalario(){
           

}


    
}

