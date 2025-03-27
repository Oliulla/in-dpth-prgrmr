section .data
    message db "Hello, Assembly!", 10   ; Message + Newline
    len equ $-message                   ; Message len

section .text
    global _start

_start:
    mov eax, 4      ; sys_write
    mov ebx, 1      ; stdout
    mov ecx, message
    mov edx, len
    int 0x80        ; Call karnel


    mov eax, 1      ; sys_exit
    xor ebx, ebx
    int 0x80