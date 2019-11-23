(defun enigme(X)
	(and	(not (null X))
			(or (null (car X))
				(enigme (cdr X))
			)
	)
)

(defun mystere (X Y)
	(if (null Y)
		nil
		(if (eql (car Y) X)
			0
			(let ((Z (mystere X (cdr Y))))
				(and Z (+ Z 1))
			)
		)
	)
)
