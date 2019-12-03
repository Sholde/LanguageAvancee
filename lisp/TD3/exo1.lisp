(defun maxi (x y)
	(if (< x y) y x)
)

(defun mini (x y)
	(if (< x y) x y)
)


(defun min_max_bis (v i minima maxima)
	(if (eq i (length v))
		(list minima maxima)
		(min_max_bis v (+ 1 i) (mini (aref v i) minima) (maxi (aref v i) maxima))
	)
)

(defun min_max (v)
	(cond
		((eq 0 (length v)) "pb")
		((eq 1 (length v)) (aref v 0))
		(t (min_max_bis v 2 (aref v 0) (aref v 0)))
	)
)
