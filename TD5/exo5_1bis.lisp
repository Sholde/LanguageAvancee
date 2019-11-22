(defun imprime_point (x)
	(cond
		((eq 0 x) nil)
		((> x 0) (cons "." (imprime_point (- x 1))))
		(t "error")
	)
)
