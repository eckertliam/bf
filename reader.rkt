#lang racket

;; > = increases memory pointer 'imp
;; < = decreases memory pointer 'dmp
;; + = increases value stored 'inc
;; - = decreases value stored 'dec
;; [ = while 'open
;; ] = if block currently pointed to's value is not zero, jump back to [ 'close
;; , = getchar 'get
;; . = putchar 'put

(define/match (tokenize-ch ch)
  [(#\>) 'imp]
  [(#\<) 'dmp]
  [(#\+) 'inc]
  [(#\-) 'dec]
  [(#\[) 'open]
  [(#\]) 'close]
  [(#\,) 'get]
  [(#\.) 'put]
  [(#\newline) 'whitespace]
  [(#\space) 'whitespace]
  [(_) (error "Unkwown char" ch)])

(define (tokenize src)
  (cond
    [(null? src) '()]
    [else (cons (tokenize-ch (car src))
                (tokenize (cdr src)))]))

(define (read-bf src)
  (tokenize (string->list src)))

(provide read-bf)
