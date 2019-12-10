(defun summit_one (l)
	(apply '+ (remove nil l))
)

(defun summit_two (l)
	(if (null l)
		0
		(let ((x (car l)))
			(if (null x)
				(summit_two (cdr l))
				(+ x (summit_two (cdr l)))
			)
		)
	)
)

(defun summit (liste)
	(cond
		((null liste) 0)
		((atom liste) (cond
							((numberp liste) liste)
							(t 0)
						))
		(t (+ (summit (car liste)) (summit (cdr liste))))
	)
)
