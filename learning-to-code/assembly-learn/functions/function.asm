; 10:06 15-01-2024
global _start

_start:
  call func
  mov eax, 1
  int 0x80

func:
  mov ebx, 42
  ret ;popping top of stack and jumps to instruction after call
