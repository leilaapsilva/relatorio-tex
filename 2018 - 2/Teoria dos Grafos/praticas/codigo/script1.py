# -*- coding: utf-8 -*-

# estrutura de repetição utilizando for
# repetir para i = 0 até 9 (10 - 1)
for i in range(10):
    # identação é muito importante em Python!
    # imprimir i    
    print i
    
# podemos usar o laço for para iterar os elementos de uma lista
L = [ 3, 5, 8]
# laço for
for l in L:
    # instruções...
    print l
    
# contador
j = 0
# loop while j < 10
while (j < 10):
    # instruções...
    print j
    # incrementar j
    j = j + 1;

a = 2
b = 5

if (a > b):
    
    print 'a é maior que b'
    
elif (a == b):
    
    print 'a e b são iguais'
    
else:
    
    print 'b é maior que a'
    

    
    
