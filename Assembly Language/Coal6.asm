[org 0x0100]
mov ax, 0
mov bx, 1
mov cx, [num]
mov dx, 0

fib_loop:
add dx, ax
mov [store], bx
add bx, ax
mov ax, [store]
sub cx, 1
cmp cx, 0
jnz fib_loop

mov [result], dx
mov ax, 0x4c00
int 0x21

store: dw 0
result: dw 0
num: dw 5
