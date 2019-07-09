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
package Banco;

import Framework.TipoFuncionario;
import Framework.TipoGerente;
import Framework.TipoHospede;
import Framework.TipoQuarto;
import Framework.TipoRecepcionista;
import Framework.TipoReserva;
import Framework.TipoServicos;
import java.util.List;

/**
 * @author João Vitor Azevedo 743554
 * @author Sabrina Miranda 743595
 * @author Vitor Sugaya 743605
 */
public interface iBancoGerente {

    //Métodos para adicionar no banco
    public boolean addGerente(TipoGerente newGerente);

    public boolean addHospede(TipoHospede newHospede);

    public boolean addQuarto(TipoQuarto newQuarto);

    public boolean addRecepcionista(TipoRecepcionista newRecep);

    public boolean addServico(TipoServicos newServico);

    public boolean addReserva(TipoReserva newReserva);

    public boolean addFuncionario(TipoFuncionario newFuncionario);

    //Métodos para resgatar do banco
    public TipoHospede getHospede(int id_hospede);

    public String getNomeGerente(int id);

    public String getNomeRecepcionista(int id);

    public String getNomeHospede(int id);

    public String getNomeFuncionario(int id);

    public TipoRecepcionista getRecepcionista(int id);

    public TipoQuarto getQuartoDisp();

    public TipoReserva getReserva(int id);

    public List getListaHospede();

    public List getListaFuncionario();

    public List getListaQuarto();

    public void listarRecepcionistas();

    public void listarFuncionarios();

    public void listarReservas();

    public void listarHospedes();
}
