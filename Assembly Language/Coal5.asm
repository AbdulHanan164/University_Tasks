[org 0x0100]
start:
    mov bx, data_array
    mov cx, 0
    mov si, 0

outer_loop:
    mov si, 0

inner_loop:
    mov ax, [bx + si]
    cmp si, 24
    je end_outer_loop

    cmp ax, [bx + si + 2]
    jle continuing_loop

    mov dx, [bx + si + 2]
    mov [bx + si + 2], ax
    mov [bx + si], dx

continuing_loop:
    add si, 2
    jmp inner_loop

end_outer_loop:
    add cx, 2
    cmp cx, 13
    je end_loop
    jmp outer_loop

end_loop:
    mov ax, 0x4c00
    int 0x21

data_array: dw 2,-5,5,0,12,90,48,3,6,0,80,-9
