[org 0x0100]

start:
    mov ax, 4
    mov cx, 2
check_divisor:
    cmp cx, ax
    jge prime
    mov [divisor], cx
    mov [number], ax
    jmp dividing
dividing_exit:
    mov cx, [divisor]
    mov ax, [number]
    cmp ax, 0
    jz prime
    cmp dx, 0
    jz not_prime
    inc cx
    jmp check_divisor
dividing:
    mov dx, 0
    mov bx, 0
div_loop:
    cmp ax, cx
    jl div_exit
    sub ax, cx
    inc bx
    jmp div_loop
div_exit:
    mov dx, ax
    mov ax, bx
    jmp dividing_exit
prime:
    mov ax, 0FFF0h
    mov bx, 0FFFFh
    mov cx, 0FFF0h
    mov dx, 0F000h
    jmp ending
not_prime:
    mov ax, 0F00Fh
    mov bx, 0FF0Fh
    mov cx, 0F0FFh
    mov dx, 0F00Fh
    jmp ending
ending:
    mov ax, 4C00h
    int 21h

divisor: dw 0
number: dw 0
