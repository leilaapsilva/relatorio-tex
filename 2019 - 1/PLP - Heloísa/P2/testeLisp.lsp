;gnu clisp 2.49

(print "Hello, world!")

(print (+ 2 2))

(print (+ 9 1 1))

(print (- 9 8))

(print (> 9 7 8))

(print (<= 7 7 7))

(print (= 3 3))

(print (= 4 7))

(print (max 10 4 7))

(print (min 10 4 7))

;(print )

(print (setq linguagens '(java php C)))

(print (setq linguagens (cons 'python linguagens)))

(print (setq linguagens (remove 'java linguagens)))

(print (first linguagens))

(print (last linguagens))

(setq r1 10)
(setq r2 4)
(setq r3 4)

(if (equal r1 r2) (print "igual") (print "diferente"))
(if (equal r2 r3) (print "iguais") (print "diferentes"))

(print (- (+ 3 4) 7))
; definindo funcao quadrado

(defun quadrado (x) (* x x))

(print (quadrado 5))
;(setq joao a b c)
(print (quadrado 3))

(print (+ 2 3))
(print '(+ 2 3))
(print (/ 10 5))

(print '(a b c d))

(print (* (+ 2 5) (- 7 (/ 21 7))))

(print (= (+ 2 3) 5 ) )

;(print (list a b c d e f f f))
(print (nth 3 '(a b c d e)))
(print (nth 2 (list 'f 'a 'g 'e)))
(print (list 1 2 3))
(print (nth 1 (list 0 'joao 3 4 5)))

(print (length '(a b d c)))
(print (length (list 1 2 3 4 5 6 7)))
(print (length (list 1 '(2 3 4) 5 6 7)))

(print (member 'b '(a b c)))
(print (member 'x (list 'u 'v 'w 'x 'y 'z)))
(print (member 'x (list 'a 'b 'c)))
(print "aqui")
(print(member 'a (list 'a 'b 'c (list 'a) 'd)))
(print(member (list 'a) (list 'a 'b 'c (list 'a) 'd)))
(print "oporra")

(print (car '(a b c d e f g)))
(print (cdr '(a b c d e f g)))
(setq j 'blablabla)
(setq k 'socorro)
(print (car (list j 'k 'l 'gk 'd)))
(print (cdr (list j k 'k 'kg 'ddd)))
(print "test")
(print (car (cdr '(a b c d))))
(print (cadr '(a b c d)))
(print (caddr (list 'a '(a b c) 'c 'd 'e 'f 'g 'h 'i j k 'l 'm 'n)))


(print (cons '(a b c) '(d e f)))
(print (cons 'nada ()))
(print (cons 'a '(e f g)))

(print (append '(a b c) '(d e f)))
(print (append '(a) () '(b) '(c d e f g x (x) x)))

(print (butlast '(z x y w d f) 3))
(print (butlast '(z x y w d f)))

(print (list (+ 1 2) (+ 3 4)))
(print (list '(+ 1 2) '(+ 3 4)))

(print (car (member 'c '(a b c d e f))))

(print (setq L '(a b)))
(print L)
(print (setq L1 '(a b) L2 '(c d) N 3))
(print (car L2))
;(print (car L5))

(defun contador () (setq x (+ x 1)))
(print (setq x 0))
(print (contador))
(print (contador))
(print (contador))

;(defun nomefunc (listaParamFormais) (oquefará))

(defun hipotenusa (x y) (sqrt (+ (quadrado x) (quadrado y ))))
(print (hipotenusa 3 4))
(defun F-to-C (temp) 
    (/ (- temp 32) 1.8))

(print (F-to-C 32))

(defun Troca2Primeiros (par) 
    (list (cadr par) (car par)))

(print (Troca2Primeiros '(c a)))

;Predicados
(print (atom 'a))
(print (atom '(a b c)))

(print (listp '(a b c)))
(print (listp 'b))

(print (equal 'a 'a))
(print (equal 'b 'a))

(print (numberp 7))
(print (zerop 3))
(print (minusp -5))
(print (minusp 5))

;Condicional
;(cond (<condicao1> <acao1>) 
;      (<condicao2> <acao2>) )

;(if <condicao> <then> [else_opcional]) 
(defun valor-absoluto (x) 
    (cond ((< x 0) (- x))
          (t x)))

(print (valor-absoluto 5))
(print (valor-absoluto -10))

(print 'numMax)
(defun num-max(a b c)
    (if (> a b) 
        (if(> a c) a c)
;else do primeiro abaixo
    (if(> b c) b c)))

(print(num-max 15 10 12))
(print (F-to-C 100))  
           


; not, and, or
(print (and t t))
(print (or t nil))
(print (or nil nil))


(defun verdadeiro() (print 'aqui) t)

(print (or '() (verdadeiro) (verdadeiro)))
(print (and (verdadeiro) (verdadeiro) nil (verdadeiro)))


;var livres e ligadas
;ligada : do escopo ( aparece na lista de parametros ---  local
; livre : precisa existir antes da chamada           ---  global

(defun incremento(parametro)
        (setq parametro (+ parametro livre))
        (setq saida parametro))


(setq livre 5)
(setq parametro 1000) ; ignorado na funcao incremento, pois é global
(print livre)
(print (incremento 10))
(print saida)
;(print parametro) - unbound - só existe la dentro /\
(print parametro)


;;variaveis locais com let ( cria um escopo local)
;(let ((param1 valorInicial1)
;      (param2 valorInicial2)
;      )
;      <expressoes> 
;)    atribuicao paralelo, para atribuicao sequencial, usar (let*
; psetq - atribuicao setq paralela 

(setq x 30)
(let ((x 3)
     (y 4))
     (print (+ x y))
     
)
(print x)
(makunbound 'x); desamarrar x

(let* ((x 2)
      (y (+ x 8)))
      (print y) 
)

;(makunbound x)
;(makunbound y)
(setq x 1 y (+ x 5))
;(psetq x 1 y (+ x 5))

(setq a 1 b 2)
(print a)
(print b)
(psetq a b b a)
(print a)
(print b)

;passagem por valor sempre
(defun proc(param)
    (setq param (+ param 1))
)

(print (proc 2))
(print (proc 40))
(setq m 10)
(print (proc m))
(print m)

;passagem de funcoes como parâmetro


(defun soma (x y)
    (print 'soma)
    (write (+ x y)))

(defun sub (x y)
    (print 'sub)
    (write (- x y)))

(defun mult (x y)
    (print 'mult)
    (write (* x y)))

;(apply <funcaoNome> <ListadeArgumentos>)
(defun executa (funcao args)
    (apply funcao args))

;(funcall <funcao nome> <arg1> <arg2> <argn>)
(defun executa2 ( funcao arg1 arg2)
        (funcall funcao arg1 arg2)
)

(executa 'soma '(95 2))
(executa2 'sub 8 3)
 

;unless
;(when (doit doit doit doit))

;(do ((var1 inc1)
;     (var2 inc2)
;     (varn incn))
;(teste-saida resultado)
;corpo 
;)

;dolist dotimes
;mapcar repete aplicacao de funcoes - apply ou funcall

(defun tira_elem(x list)
    (do ((l-aux list (cdr l-aux))
         (res '()))
        ((null l-aux) res)
        (if (not(equal (car l-aux) x)) (setq res (cons (car l-aux) res)))))

(print (tira_elem 'b '(a b c a c b)))

(dolist (x '(1 2 3  4 6 8 7)) (if (oddp x) (print x)))

(defun rmv_elem(x list)
    (let ((res '()))
         (dolist (e list res)
             (if (not(equal e x))
                     (setq res (cons e res))))))

(print (rmv_elem 'b '(a b c a c b)))

(dotimes (i 5) (print i))

(print (mapcar 'abs '(1 2 -10 -25 -2)))
(print (mapcar '+ '(1 2 3 4 5) '(10 20 30 40 50)))



 

(defun membro (elemento lista)
	 (cond ((null lista) nil)
	 	   ((equal elemento (car lista)) lista)
	 	   (t (membro elemento (cdr lista)))
	 )

)

(print (membro 5 '(a b 5 c 6 7)))

(defun comprimento(lista)
    (cond ((null lista) 0)
          (t (+(comprimento(cdr lista)) 1)))
    
    )


(print (comprimento '(a b c d e f 7 7 7 7 7)))

(defun enesimo(n lista)
    (cond ((zerop n) (car lista))
          (t (enesimo (- n 1) (cdr lista)))
    )
)

(print(enesimo 5 '(a b c d)))


(defun remove-negativos(x) 
        (cond ((equal x ()) nil)
              ((plusp (car x)) (cons (car x) (remove-negativos (cdr x))))
              (t (remove-negativos (cdr x)))
            
        )
    
)










(print (remove-negativos '(-10 -10 2 -2 -3 -4 -6 -5 -8)))

(defun compr(x)
        (cond ((equal x ()) 0)
              (t (+ 1 (compr (cdr x))))
            
        )
    
    
)

    (print (compr '('a 'b 'c 'd 'e 'f 3 6 4 'gg)))



(defun pertence (x list)
    (cond ((null list) nil)
          ((equal x (car list)) list)
          (t (pertence x (cdr list)))
  )
)
(print "pertence")
(print (pertence 'a '(a c d a a)))



(defun concatena(l1 l2)
    (cond ((equal nil l1) l2)
          (t (cons (car l1) (concatena (cdr l1) l2)))
        
    )
)
(print (concatena '(a b c d) '(e f g h)))

;(if <condicao> <exprthen> [exprelse])
(setq AA 10 BB 20)
(print (if (> AA BB) AA BB))

;(IF (listp L1) (car L1)
; (PROGN (………) (…….) (………))) 
;Combinado com IF, permite que mais de uma expressão seja executada 
;avalia varias expressoes e ;devolve o resultado da ultima

;(when <condicao> exp1 exp2 exp3) 
;Calcula expressoes se condição for não-nula

(defun calculo( x y z)
	(when (not(= x 0)) (setq x (/ 100 y)) (setq z (+ x 20)) (* z 100)
		
	) 
)




https://www.youtube.com/watch?v=CK0paKnXT3g&t=14s
file:///C:/Users/MartManHunter/Google%20Drive/Grad/2019%20-%201/PLP%20-%20Helo%C3%ADsa/P2/LISP2_2019.pdf
file:///C:/Users/MartManHunter/Google%20Drive/Grad/2019%20-%201/PLP%20-%20Helo%C3%ADsa/P2/LISP3_2019.pdf
file:///C:/Users/MartManHunter/Google%20Drive/Grad/2019%20-%201/PLP%20-%20Helo%C3%ADsa/P2/LP_lista2%20Programa%C3%A7%C3%A3o%20Funcional-resolvida.pdf



;(cons 1 '(a b c d e))
;(butlast '(a b c d e) 2)



	