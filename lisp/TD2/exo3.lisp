(defun mystery (x y)
	(cond
		((null y) nil)
		((eql (car y) x) 0)
		(t (let ((z (mystery x (cdr y))))
			(and z (+ z 1)))
		)
	)
)
