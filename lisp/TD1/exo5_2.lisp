(defun nb_fois_a (l)
	(cond
		((null l) 0)
		((atom l) "error")
		((and (symbolp (car l)) (eql (car l) 'a)) (+ 1 (nb_fois_a(cdr l))))
		((listp (car l)) (+ (nb_fois_a(car l)) (nb_fois_a(cdr l))))
		(t (nb_fois_a(cdr l)))
	)
)
