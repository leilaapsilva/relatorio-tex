;Defina um predicado TRI-RETAN, que recebe três argumentos. Os três argumentos são os
;comprimentos dos lados de um triângulo, que pode ser um triângulo retângulo. TRI-RETAN deve
;retornar T se a soma dos quadrados dos dois lados menores está a menos de 2% do quadrado do lado
;maior. Caso contrário, TRI-RETAN deve retornar NIL. Assuma que o lado maior é dado como o
;primeiro argumento.

(defun quadrado (x) (* x x ))

(defun tri-retan(x y z)
    (cond ( (<=(+(quadrado y) (quadrado z)) (*(quadrado x) 1.02)) t)
          ( (>=(+(quadrado y) (quadrado z)) (*(quadrado x) 0.98)) t) 
          (t nil)
    )
)

(print (quadrado 5))
(print (tri-retan 5 4 3))
(print (tri-retan 100000 1 2))


(defun TRI-RETANg (L1 L2 L3)
     (< (abs (- (quadrado L1)   (+ (quadrado L2) (quadrado L3))        (* L1 0.02))))
)
(print (TRI-RETANG 13131313 40000 3))


