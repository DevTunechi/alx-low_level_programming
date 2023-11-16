section .data
	hello db 'Hello, Holberton', 0

section .text
	global main
	extern printf

main:
	push rdi ; Preserve the value of rdi
	lea rdi, [hello] ; Load the address of the hello string into rdi
	call printf ; Call the printf function
	pop rdi ; Restore the value of rdi
	ret ; Return from the program, \n
