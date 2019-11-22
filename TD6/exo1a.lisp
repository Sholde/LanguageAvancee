(defun consec (l)
	(cond
		((null l) t)
		((atom l) "error")
		((and (and (listp l) (listp (cdr l)) (numberp (car l)) (numberp (car (cdr l)))) (and(< (- (car l)
		(car (cdr l))) 2) (< (- (car (cdr l)) (car l) ) 2))) (consec (cdr l)))
		(t nil)
	)
)
