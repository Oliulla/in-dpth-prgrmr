section .text
    global _start

_start:
    mov eax, 12
    cmp eax, 12
    jmp conditions

    jmp _exit

_exit:
    mov eax, 1
    xor ebx, ebx
    int 0x80

conditions:
    je jump_equal_12
    jl jump_less_than_12    
    jg jump_greater_than_12

jump_equal_12:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg3
    mov edx, len
    int 0x80

    jmp _exit

jump_less_than_12:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, len
    int 0x80

    jmp _exit

jump_greater_than_12:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg2
    mov edx, len2
    int 0x80

section .data
    msg db "Less than 12", 10
    len equ $-msg

    msg2 db "Greater than 12", 10
    len2 equ $-msg2

    msg3 db "Equal to 12", 10
    len3 equ $-msg3
