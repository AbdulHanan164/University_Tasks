;Task no 1
org 0x100 ;origination from inseration point 
mov ax,0x4c00 ;Empty Register
mov ax,3 ;intialzing ax=3
mov bx,2;intializing bx=2
add ax,bx;adding both ax and bx
mov ax, 0x4c00; again intialize to zero
int 0x21; interupt to terminate