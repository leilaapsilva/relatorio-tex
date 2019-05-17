package br.ufscar.dc.pc;

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
public class main {
    public static void main(String args[]){
        
        Pessoa p1 = new Pessoa("joao", "rua dasuahduahudh , 252");
        Fisica f1 = new Fisica("pesoaa fisica", "um endereco", "43828727874827-12");
        Juridica j1 = new Juridica("Coca cola", "endereco da coca", "666");
        
        p1.imprime();
        f1.imprime();
        j1.imprime();
        
        Scanner sc = new Scanner(System.in);
        String name,end,cppppppf;
        
        
        /**-----------------------------------------------------*/
        
        
        System.out.println("Digite o nome: ");
        name = sc.nextLine();
        System.out.println("Digite o Endereco: ");
        end = sc.nextLine();
        System.out.println("Digite o CPF: ");
        cppppppf = sc.nextLine();
        
        
        
        
        Fisica entradas = new Fisica(name,end,cppppppf);
        entradas.imprime();
        /**-----------------------------------------------------*/
        
        
        Carro car = new Carro("VW", "Fusca", "Azul", 1969, p1);
        car.setDono(f1);
        
        
    }
}
