(defun my_rever (l)
	(cond
		((null l) l)
		(t (append (my_rever (cdr l)) (list (car l))))
	)
)

(defun rever (l)
	(cond
		((null l) l)
		((atom l) l)
		(t (append (rever (cdr l)) (list (rever (car l)))))
	)
)
