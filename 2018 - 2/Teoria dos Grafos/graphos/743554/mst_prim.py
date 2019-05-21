"""
-Created on Fri Dec  7 08:09:52 2018

https://networkx.github.io/documentation/networkx-1.10/reference/introduction.html

@author: MartManHunter
"""
import networkx as nx
import numpy as np
from matplotlib import pyplot as plt

def Prim(g, s):
	minCin = {}                ##Menor weight de entrada para v até agora
	predecessor = {}           ##predecessor de v na arvore ( vertice pelo qual entrei no v atual)
	for v in g.nodes():        #Inicialização de quem não é inicial -> sem predecessor e distancia infinita da ""raiz""
		minCin[v] = np.inf
		predecessor[v] = 'null'
   #Inicialização do nó inicial ""RAIZ""
	minCin[s] = 0
	MST = nx.create_empty_copy(g)
    
	while minCin:
		u = min(minCin,key = minCin.get)
		del minCin[u]
		for vizinho in g[u]:
			if vizinho in minCin and g[u][vizinho]['weight'] < minCin[vizinho]:
				predecessor[vizinho] = u
				minCin[vizinho] = g[u][vizinho]['weight']
		if predecessor[u] is not 'null':
			for v1,v2,data in g.edges(data=True):
				if (v1 == predecessor[u] and v2 == u):          ##se v1 é predecessor de u
					MST.add_edge(v1,v2, weight=data['weight'])   #add aresta u,v na arvore
				elif (v1 == u and v2 == predecessor[u]):
					MST.add_edge(v2,v1, weight=data['weight'])
					MST_final = MST.copy()
	return MST_final

A = np.loadtxt('ha30_dist.txt')         ##trecho de código 
g = nx.from_numpy_matrix(A)             ##fornecido pelo professor, só aceitei

tree = Prim(g, 0)
nx.draw_networkx(tree)
plt.show()