;JB
; [org 0x0100]
; mov ax, 5      
; mov bx, 7   
; cmp ax, bx    
; jb below_than  
; jmp not_below  
; below_than:
    ; add ax,bx
    ; int 0x21
; not_below:
    ; mov ax, 0x4c00  
    ; int 0x21
;JG
 ; [org 0x0100]
 ; mov ax, 8      
 ; mov bx, 7   
 ; cmp ax, bx    
 ; jg Greater_than  
 ; jmp not_Greater 
 ; Greater_than:
     ; add ax,bx
     ; int 0x21
 ; not_Greater:
    ; mov ax, 0x4c00  
     ; int 0x21
;JL
 [org 0x0100]
  mov ax, 6      
 mov bx, 7   
 cmp ax, bx    
 jl Less_than  
 jmp not_Less 
 Less_than:
     add ax,bx
     int 0x21
 not_Less:
     mov ax, 0x4c00  
     int 0x21
;Jmp
; [org 0x0100]
; start:
    ; mov ax, 0
    ; jmp end_program ; Unconditionally jump to end_program
; end_program:
    ; mov ax, 0x4c00  
    ; int 0x21

	