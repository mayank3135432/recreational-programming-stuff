[org 0x7c00]

char:
mov ax, 0 ; waits for key press
int 0x16 ; Sends ASCII input to al and BIOS scancode to ah

mov ah, 0x0e ; Switches to tty mode

int 0x10 ; print the char

jmp char ; repeat



times 510-($-$$) db 0
dw 0xaa55

