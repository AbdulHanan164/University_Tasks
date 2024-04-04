[org 0x100]
mov ax,17
shl ax,1
mov bx,ax
shl ax,1
add ax,bx
mov ax,0x4c00
int 0x21