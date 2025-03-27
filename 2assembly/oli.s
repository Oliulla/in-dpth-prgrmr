section .data
    msg db "Oliullah", 10
    len equ $-msg

section .text
    global _start

_start:
    mov eax, 4
    mov ebx, 1
    mov ecx, msg
    mov edx, len
    int 0x80

    mov eax, 1
    xor ebx, ebx
    int 0x80
    

; Step 1: Declare the string variable (msg) and calculate its length (len)
; Step 2: Define the global entry point (_start) for the program
; Step 3: Set eax = 4 to invoke the sys_write system call (to write data to stdout)
; Step 4: Set ebx = 1 to specify stdout (file descriptor 1)
; Step 5: Set ecx = msg to provide the address of the string to write
; Step 6: Set edx = len to specify the length of the string to write
; Step 7: Set eax = 1 to invoke the sys_exit system call (to exit the program)
; Step 8: Set ebx = 0 (using xor ebx, ebx) to indicate a successful exit status
; Step 9: Trigger the interrupt int 0x80 to make the system calls to the kernel
