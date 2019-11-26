(defun maxi (x y)
	(if (< x y) y x)
)

(defun mini (x y)
	(if (< x y) x y)
)

(defun min_max_bis (l minima maxima)
	(if (null l)
		(list minima maxima)
		(min_max_bis (cdr l) (mini (car l) minima) (maxi (car l) maxima))
	)
)

(defun min_max (l)
	(cond
		((null l) "pb")
		((null (cdr l)) (list (car l) (car l)))
		(t (min_max_bis (cdr l) (car l) (car l)))
	)
)

(defun prod_max (l)
	(let (
			(max1 (cadr (min_max l))))
			(let (
				(max2 (cadr (min_max (remove max1 l)))))
				(* max1 max2)
			)
	)
)
