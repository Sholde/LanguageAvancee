(setf max_func nil)

(defun is_max (number)
	(cond
		((null max_func) (setf max_func number))
		((numberp number)
				(cond
					((> number max_func) (setf max_func number))
					(t nil)
				)
		)
	)
	max_func
)
