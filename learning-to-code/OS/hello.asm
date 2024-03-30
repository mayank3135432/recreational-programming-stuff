[org 0x7c00]
mov ah, 0x0e

mov bx, varName

loop:
  mov al, [bx]
  cmp al, 0
  je skip
  int 0x10
  inc bx
  jmp loop

skip:

jmp $


varName:
  db "Bye Hello World Hahaha", 0

times 510-($-$$) db 0
dw 0xaa55

