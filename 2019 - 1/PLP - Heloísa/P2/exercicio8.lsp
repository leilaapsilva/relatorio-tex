;8. Defina em LISP o predicado ESTA-EM, para dados um átomo e uma s-expressão, verificar se esse
;átomo está na s-expressão, em qualquer nível.


(defun esta-em(x lista)
   (cond ((null lista) nil)
         ((equal (car lista) x) t)
         ((listp (car lista)) (esta-em x (car lista))) 
         (t (esta-em x (cdr lista)))
   )

)

(print (esta-em 4 '(1 2 3 (4) 5)))


