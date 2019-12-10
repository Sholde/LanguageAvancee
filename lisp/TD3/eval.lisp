(defun my_eval (liste)
	(cond
		((null liste) 0)
		((numberp liste) liste)
		((null (cadddr liste)) (eval (list (cadr liste) (my_eval (car liste)) (my_eval (caddr liste)))))
		(t (my_eval (push (eval (list (cadr liste) (my_eval (car liste)) (my_eval (caddr liste)) (cddr liste))))))
	)
)
