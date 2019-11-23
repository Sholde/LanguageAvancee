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
