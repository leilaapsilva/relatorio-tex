# -*- coding: utf-8 -*-


# exemplo de uma função bastante simples
def soma(a, b):
    return a + b;
    
# exemplo de uma função um pouco mais complexa
def fib(n):
    """
    Descrição
    ---------
    Algoritmo iterativo para a sequência de Fibonacci.
    
    Entradas
    --------
    n : um número inteiro positivo.
    """
    i = 1
    j = 0
    
    for k in range(n):
        t = i + j
        i = j
        j = t
        
    return j
    
    
    