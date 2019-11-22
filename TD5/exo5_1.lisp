(defun imprime_point (x)
	(if(< 0 x)
		(progn
			(format t ".")
			(imprime_point (- x 1))
		)
	)
)
