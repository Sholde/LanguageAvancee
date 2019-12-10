(setf prec nil)

(defun is_sup_prec (number)
	(cond
		((null prec) nil)
		((numberp number)
				(cond
					((> number prec) (progn
															(setf max_func number)
															t
														)
					)
					(t nil)
				)
		)
	)
)
