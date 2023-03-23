#lang racket

(require "reader.rkt")

(define imp "ptr++;\n")

(define dmp "ptr--;\n")

(define inc "++*ptr;\n")

(define dec "--*ptr;\n")

(define open "while(*ptr) {\n")

(define close "}\n")

(define whitespace "")

(define put "putchar(*ptr);\n")

(define get "*ptr = getchar();\n")

(define (parse-tokens tokens)
  (cond
    [(null? tokens) '()]
    [else (cons (eval (car tokens))
                (parse-tokens (cdr tokens)))]))

(define (parse src)
  (eval (flatten (list 'string-append
                       "#include <stdio.h>\n"
                       "int main() {\n"
                       "char tape[10000];\n"
                       "char *ptr = tape;\n"
                       (parse-tokens (read-bf src))
                       "}"))))

(define (parse-file fpath)
  (parse (file->string fpath)))

(define (compile-file fpath outpath)
  (with-output-to-file outpath
    #:exists 'replace
    (lambda ()
      (printf (parse-file fpath)))))
