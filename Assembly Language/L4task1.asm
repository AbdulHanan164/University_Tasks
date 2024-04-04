org 0x100     
num1 dw 5     
num2 dw 9       
num3 dw 14      
result dw 0    
mov ax, [num1] 
add ax, [num2] 
add ax, [num3] 
mov [result], ax
mov ax, 0x4c00  
int 0x21       
