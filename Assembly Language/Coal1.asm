[org 0x0100]
mov ax, 0 
mov cx, 6
l1:
	add ax, 6 
	dec cx 
	jcxz ending 
	jmp l1 
ending:
mov ax, 0x4c00
int 0x21
