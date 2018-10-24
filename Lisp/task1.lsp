( SETQ list1 '(9 ( () 8 88 888) ) )

( SETQ list2 '(H (J K L) (UJN) ) )

( SETQ list3 '(C B (N M I) (T Y U) ) )

;Завдання 1
;Описати неіменованого функцію для об'єднання голів трьох списків в один список

(print ( (lambda (l1 l2 l3) 
			(LIST (CAR l1) (CAR l2) (CAR l3) ) 
		  ) list1 list2 list3 
		)
)

; завдання 2
; Описати іменовану функцію для створення нового списку з елементів декількох вихідних списків

(DEFUN get-elements (l1 l2 l3) 
	(LIST (SECOND l1) (THIRD l2) (THIRD l3))
)

(print (get-elements list1 list2 list3))

; завдання 3
; Написати функцію, яка для заданих координат x1, y1 і x2, y2 повертає відстань між ними

(DEFUN distance (x1 y1 x2 y2) 
	 (sqrt (+ (expt (- x1 x2) 2) (expt (- y1 y2) 2) ) )
)

(print (distance 2 3 -4 5))
