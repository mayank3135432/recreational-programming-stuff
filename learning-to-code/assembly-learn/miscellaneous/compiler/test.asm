global _start
_start:
	mov rax, 60 
	mov rdi, 0 ;from 0 to 255, loops afterwards; 
	syscall
