(defun my_equal(x y)
	(cond
		((eq x y) t)
		((or (atom x) (atom y)) (eq x y))
		(t (and (my_equal (car x) (car y)) (my_equal (cdr x) (cdr y))))
	)
)
