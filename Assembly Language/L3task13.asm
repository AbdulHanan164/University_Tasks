org 0x100
mov al,7Ah
not al ; a.
mov al,3Dh
and al,74 ; b.
mov al,9Bh
or al,35 ; c.
mov al,72
xor al,0DCh ; d.
mov ax,0x4c00
int 0x21