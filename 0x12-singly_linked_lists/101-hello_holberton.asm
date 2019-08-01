	global main
	section .text
	extern printf

main:	mov	edi, hello
	mov	eax, 0
	call 	printf


	section .data
hello:	db	"Hello, Holberton", 10
