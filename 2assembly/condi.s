section .text
    global _start

_start:
    mov eax, 100
    cmp eax, 100

    jmp conditions
    jmp _exit

_exit:
    mov eax, 1
    xor ebx, ebx
    int 0x80

conditions:
    je is_century
    jl is_less_than_100
    jg is_greater_than_100

is_century:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, len
    int 0x80

    jmp _exit

is_less_than_100:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, len
    int 0x80

    jmp _exit

is_greater_than_100:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, len
    int 0x80

    jmp _exit

section .data
    msg db "Century!", 10
    len equ $-msg

    msg1 db "Less than 100!", 10
    len1 equ $-msg1

    msg2 db "Greater than 100!", 10
    len2 equ $-msg2