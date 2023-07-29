msg db 'Hello, Holberton',10    ; The string to be printed

global main
extern printf

main:
	mov   edi, msg
	xor   eax, eax
	call  printf
	mov 	eax, 0
	ret

