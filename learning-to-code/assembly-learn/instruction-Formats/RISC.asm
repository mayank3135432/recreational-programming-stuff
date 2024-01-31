# 09:45 15-Jan-2024
; This is x86_64 assembly.
; the registers are different, and syscall invocation is 'syscall' instead of 'int x80'

# assemblr and link via the following bash commands
; nasm -f elf64 stringstack.asm -o stringstack.o
; ld -m elf_x86_64 stringstack.o -o stringstack
; ./stringstack


global _start

section .data
  A db 13
  B db 7
  C db 2
  D db 3

section .text
_start:
  mov r10, [A]
  mov r11, [B]
  mov r12, [C]
  mov r13, [D]

  ; write
  mov rax, 1
  mov rdi, 1 ; stdout
  mov rsi, rsp
  mov rdx, 4
  syscall ; systemcall invocation in x86_64

  ; exit
  mov rax, 0x3c
  mov rdi, 0
  syscall
