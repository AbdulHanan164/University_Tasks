[org 0x0100]

jmp start
data: dw 60, 55, 45, 50, 40, 35, 25, 30, 10, 0
data2: dw 328, 329, 898, 8923, 8293, 2345, 10, 877, 355, 98
dw 888, 533, 2000, 1020, 30, 200, 761, 167, 90, 5
swap: dw 0

bubblesort:
    dec cx                ;decrementing cx, last element not compared
	mov si, 0             ;resetting si to zero for each pass
    mov byte [swap], 0    ;resetting swap flag for each pass
    
innerloop:
    mov ax, [bx+si]       ;loading number in ax
    cmp ax, [bx+si+2]     ;comparing with next number
    jbe noswap            ;no swapping if numbers are already in order
    mov dx, [bx+si+2]     ;loading second element in DX
    mov [bx+si], dx       ;storing first number in second
    mov [bx+si+2], ax     ;storing second number in first
    mov byte [swap], 1   ;flag that a swap has been done
	
noswap:
    add si, 2             ;advancing si to next index
    cmp si, cx            ;comparing are we at last index?
    jle innerloop         ;if not, comparing next two

    cmp byte [swap], 1    ;checking if a swap has been done
    je bubblesort           ;if yes, make another pass
    ret                   ;if no swaps, return

start:
    mov bx, data          ;sending start of array in bx
    mov cx, 20            ;sending count of elements in cx
    call bubblesort       ;calling our subroutine

    mov bx, data2         ;sending start of array in bx
    mov cx, 40            ;sending count of elements in cx
    call bubblesort       ;calling our subroutine again

    mov ax, 0x4c00        ;terminating program
    int 0x21