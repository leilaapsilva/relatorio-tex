;1) Dada uma lista L que contém elementos de qualquer tipo, possivelmente com
;repetições, construir outra lista que mostre quantas vezes cada elemento atômico
;(átomo, número, lista vazia) aparece na lista dada, inclusive nas sublistas. A lista
;resultante deve conter pares de elementos (pares são listas de dois elementos) sendo o
;primeiro elemento do par um elemento atômico que aparece na lista dada e o segundo
;elemento do par, o número de vezes que esse elemento aparece na lista. A ordem dos
;elementos na lista original deve ser mantida.
;Por exemplo, dada a lista
;L = (a b z x 4.6 (a x) () (5 z x) ())
;Deve ser construída a lista
;((a 2) (b 1) (z 2) (x 3) (4.6 1) (() 2) (5 1) )
;(Sugestão: desparentizar a lista dada antes de fazer as outras operações.


;funcao que deixa todos os atomos no mesmo nivel
(defun desparentize(lista)
    (cond ((null lista) nil)
          ((atom (car lista)) (cons (car Lista) (desparentize (cdr lista))))
          ((listp (car lista)) (append (desparentize (car lista)) (desparentize (cdr lista))))
          
    )        
)
;recebe um elemento e uma lista, e retorna quantas vezes esse elemento aparece nela
(defun conta-atomos(Elem Lista)
    (cond ((null Lista) 0)
          ((equal Elem (car Lista)) (+ 1 (conta-atomos Elem (cdr Lista))))
          (t (conta-atomos Elem (cdr Lista)))
        
    )
)
;Monta os pares conforme o enunciado = (Elem nroRepeticoes)
(defun monta-pares(Elem Lista)
    (list Elem (conta-atomos Elem  Lista))
)

;Funcao principal
(defun main(Lista)
    (setq Lista1 (desparentize Lista))
    (cond ((null Lista1) nil)
          (t (cons (monta-pares (car Lista1)  Lista1)
                                  (main (remove (car Lista1) (cdr Lista1)))))  
    )
)


(print "Execução exerc1 para a lista dada (a b z x 4.6 (a x) () (5 z x) ())")
(print (main  '(a b z x 4.6 (a x) () (5 z x) ()))  )



;EXERCICIO 2
;Dada uma lista L com elementos de qualquer tipo, construir outra lista em que
;repetições consecutivas de elementos devem ser substituídas por pares da forma (N E),
;onde N é o número de repetições consecutivas do elemento E.
;Por exemplo, dada a lista
;L = (a a a a b c c a a d e e e e)
;Deve ser construída a lista
;((4 a) (1 b) (2 c) (2 a) (1 d) (4 e))
(print "____________________________________________________________________")

;Função que serve para construir a lista de pares da forma (número_de_repetições elemento) de forma recursiva.
(defun monta_pares (lista)
          (if (equal lista NIL)
            NIL
            (cons (list (length (coleciona_repeticoes lista)) (car lista)) (monta_pares (elimina_repeticao lista)))
          )
)

;Função que serve para construir uma lista com todas as repetições consecutivas de um mesmo elemento
(defun coleciona_repeticoes(lista)
          (cond ((equal lista NIL) NIL)
              ((equal (cdr lista) NIL) lista)
              ((equal (car lista) (cadr lista))
                (cons (car lista) (coleciona_repeticoes (cdr lista))))
               (t (list (car lista)))
          )
)

;Função que serve para remover da cabeça da lista uma sequência de elementos que se repetem consecutivamente
(defun elimina_repeticao(lista)
          (cond ((equal lista NIL) NIL)
              ((equal (cdr lista) NIL) NIL)
              ((equal (car lista) (cadr lista))
                (elimina_repeticao (cdr lista)))
               (t (cdr lista))
          )
)

;monta_pares do Exercicio 2: não confundir com 'monta-pares'  "
(print "Execução exerc2 para a lista dada (a a a a b c c a a d e e e e)")
(print (monta_pares  '(a a a a b c c a a d e e e e) ))

