(defun diff (x y)
	(cond
		((and (numberp x) (numberp y))
			(cond
				((or (eq (- x y) (- 0 1)) (eq (- x y) 1)) t)
				(t nil)
			)
		)
		(t nil)
	)
)

(defun consec (x)
	(cond
		((null x) nil)
		((null (cdr x)) t)
		(t (and (diff (car x) (car(cdr x))) (consec(cdr x))))
	)
)

(defun salut (l)
	(progn
		(setf prec (car l))
		(setf suiv (car l))
		(setf res 
			(dolist (x l t)
				(progn
					(setf prec suiv)
					(setf suiv x)
					(if (not (eq (abs (- prec suiv)) 1))
						(return nil)
					)
					(setf suiv (car (cdr l)))
				)
			)
		)
	)
)
