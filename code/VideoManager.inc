PROC SetTextMode

push ax ; Remember current AX

mov ah, 0 ; Set interrupt mode to change video mode
mov al, 02h ; Set video mode parameter to text mode
int 10h ; Interrupt DOS

pop ax ; Retrieve original AX
ret ; Return to previous code

ENDP SetTextMode

PROC SetVideoMode

push ax ; Remember current AX

mov ah, 0 ; Set interrupt mode to change video mode
mov al, 13h ; Set video mode parameter to RGB 320x200 mode
int 10h ; Interrupt DOS

pop ax ; Retrieve original AX
ret
ENDP