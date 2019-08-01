	global main
	section .text
	extern printf

main:	mov	edi, hello
	mov	eax, 0
	call 	printf

	mov	rax, 60
	mov	rdi, 0
	syscall


	section .data
hello:	db	"Hello, Holberton", 10
