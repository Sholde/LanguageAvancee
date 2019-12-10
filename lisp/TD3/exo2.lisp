(defun remove_doublon (liste)
	(cond
		((null liste) nil)
		(t (cons (car liste) (remove_doublon (remove (car liste) (cdr liste)))))
	)
)

(defun recur (obj v i)
	(cond
		((eq i (length v)) nil)
		((eq (aref v i) obj) (cons (aref v (- i 1)) (recur obj v (+ i 1))))
		(t (recur obj v (+ i 1)))
	)
)

(defun precede (obj v)
	(cond
		((eq 0 (length v)) "pb")
		((eq 1 (length v)) nil)
		(t (remove_doublon (recur obj v 1)))
	)
)

(defun iter (obj v)
	(setf res nil)
	(do ((i 1 (+ i 1)))
			((eq i (length v)))
			(if (eq obj (aref v i))
					(setf res (cons (aref v (- i 1)) res ))
					nil
			)
	)
	res
)

(defun precede_iter (obj v)
	(cond
		((eq 0 (length v)) "pb")
		((eq 1 (length v)) nil)
		(t (remove_doublon (iter obj v)))
	)
)

(defun correction (symb ch &optional (i 1) (res nil))
	(cond
		((= i (length ch)) res)
		((eq symb (aref ch i)) (correction symb ch (+ i 1) (cons (aref ch (- i 1)) res)))
		(t (correction symb ch (+ i 1) res))
	)
)

(defun correct_prof (symb ch &optional (i 1))
	(cond
		((>= i (length ch)) nil)
		((eq (aref ch i) symb) (cons (aref ch (- i 1)) (correct_prof symb ch (+ i 1))))
		(t (correct_prof symb ch (+ i 1)))
	)
)
