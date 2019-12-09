(defun interspace (obj liste)
	(cond
		((null liste) nil)
		((null (cdr liste)) (list (car liste)))
		(t (cons (car liste) (cons obj (interspace obj (cdr liste)))))
	)
)
