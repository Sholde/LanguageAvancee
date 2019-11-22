(defun all_number (l)
	(cond
		((null l) t)
		((atom l) "error")
		(t (and (numberp (car l)) (all_number(cdr l))))
	)
)
