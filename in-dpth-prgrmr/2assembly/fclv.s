section .text
    global _start

_start:
    mov eax, 10
    push eax    ; Store value on stack
    call print_msg

    pop eax     ; Restore value

    mov eax, 1
    xor ebx, ebx
    int 0x80

print_msg:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, len
    int 0x80
    ret

section .data
    msg db "Inside Function!", 10
    len equ $-msg