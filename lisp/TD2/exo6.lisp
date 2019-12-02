(defun inverse(l)
	(cond
		((null l) l)
		((atom (car l)) (list (inverse (cdr l)) (car l)))
		(t (list (inverse (cdr l)) (inverse (car l))))
	)
)

(defun rever (l)
	(setf l (inverse l))
)
