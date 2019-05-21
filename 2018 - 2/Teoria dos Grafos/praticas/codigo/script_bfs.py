# -*- coding: utf-8 -*-

import networkx as nx
import matplotlib.pyplot as plt

from graphsearch import bfs

# grafo classico
G = nx.petersen_graph()
# fazer busca em largura
P = bfs(G, 0)
# árvore da busca em largura
T = nx.Graph()
# inserir arestas em T
T.add_edges_from([ (u, v) for u, v in P.items() ])
# posicionamento do grafo T
pos = nx.spring_layout(T)
# exibir grafo G
plt.figure()        # iniciar figura
nx.draw(G, pos)     # plogar grafo G
plt.show()          # plotar figura
plt.close()         # encerrar figura
# iniciar figura
plt.figure() 
# plotar vertices de T
nx.draw_networkx_nodes(T, pos, node_size=700)
# obter dicionário com as distâncias 
dist = { v: (v, data['lambda']) for v, data in G.nodes(data=True) }
# plotar distâncias
nx.draw_networkx_labels(T, pos, labels=dist)
# plotar arestas de T
nx.draw_networkx_edges(T, pos)
# exibir figura
plt.show()
# encerrar figura
plt.close()


