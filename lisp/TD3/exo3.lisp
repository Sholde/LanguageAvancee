(defun recur (liste &optional (i 0))
	(cond
		((null liste) nil)
		((atom liste) liste)
		(t (cons (+ (car liste) i) (recur (cdr liste) (+ i 1))))
	)
)

(defun pos+ (liste)
	(iter liste)
)

(defun iter (liste)
	(setf res nil)
	(do ((i 0 (+ i 1)) (liste liste (setf liste (cdr liste))))
			((null liste))
			(setf res (cons (+ (car liste) i) res))
	)
	(reverse res)
)

;;si la fonction est associative et possède 1 élément neutre on peut décursiver sinon pas passible
(defun decusive (l &optional (i 0) (res nil))
	(cond
		((null l) res)
		((consp l) (decusive (cdr l) (+ i 1) (append res (list (+ i (car l))))))
	)
)

(defun correct_iter (l)
	(loop for i in l
		for j from 0 to (- (length l) 1)
			collect (+ i j)
	)
)
