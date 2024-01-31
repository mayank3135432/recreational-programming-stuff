;11:15 30-Jan-2024

global .start
section .data
  A db 2
  B db 3
  C db 8
  D db 2
  
section .text
_start:
  push db [A]
  push db [B]
  add 
  push db [C]
  push db [D]
  add
  mul
  pop rdi

  ; exit
  mov rax, 0x3c
  syscall

