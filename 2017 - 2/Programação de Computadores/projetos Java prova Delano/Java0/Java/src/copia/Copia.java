package copia;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class Copia {

    public static void main(String[] args) {

        int i;
        
        try {
            FileReader fr = new FileReader("entrada.txt");
            BufferedReader input = new BufferedReader(fr);
            
            FileWriter fw = new FileWriter("saida.txt");
            BufferedWriter output = new BufferedWriter(fw);
            
            boolean maiscula = true;
                        
            while ((i = fr.read()) != -1) {
                char c = (char) i;
                
                if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                    if (maiscula) {
                        c = Character.toUpperCase(c);
                    } else {
                        c = Character.toLowerCase(c);
                    }
                    maiscula = !maiscula;
                }
                
                fw.write(c);
            }
            
            input.close();
            output.close();
        } catch (IOException e) {

        }
    }
}
