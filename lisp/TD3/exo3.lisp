(defun recur (liste i)
	(cond
		((null liste) nil)
		((atom liste) liste)
		(t (cons (+ (car liste) i) (recur (cdr liste) (+ i 1))))
	)
)

(defun pos+ (liste)
	(recur liste 0)
)
