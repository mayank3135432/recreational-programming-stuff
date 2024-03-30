mov ah, 0x0e
mov al, 'a'
int 0x10

loop:
  inc al
  cmp al, 'z'+1
  je exit
  
  test al, 1
  jnz skip
  sub al,32
  int 0x10
  add al,32
  jmp loop
skip:
  int 0x10
  jmp loop

exit:
  jmp $
times 510-($-$$) db 0
db 0x55, 0xaa
