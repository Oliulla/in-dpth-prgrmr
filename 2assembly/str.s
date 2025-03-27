section .data
    msg db "Hello, Advanced Assembly!", 0xA, 0   ; Null-terminated string
    len equ $-msg                           ; Len of string

section .text
    global _start


_start:
    mov eax, 4          ; sys_write
    mov ebx, 1          ; stdout
    mov ecx, msg        ; Load address of string
    mov edx, len        ; Load len
    int 0x80

    mov eax, 1
    xor ebx, ebx
    int 0x80