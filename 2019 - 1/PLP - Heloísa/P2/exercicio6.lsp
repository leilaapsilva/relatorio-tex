;6. Descreva o que faz seguinte procedimento:

; nada ??? aushauisashuah 
(defun estranho (l)
    (cond ((null l) nil)
          ((atom l) l)
          (t (cons (estranho (car l)) (estranho (cdr l))))
    )
)

(print (estranho '(a b c)))

(print (estranho '(a (b) () (a b ()) c)))