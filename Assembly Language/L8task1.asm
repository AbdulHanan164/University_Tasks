[org 0x0100]
mov ax, 0xB800   ; Video memory segment
mov es, ax       ; Set ES to video memory segment
mov di, 0        ; DI points to the start of video memory
cls:
    mov word [es:di], 0x0720
    add di, 2
    cmp di, 4000
    jne cls
mov si, body
mov di, 1688
mov cx, 8
print_snake:
    mov al, [si]      ; Character to represent the snake
	mov ah, 0x02     ; Attribute (grey on black)
	mov word [es:di], ax
	add di, 2
    loop print_snake      
mov al, [head]      ; Character to represent the snake
mov ah, 0x02     ; Attribute (grey on black)
mov word [es:di], ax
add di, 1976
mov si, msg	
mov cx, 18
loops:
	mov al, [si]      ; Character to represent the snake
	mov word [es:di], ax
	mov ah, 0x02     ; Attribute (grey on black)
	add si, 1
	add di, 2
	loop loops
mov cx, 8
mov si, position
pos:
	mov al, [si]      ; Character to represent the snake
	mov word [es:di], ax
	mov ah, 0x02     ; Attribute (grey on black)
	add si, 1
	add di, 2
	loop pos
mov cx, 16
mov si, msg2
add di, 108
lengthss:
	mov al, [si]      ; Character to represent the snake
	mov word [es:di], ax
	mov ah, 0x02     ; Attribute (grey on black)
	add si, 1
	add di, 2
	loop lengthss
mov si, lengths
mov al, [si]      ; Character to represent the snake
mov word [es:di], ax
mov ah, 0x02     ; Attribute grey on black
mov ax, 0x4c00   ; Exit program
int 0x21
snake_length dw 10
msg: db 'Position of snake'
body: db '='
head: db 'S'
position: db '(64, 12)'
msg2: db 'Length of snake'
lengths: db '8'