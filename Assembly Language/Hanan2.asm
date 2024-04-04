;Task no 2
org 0x100 ;origination from inseration point 
mov ax,0x4c00 ;Empty Register
mov ax,3 ;intialzing ax=3
mov bx,1;intializing bx=1
sub ax,bx;subtracting both ax and bx
mov ax, 0x4c00; again intialize to zero
int 0x21; interupt to terminate