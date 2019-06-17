;Defina um predicado PALINDROMOP, que testa seu argumento para ver se é um palindromo. Se o
;argumento for um átomo, a resposta deve ser NIL.


(defun reversa (lista)
    (cond ((null lista) nil)
          ((null (cdr lista)) lista)
           (t (append (reversa (cdr lista)) (list(car lista))))
    )
    )

(defun palindromop(argumento)
     (cond ((atom argumento) nil)
           ((equal argumento (reversa argumento)) t)    
         
     )
    
    
)

(print (palindromop '(a b c b a)))

