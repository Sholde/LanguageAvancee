(defun my_append (l1 l2)
	(cond
		((null l1) l2)
		((null l2) l1)
		(t (cons (car l1) (my_append (cdr l1) l2)))
	)
)
