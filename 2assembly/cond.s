section .text
    global _start

_start:
    mov eax, 100
    cmp eax, 50

    jmp conditions
    jmp _exit

_exit:
    mov eax, 1
    xor ebx, ebx
    int 0x80

conditions:
    je its_50
    jl its_less_than_50
    jg its_greater_than_50

its_50:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg1
    mov edx, len1
    int 0x80

    jmp _exit

its_less_than_50:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, len
    int 0x80

    jmp _exit

its_greater_than_50:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg2
    mov edx, len2
    int 0x80

    jmp _exit

section .data
    msg db "Less than 50!", 10
    len equ $-msg

    msg1 db "Equal to 50!", 10
    len1 equ $-msg1

    msg2 db "Greater than 50!", 10
    len2 equ $-msg2