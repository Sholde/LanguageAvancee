;;list
(defun mylist (&rest ll)
	ll
)

;;list avec au moins 1 argument
(defun mylist_one(l &rest ll)
	(cons l ll)
)
