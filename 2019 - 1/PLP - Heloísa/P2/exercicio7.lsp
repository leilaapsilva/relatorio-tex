;Construa o procedimento SQUASH, que recebe uma s-expressão como argumento e retorna uma lista
;simples com todos os átomos encontrados na s-expressão. Por exemplo:
;(SQUASH '(A (A (A (A B))) (((A B) B) B) B))

;(A A A A B A B B B B)

(defun squash (expressao)
    (cond ((null expressao) nil) 
          ((atom expressao) (list expressao))
          ((atom (car expressao)) (append     (list (car expressao))         (squash (cdr expressao) )     ))                                            
          (t (append (squash (car expressao)) (squash (cdr expressao))))
           
          
    )
    
)


(print (squash '(A (A (A (A B))) (((A B) B) B) B)))

