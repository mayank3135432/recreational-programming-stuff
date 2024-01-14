# 21:00 14-01-2024
global .start

section .text
_start:
  mov ebx, 42
  mov eax, 1 ; sys_exit system-call
  jmp skip ; jump to 'skip' label
  mov ebx, 13 ; exit status is 13
skip:
  int 0x80 ;syscall
  

;What this program is to skip the 'mov ebx, 13' command on line 9.
; You can check that it is skipped as when you inspect
; the exit code (using "$ echo $?" command), you will
; get 42. Had the jump statement not been, it would
; have printed out output 13 instead
