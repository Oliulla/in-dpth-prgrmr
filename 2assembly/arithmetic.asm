section .text
    global _start

_start:
    mov eax, 15     ; Store 15 in eax
    mov ebx, 5      ; Store 5 in ebx
    sub eax, ebx    ; eax = eax-ebx (15-5)

    mov eax, 1      ; sys_exit
    xor ebx, ebx    ; Exit code 0
    int 0x80        ; Call kernel