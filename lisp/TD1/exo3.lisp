(defun maxi (x y)
	(if (and (numberp x) (numberp y))
		(if (< x y)
			y
			x
		)
	)
)
