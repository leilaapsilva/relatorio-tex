
package br.ufscar.dc.cifra;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

/**
 *
 * @author 743554 / João Vitor
 */
public class T4 {

    public static void main(String[] args) throws IOException {
        String arquivo1 = "entrada.txt";
        String arquivo2 = "saida.txt";
        int k;
        Scanner sc = new Scanner(System.in);
        System.out.println("Informe o valor de k");
        k = sc.nextInt();
        if(k == 0) 
           System.out.println("Muito efetiva sua criptografia, parabens");
        

        encripte(arquivo1, arquivo2, k);

    }

    private static void encripte(String fileIn, String fileOut, int k) throws FileNotFoundException, IOException {

        int i;

        FileReader fr = new FileReader(fileIn);
        BufferedReader input = new BufferedReader(fr);

        FileWriter fw = new FileWriter(fileOut);
        BufferedWriter output = new BufferedWriter(fw);


        // Tratatos k's negativos, ou seja, 'retrocessos' no alfabeto
        /* Solucao mais elegante: -> */ k = k % 26;
        // Outras soluções foram implementadas, se encontram comentadas no código abaixo:

        while ((i = fr.read()) != -1) {
            
            char c = (char) i;

            
            
            
               
            if (k >= 0) {

                /*      
                while (k >= 26) {
                    k -= 26;  // garantindo que k's maiores que 26  possam ser informados
                }
                
                 */
                if ((i >= 'A' && i <= 'Z') && (i + k <= 'Z')) {
                    fw.write(i + k);
                } else if ((i >= 'A' && i <= 'Z') && (i + k >= 'Z')) {
                    fw.write(i + k - 26);
                } else if ((i >= 'a' && i <= 'z') && (i + k <= 'z')) {
                    fw.write(i + k);
                } else if ((i >= 'a' && i <= 'z') && (i + k >= 'z')) {
                    fw.write(i + k - 26);
                } else {
                    fw.write(i);
                    

                }
            } else {

                /*            
                           while(k <= -26){
            k += 26;  // garantindo que k's maiores que k's menores que -26 possam ser informados
            } 
                 */
                if ((i >= 'A' && i <= 'Z') && (i + k >= 'A')) {
                    fw.write(i + k);
                } else if ((i >= 'A' && i <= 'Z') && (i + k <= 'A')) {
                    fw.write(i + k + 26);
                } else if ((i >= 'a' && i <= 'z') && (i + k >= 'a')) {
                    fw.write(i + k);
                } else if ((i >= 'a' && i <= 'z') && (i + k <= 'a')) {
                    fw.write(i + k + 26);
                } else {
                    fw.write(i);

                }

            }

        }
        input.close();
        output.close();

    }
}
