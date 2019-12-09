(defun recur (obj v i)
	(cond
		((eq i (length v)) nil)
		((eq (aref v i) obj) (cons (aref v (- i 1)) (recur obj v (+ i 1))))
		(t (recur obj v (+ i 1)))
	)
)

(defun iter (obj v i)
	(progn
		(setf liste nil)
		(loop while (not (eq i (length v)))
		do (progn
					(if (eq (aref v i) obj) (cons liste (aref v (- i 1))))
					(setf i (+ i 1))
				)
		)
	)
	liste
)

(defun precede (obj v)
	(cond
		((eq 0 (length v)) "pb")
		((eq 1 (length v)) nil)
		(t (recur obj v 1))
	)
)
