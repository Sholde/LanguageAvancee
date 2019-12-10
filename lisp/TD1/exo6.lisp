; Cherche si la liste contient une list vide au 1er niveau
(defun enigme(X)
	(and	(not (null X))
			(or (null (car X))
				(enigme (cdr X))
			)
	)
)

; Cherche l' indice ou se touve x
(defun mystere (X Y)
	(if (null Y)
		nil
		(if (eql (car Y) X)
			0
			(let ((Z (mystere X (cdr Y))))
				(and Z (+ Z 1))
			)
		)
	)
)
