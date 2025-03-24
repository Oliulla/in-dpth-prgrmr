section .text
    global _start

_start:
    mov eax, 5      ; Store 5 in EAX
    mov ebx, 10     ; Store 10 in EBX
    add eax, ebx    ; EAX = EAX + EBX (5 + 10)

    mov eax, 1      ; sys_exit
    xor ebx, ebx    ; Exit code 0
    int 0x80        ; Call kernel