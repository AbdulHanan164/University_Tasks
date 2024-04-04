[org 0x0100]

jmp start

Num1 dw 60,55,45,50,40,35,25,30,10,0
swap db 0

start:
    mov bx, 0
    mov byte [swap], 0  ; set flag to zero       
inner_loop:
    mov ax, [Num1+bx]
    cmp ax, [Num1+bx+2]
    jge no_swap       

    ; swapping
    mov dx, [Num1+bx+2]
    mov [Num1+bx+2], ax
    mov [Num1+bx], dx
    mov byte [swap], 1  ; set flag to indicate swapping

no_swap:
    add bx, 2
    cmp bx, 18          ; adjust loop limit 
    jne inner_loop

    cmp byte [swap], 1
    je start       ; if swapping occurred repeat the process

    ; exit
    mov ax, 0x4c00
    int 0x21
