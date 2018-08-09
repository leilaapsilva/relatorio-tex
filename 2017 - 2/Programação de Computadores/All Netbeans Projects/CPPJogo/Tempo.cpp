/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Tempo.cpp
 * Author: 743554
 * 
 * Created on 31 de Agosto de 2017, 13:38
 */


#include <iostream>
#include <cstdio>
#include <stdlib.h>


using namespace std;


Tempo Tempo::diferenca(Tempo* outro) {
    
    int difM = outro->minuto - this->minuto;
    int difH = outro->hora - this->hora;    
    
    if(difM > 0){       
        
        
    }

    
}

void Tempo::imprime(){
    
    cout << hora "Hora(s) e " << minuto <<" minuto(s)" << endl;
    printf("%d Hora(s) e %d minuto(s)\n", hora, minuto);
}



