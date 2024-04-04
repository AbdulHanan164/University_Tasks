[org 0x0100]

start:
    mov si, binary_num 
    mov al, 0 
    mov cl, 7 

conversion_loop:
    mov bl, [si] 
    add al, bl 
    shl ax, 1 
    inc si 
    dec cx 
    cmp cx, 0 
    jnz conversion_loop 

ending:
    mov ax, 0x4c00 
    int 0x21

binary_num: db 1,0,1,0,1,0,1,0 
