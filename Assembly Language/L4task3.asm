org 0x100
mov ax,0
mov ax, [x]      
add ax, [y]      
sub ax, 3        
mov [result1], ax 
mov ax, [result1]  
sub ax, 9        
add ax, [y]        
mov [result2], ax  
mov ax, 0x4c00  
int 0x21
x dw 5
y dw 10
result1: dw 0
result2: dw 0
