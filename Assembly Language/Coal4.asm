[org 0x0100]
mov al,val1
mov bx,val2
add bx,ax
Mov cl,val3
Add ax,cx
Add bx,ax
mov [result],bx
mov dl,bl
mov cx,result
mov ax, 0x4c00 
int 0x21
val1: db 5
val2: dw 012h
Val3: db 2 
result: dw 0