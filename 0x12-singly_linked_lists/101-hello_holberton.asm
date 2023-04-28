section .data
	hello db 'Hello, Holberton', 0
	format db '%s\n', 0

section .text
	global main

	extern printf

main:
	; push the format string onto the stack
	mov rdi, format
	; push the hello string onto the stack
	mov rsi, hello
	; call printf with the format string and hello string
	xor eax, eax
	call printf

	; return from the function
	xor eax, eax
	ret
