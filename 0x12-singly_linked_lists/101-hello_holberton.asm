; File: 101-hello_holberton.asm
; Auth: Maurice Humado
; Desc: 64-bit assembly program that prints
;       Hello, Holberton followed by a new line.

extern printf

 	section .data
 msg:		db "Hello, Holberton", 0
 fmt:		db "%s", 10, 0

 	section .text

 	global start
 start:
 	push	rbp
 	mov	rdi,fmt
 	mov	rsi,msg
 	mov	rax,0
 	call	printf
 	pop	rbp
