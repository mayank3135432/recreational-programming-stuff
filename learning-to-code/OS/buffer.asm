[org 0x7c00]



mov bx, buffer


loop:

mov ax, 0
int 0x16

cmp al, 13 ; 13 is CR (carriage return) ie Enter key
je skip
mov ah, 0x0e

mov [bx], al
int 0x10
inc bx

jmp loop

skip:
mov al, 0
mov [bx], al


mov bx, buffer
print:
  mov al, [bx]
  cmp al, 0
  je exit
  int 0x10
  inc bx
  jmp print

exit:
  jmp $

buffer:
  times 10 db 0

times 510-($-$$) db 0
dw 0xaa55

