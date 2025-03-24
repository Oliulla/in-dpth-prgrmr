section .text
    global _start

_start:
    mov eax, 10
    cmp eax, 5
    jg greater_than_five    ; Jump if eax > 5

    ; If eax <= 5, exit
    mov eax, 1
    xor ebx, ebx
    int 0x80

greater_than_five:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, len
    int 0x80

    mov eax, 1
    xor ebx, ebx
    int 0x80

section .data
    msg db "Greater than 5", 10
    len equ $-msg