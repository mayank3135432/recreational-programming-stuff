global _start
section .data
  addr db "yellow"

section .text
_start:
  mov [addr], byte 'H'
  mov [addr + 5], byte '!'
  mov eax, 4 ; write suscall 
  mov ebx, 1 ; stdout file descriptor
  mov ecx, addr ; addr is of type char* 
  mov edx, 6 ; number of bytes to write
  int 0x80

  mov eax, 1
  mov ebx, 0
  int 0x80
