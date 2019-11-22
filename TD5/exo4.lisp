(defun list_in_listp (l)
		(cond
			((null l) nil)
			((atom l) "error")
			(t (or (listp (car l)) (list_in_listp (cdr l))))
		)
)
