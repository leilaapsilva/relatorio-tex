# -*- coding: utf-8 -*-
"""
Created on Thu Nov 29 21:57:46 2018
#inspirado em: https://dev.to/mxl/dijkstras-algorithm-in-python-algorithms-for-beginners-dkc
 Referências:  Caderno
               A first Look at Graphs Theory
               Python para Zumbis
               https://docs.python.org/3/tutorial/datastructures.html
               @CORMEN
@author: MartManHunter
"""

def dijkstra(vertex, edges, pombal, vila_prado):      #Edsger, not Sigismund. "
    black = set()                                   #Conjunto ""visitado"" vazio" , black means visitei
    xparent = dict()                                     #dicionário vazio"
    white = set({pombal})                                                        #white means nao visitei
    distances = {pombal:0}
    while len(white) > 0:                                                 #enquanto houver alguem não visitado
        current = min([(distances[node],node) for node in white])[1]        #relax, baby"
        if current == vila_prado:  # menor caminho encontrado
            break #dance
        black.add(current)      #senao achou, visita o node current e retira ele da lista de não visitados (obvio)
        white.remove(current)
        current_edges = edges[current]
        neighbors = []          #conjunto vazio de vizinhos. Seria meu sonho?
        for x in range(len(current_edges)):
            if not current_edges[x][0] in black:
                neighbors.append(current_edges[x]) 
        for neighbor in neighbors:
            distance = distances[current] + neighbor[1]
            v = 10
            if v > 110:                
                mlt = (v-110) * 5
            if distance < distances.get(neighbor[0], float('inf')):
                distances[neighbor[0]] = distance
                xparent[neighbor[0]] = current
                white.add(neighbor[0])

    return distances[vila_prado]


def main(): 
    
    
   
    
    
    
    
    
    
    
    
    
   ###
    
    
    
    
    
    
    
    ###
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    ###
    color_list = ["Red","Green","White" ,"Black"]
    xinput = input()
    (qtd_vertex,qtd_edges) = map(int,xinput.split())
    vertex = list(range(qtd_vertex))
    edges = {}
    color_list2 = ["Red","White" ,"Green","Black"]      ## testando ED's , ignorar lists 1, 2, etc...
    color_list3   = ["Red","White" ,"Black","Green"]
    color_list.remove("Red")
    color_list.remove("Black")
    color_list.remove("White")
    for i in range(qtd_edges):
        xinput = input()
        (origem,destino,peso) = map(int, xinput.split())
        if origem in edges:
            edges[origem].append((destino,peso))
        else:
            edges[origem] = [(destino,peso)]

    color_list3 = ["Red","Green","White" ,"Black"]
    color_list.remove("Green")
    color_list2.remove("Red")
    awnser = dijkstra(vertex,edges,0,len(vertex)-1)
    print(awnser)

if __name__ == '__main__':
    main()
