
[org 0x0100]
mov bx, num2
mov si, num1
mov cx, 24
mov ax, 0
mov al, 0
l1:
    add ax, [bx]
    add dl, [si]
    add bx, 2    
    add si, 1    
    sub cx, 1
    jnz l1

mov [sum], ax
mov ax, 0x4c00
int 0x21
num1: db 20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43
num2: dw 20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43
sum dw 0