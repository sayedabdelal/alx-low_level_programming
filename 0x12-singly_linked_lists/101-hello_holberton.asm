section .data
	hello db 'Hello, Holberton', 0
	newline db 10, 0

section .text
	global main

	extern printf

main:
	; push the hello string onto the stack
	mov rdi, hello
	; call printf with the hello string
	xor eax, eax
	call printf

	; push the newline string onto the stack
	mov rdi, newline
	; call printf with the newline string
	xor eax, eax
	call printf

	; return from the function
	xor eax, eax
	ret
