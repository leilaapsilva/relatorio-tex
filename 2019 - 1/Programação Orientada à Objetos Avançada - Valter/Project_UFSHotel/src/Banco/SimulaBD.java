/*
 * The MIT License
 *
 * Copyright 2019 MartManHunter.
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

//import Aplicacao.our_Endereco;
import Aplicacao.our_Gerente;
import Aplicacao.our_Hospede;
import Aplicacao.our_Quarto;
import Aplicacao.our_Recepcionista;

import Framework.TipoHospede;
import Framework.TipoRecepcionista;
import Framework.TipoFuncionario;
import Framework.TipoQuarto;
import Framework.TipoReserva;
import Framework.TipoServicos;
import Framework.TipoTelefone;
import Framework.TipoGerente;

import java.util.ArrayList;
import java.util.Date;
import java.util.List;
import Aplicacao.our_Servicos;
import Aplicacao.our_Telefone;
import Aplicacao.our_TipoCategoriaDeQuarto;
import Framework.TipoCategoriaDeQuarto;
import Framework.TipoEndereco;
import Framework.TipoPagamento;

public class SimulaBD implements iBancoGerente, iBancoRecepcionista {

    private static SimulaBD single_instance = null;

    //Objetos hipotéticos para preencher banco inicialmente
    TipoRecepcionista recep1;
    TipoHospede valter;
    TipoHospede hospede1;
    TipoCategoriaDeQuarto Casal;
    TipoEndereco endereco1;
    TipoTelefone telefone1;
    TipoServicos serv;
    TipoServicos serv2;
    TipoServicos serv3;
    TipoCategoriaDeQuarto suite;
    our_Gerente gerenteRoberto;
    our_Quarto room1;
    our_Quarto room2;
    TipoPagamento pag1;

    Date data1;
    Date data2;

    //Listas para armazenamento do banco
    public static List<TipoHospede> listaHospedes;
    public static List<TipoFuncionario> listaFuncionarios;
    public static List<TipoQuarto> listaQuartos;
    public static List<TipoServicos> listaServicos;
    public static List<TipoReserva> listaReservas;

    // public static List<our_Recepcionista> listaRecepcao;
    // public static List<our_Gerente> listaGerentes;
    public SimulaBD() {
        data1 = new Date(1996, 5, 21);
        data2 = new Date(1996, 7, 21);

        listaFuncionarios = new ArrayList<>();
        listaQuartos = new ArrayList<>();
        listaServicos = new ArrayList<>();
        listaHospedes = new ArrayList<>();
        listaReservas = new ArrayList<>();

        telefone1 = new our_Telefone("+55", "15", "99768-4759");

        this.recep1 = new our_Recepcionista(31, "Recepção", "Tarde", "432.343.222.41", "Juju Recepcionista", "my@email.com", endereco1, telefone1, "Tarde de novo");

        Casal = new our_TipoCategoriaDeQuarto("Casal", 2, 120.0f);
        this.suite = new our_TipoCategoriaDeQuarto("Suite", 3, 180.0f);

        //endereco1 = new our_Endereco("17523275", "252", "Jardim Guanabara", "Marília", "Ceará");

        hospede1 = new our_Hospede("432.883.228-81", "Joao Vitor", "fulanodetal@gmail.com", endereco1, telefone1);

        serv = new our_Servicos("Comidinhas top", null, 22.0f);
        serv2 = new our_Servicos("Massagem", null, 22.0f);
        serv3 = new our_Servicos("Frigobar Liberado", null, 22.0f);

        room1 = new our_Quarto(7, (our_TipoCategoriaDeQuarto) suite);
        room1.setStatusDisponibilidade(false);

        room2 = new our_Quarto(7, (our_TipoCategoriaDeQuarto) Casal);
        room2.setStatusDisponibilidade(true);

        listaQuartos.add(room1);
        listaQuartos.add(room2);

        gerenteRoberto = new our_Gerente("gerencia ue", "tarde", "4372837238-12", "Robertinho de Souza", "ro_berto@gmail.com", endereco1, telefone1);

        //SimulaBD.listaFuncionarios.add(recep1);
        SimulaBD.listaFuncionarios.add(gerenteRoberto);
        SimulaBD.listaHospedes.add(hospede1);
        SimulaBD.listaQuartos.add(room1);

    }

    //Retorna o banco todo
    public static SimulaBD getInstanceBD() {

        if (single_instance == null) {
            single_instance = new SimulaBD();
        }
        return single_instance;
    }

    //Métodos para adicionar no banco
    //Para caso o engenheiro de aplicação queira adicionar um novo tipo de funcionario no banco
    @Override
    public boolean addFuncionario(TipoFuncionario newFuncionario) {
        listaFuncionarios.add(newFuncionario);
        return true;
    }

    @Override
    public boolean addRecepcionista(TipoRecepcionista newRecepcionista) {
        listaFuncionarios.add(newRecepcionista);
        return true;
    }

    @Override
    public boolean addGerente(TipoGerente newGerente) {
        listaFuncionarios.add(newGerente);
        return true;
    }

    @Override
    public boolean addQuarto(TipoQuarto newQuarto) {
        listaQuartos.add(newQuarto);
        System.out.println("Cadastrado Quarto");
        return true;
    }

    @Override
    public boolean addServico(TipoServicos newServico) {
        listaServicos.add(newServico);
        return true;
    }

    @Override
    public boolean addReserva(TipoReserva newReserva) {
        listaReservas.add(newReserva);
        System.out.println("Reserva para " + newReserva.getNomeCli() + " cadastrada com sucesso");
        return true;
    }

    @Override
    public boolean addHospede(TipoHospede newHospede) {
        listaHospedes.add(newHospede);
        System.out.println("Hospede " + newHospede.getNome() + " cadastrado com sucesso!");
        return true;
    }

    //Caso de uso que retorna nome de um objeto a partir de um id
    @Override
    public String getNomeGerente(int id) {
        for (TipoFuncionario ger : listaFuncionarios) {
            if (ger instanceof our_Gerente) {
                int id_g = ger.getID();
                if (id == id_g) {
                    return ger.getNome();
                }
            }
        }
        return null;
    }

    @Override
    public String getNomeRecepcionista(int id) {
        for (TipoFuncionario recep : listaFuncionarios) {
            if (recep instanceof TipoRecepcionista) {
                int id_r = recep.getID();
                if (id == id_r) {
                    return recep.getNome();
                }
            }
        }
        return null;
    }

    @Override
    public String getNomeHospede(int id) {
        for (TipoHospede hosp : listaHospedes) {
            int r_id = hosp.getID();
            if (id == r_id) {
                return hosp.getNome();
            }
        }
        return null;
    }

    @Override
    public String getNomeFuncionario(int id) {
        for (TipoFuncionario func : listaFuncionarios) {
            int r_id = func.getID();
            if (id == r_id) {
                return func.getNome();
            }
        }
        return null;
    }

    //Métodos para retornar um objeto especifico a partir de um id
    @Override
    public TipoHospede getHospede(int id_hospede) {
        for (TipoHospede tipoHospede : listaHospedes) {
            int id = tipoHospede.getID();
            if (id == id_hospede) {
                return tipoHospede;
            }
        }
        return null;
    }

    @Override
    public TipoRecepcionista getRecepcionista(int id) {
        for (TipoFuncionario or : listaFuncionarios) {
            if (or instanceof TipoRecepcionista) {
                int id_r = or.getID();
                if (id == id_r) {
                    return (TipoRecepcionista) or;
                }
            }
        }
        return null;
    }

    @Override
    public TipoReserva getReserva(int id) {
        for (TipoReserva res : listaReservas) {
            if (id == res.getIdReserva()) {
                return res;
            }
        }
        return null;
    }

    //Retorna um quarto disponivel do banco
    @Override
    public TipoQuarto getQuartoDisp() {
        for (TipoQuarto quarto : listaQuartos) {
            if (quarto.getStatusDisponibilidade() == true) {
                return quarto;
            }
        }
        return null;
    }

    //Retorna as listas
    @Override
    public List getListaHospede() {
        return listaHospedes;
    }

    @Override
    public List getListaFuncionario() {
        return listaFuncionarios;
    }

    @Override
    public List getListaQuarto() {
        return listaQuartos;
    }

    //Printa as infos das listas
    @Override
    public void listarReservas() {
        SimulaBD.listaReservas.forEach((r) -> {
            if (r instanceof TipoReserva) {
                System.out.println(r.toString());
            }
        });
    }

    @Override
    public void listarRecepcionistas() {
        SimulaBD.listaFuncionarios.forEach((c) -> {
            if (c instanceof TipoRecepcionista) {
                System.out.println(c.toString());
            }
        });
    }

    @Override
    public void listarFuncionarios() {

        SimulaBD.listaFuncionarios.forEach((c) -> {
            System.out.println(c.toString());
        });

    }

    @Override
    public void listarHospedes() {
        SimulaBD.listaHospedes.forEach((c) -> {
            System.out.println(c.toString());
        });
    }

}
