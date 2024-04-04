org 0x100
num1: db 30
num2: db 18
result db 0
mov al, [num1]     
mov bl, [num2]  
sub al, bl        
mov [result], al 
mov ax, 0x4c00     
int 0x21
