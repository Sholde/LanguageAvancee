(defun somme_ite (l &optional (res 0))
	(cond
		((null l) res)
		(t (somme (cdr l) (+ res (car l))))
	)
)

(defun somme (l)
	(cond
		((null l) 0)
		(t (+ (car l) (somme (cdr l))))
	)
)

;; funcall
(defun myplus (&rest ll)
	(cond
		((null ll) 0)
		(t (+ (car ll) (apply 'myplus (cdr ll))))
	)
)
