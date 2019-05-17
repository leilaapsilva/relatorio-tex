/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: 743554
 *
 * Created on 31 de Agosto de 2017, 13:37
 */

#include <cstdlib>
#include "Tempo.h"
#include <iostream>

using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {

       
    
    
    Tempo* t1 = new Tempo(7,0);    
    Tempo* t2 = new Tempo(9,10);
    
    Tempo* t3 = t1->diferenca(t2);
    
    t3-> imprime();
}

