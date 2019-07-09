;Função que serve para construir a lista de pares da forma (elemento número_de_repetições) de forma recursiva.
(defun encode (lista)
					(if (equal lista NIL)
						NIL
						(cons (list (car lista) (length (coleciona_repeticoes lista))) (encode (elimina_repeticao lista)))
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