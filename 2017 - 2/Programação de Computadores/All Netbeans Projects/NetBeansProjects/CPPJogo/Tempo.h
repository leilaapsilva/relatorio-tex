/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tempo.h
 * Author: 743554
 *
 * Created on 31 de Agosto de 2017, 13:38
 */

#ifndef TEMPO_H
#define TEMPO_H

class Tempo {
public:
    Tempo();
    Tempo(int hora, int minuto) :
    hora(hora), minuto(minuto) {
    }

    Tempo* diferenca(Tempo* outro);
    void imprime();
    
    
    
private:
    int hora;
    int minuto;

};

#endif /* TEMPO_H */

