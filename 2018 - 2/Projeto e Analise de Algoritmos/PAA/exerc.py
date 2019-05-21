# -*- coding: utf-8 -*-
"""
Created on Thu Nov 29 22:27:41 2018

@author: MartManHunter
"""

v = int(input("Velocidade: "))
if v > 110:
        print("Voce foi multado!")
        multa = (v-110) * 5
        print("Valor da multa: R$ %5.2f" %multa)
    