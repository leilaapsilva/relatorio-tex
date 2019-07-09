;9 Defina um procedimento que toma como argumento uma lista de números e retorna a diferença entre o
;maior e o menor.

(defun maxL(lista)
        (cond ((null lista) nil)
              ((null (cdr lista)) (car lista))
              ((> (car lista) (maxL(cdr lista))) (car lista))
              (t (maxL (cdr lista)))
              
        )
    
)

(defun minL(lista)
        (cond ((null lista) nil)
              ((null (cdr lista)) (car lista))
              ((< (car lista) (minL (cdr lista))) (car lista))
              (t (minL (cdr lista)))
            
            
        )
    
)


(defun dif-max-min (listaNum) 
   (cond 
       ((equal (maxL listaNum) nil) (print "Lista Vazia"))
       ((- (maxL listaNum) (minL listaNum)) )
   
    )
)

(print (maxL '(1 4 6 3 6 88 3 12)))
(print (minL '( 4 6 3 6 88 3 12)))

(print (dif-max-min '(7 4 6 2 6 7 3 15)))



