(defun my_remove (symb l)
	(cond
		((null l) nil)
		((eql (car l) symb) (my_remove symb (cdr l)))
		(t (cons (car l) (my_remove symb (cdr l))))
	)
)
