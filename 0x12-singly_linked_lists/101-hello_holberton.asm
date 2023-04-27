extern printf

section .text
	global main
main:
	mov edi, format
	xor eax, eax
	call printf
	mov eax, 0
	ret
format db 'Hello, Holberton', 10, 0
