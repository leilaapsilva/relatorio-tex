package removeVogais;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;

public class RemoveVogais {

    public void removeVogais(String fileIn, String fileOut) {
        int i;

        try {
            FileReader fr = new FileReader(fileIn);
            BufferedReader input = new BufferedReader(fr);

            FileWriter fw = new FileWriter(fileOut);
            BufferedWriter output = new BufferedWriter(fw);

            while ((i = fr.read()) != -1) {
                char c = (char) i;

                switch (c) {
                    case 'A':
                    case 'E':
                    case 'I':
                    case 'O':
                    case 'U':
                    case 'a':
                    case 'e':
                    case 'i':
                    case 'o':
                    case 'u':
                    case ' ': break;
                    default:
                    {
                        fw.write(c);
                        break;
                    }
                }                
            }

            input.close();
            
            output.close();
        } catch (IOException e) {

        }
    }

    public static void main(String[] args) {
        RemoveVogais copia = new RemoveVogais();
        copia.removeVogais("entrada.txt", "saida.txt");
    }
}
