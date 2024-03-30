mov ah, 0x0e
; H
mov al, 72
int 0x10

; E
mov al,69
int 0x10

; L
mov al, 76
int 0x10

int 0x10

; O
mov al, 79
int 0x10

; 
mov al, 32
int 0x10

; W
mov al, 87
int 0x10

; O
mov al, 79
int 0x10

; R
mov al, 82
int 0x10

; L
mov al, 76
int 0x10

; D
mov al, 68
int 0x10

jmp $

times 510-($-$$) db 0
db 0x55, 0xaa
