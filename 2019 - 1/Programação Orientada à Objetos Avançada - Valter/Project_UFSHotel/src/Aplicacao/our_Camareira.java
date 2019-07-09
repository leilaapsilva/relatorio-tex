/*
 * The MIT License
 *
 * Copyright 2019 sabrina.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
package Aplicacao;

import Banco.SimulaBD;
import Framework.TipoEndereco;
import Framework.TipoFuncionario;
import Framework.TipoTelefone;
import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author sabrina
 */
public class our_Camareira extends TipoFuncionario {

    public our_Camareira(String setor, String turno, String cpf, String nome, String email, TipoEndereco end, TipoTelefone tel) {
        super(setor, turno, cpf, nome, email, end, tel);
    }

    public List<our_Quarto> getQuartosSujos() {
        SimulaBD BC = SimulaBD.getInstanceBD();

        List<our_Quarto> listaTodosQuartos = new ArrayList<>();
        List<our_Quarto> quartosSujos = new ArrayList<>();

        listaTodosQuartos = BC.getListaQuarto();

        for (our_Quarto or : listaTodosQuartos) {
            if (!or.getStatus().isLimpavel()) {
                quartosSujos.add(or);
            }
        }

        return quartosSujos;
    }

    public void printQuartosSujos() {
        List<our_Quarto> quartosSujos = getQuartosSujos();

        quartosSujos.forEach((or) -> {
            System.out.println("ID: " + or.getIdQuarto() + " Andar: " + or.getAndar());
        });
    }
}

/*//TESTE DA CAMAREIRA - colocar numa classe de "interface grafica" GUI_Camareira
    our_Endereco end = new our_Endereco("13544323", "43", "Limoeiro", "São Caetano", "PA");
    our_Telefone fone = new our_Telefone("55", "11", "9964544471");
    our_Camareira Carmem = new our_Camareira("Limpeza", "Diurno","394.989.233-00", "Carmem", "Carmemlinda@gmail.com", end, fone);
   
    Carmem.printQuartosSujos();*/
