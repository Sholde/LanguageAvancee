(defun carre (x)
	(cond
		((numberp x)
			(cond
				((> x 5) (* x x))
				(t nil)
			)
		)
		(t nil)
	)
)
