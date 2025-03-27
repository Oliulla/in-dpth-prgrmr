section .data
    message db "Hello, World!!!", 10   ; Message + Newline
    len equ $-message  ; Length of message

section .text
    global _start
_start:
    mov eax, 4    ; sys_write
    mov ebx, 1    ; stdout
    mov ecx, message  ; Address of message
    mov edx, len  ; Length
    int 0x80      ; Call kernel

    mov eax, 1    ; sys_exit
    xor ebx, ebx  ; Exit code 0
    int 0x80      ; Call kernel
