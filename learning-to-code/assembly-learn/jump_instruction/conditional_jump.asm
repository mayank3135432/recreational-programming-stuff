# 21:00 14-01-2024
global .start

section .text
_start:
  mov ecx, 100
  mov ebx, 42
  mov eax, 1 ; sys_exit system-call
  cmp ecx, 100 ; compare ecx to 100 
  jl skip ; if cmp is 'less than' (ie ecx<100) jump to 'skip' label
  mov ebx, 13 ; exit status is 13
skip:
  int 0x80 ;syscall
  

