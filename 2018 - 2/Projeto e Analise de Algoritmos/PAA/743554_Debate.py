# -*- coding: utf-8 -*-
"""
Created on Sat Dec  1 16:01:33 2018
#inspirado em: https://dev.to/mxl/dijkstras-algorithm-in-python-algorithms-for-beginners-dkc
 Referências:  Caderno
               A first Look at Graphs Theory
               Python para Zumbis
               https://docs.python.org/3/tutorial/datastructures.html
               @CORMEN
               Anotações do Levada <3   
@author: MartManHunter
"""



###





###



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
    xinput = input()
    n = int(xinput)                ##qtd alunos
    lista_Alunos = list(range(n))   #ava
    vertex = dict()                         #thanks to the Internet by F.A.Qs about Data Structures in Python
    for i in range(len(lista_Alunos)):              #para todos os alunos
        xinput = input()                            #pega pra quantos ele deseja perguntar e quem são eles
        xinput = list(map(int, xinput.split()))
        xinput = xinput[1:]                     #quem são eles
        vertex[i] = {'color':'null','neighbors':xinput}   ##Novamente utilizando cores pra marcar vértices visitados e não visitados
    vertex[0]['color'] = 'white'                          #Coisas dahora que não tem em C ^^
    xqueue = [0]
    while len(xqueue) > 0:
        current = xqueue.pop(0)
        for neighbor in vertex[current]['neighbors']:       
            if vertex[neighbor]['color'] == 'null':
                if vertex[current]['color'] == 'white':
                    vertex[neighbor]['color'] = 'black'
                else:
                    vertex[neighbor]['color'] = 'white'
                xqueue.append(neighbor)
            elif vertex[current]['color'] == vertex[neighbor]['color'] and current != neighbor: ## se a cor dele for igual a do vizinho, é impossível bipartir
                print('Impossivel')
                return
    print('Vai la, tio Willian!')





####
if __name__ == '__main__':
    main()







###