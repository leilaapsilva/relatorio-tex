;1. Um palíndromo é uma lista que tem a mesma sequência de elementos quando é lida tanto da esquerda
;para a direita quanto da direita para a esquerda. Defina uma função em LISP de nome
;PALINDROMIZE, que recebe uma lista como seu argumento e retorna um palíndromo com o dobro do
;comprimento. Defina também uma função auxiliar REVERSA, que recebe uma lista e retorna outra
;com os elementos em ordem inversa. (O interpretador LISP tem uma função pré-definida chamada
;REVERSE, que não deve ser usada neste exercício).

(defun reversa (lista)
    (cond ((null lista) nil)
          ((null (cdr lista)) lista)
           (t (append (reversa (cdr lista)) (list(car lista))))
    )
    )
(defun palindromize(list)
    (append list (reversa list))
        
 )

(print (reversa '(c () g t ())))

(print (palindromize '(a b c d barrinha)))

