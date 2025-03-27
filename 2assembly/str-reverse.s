section .data
    input_string db "Hello, World!", 0      ; Null-terminated string
    input_len equ $-input_string            ; Len of the string

section .bss
    reversed_string resb input_len          ; Reserve space for the reversed string

section .text
    global _start

_start:
    ; Step 1: Push the string onto the stack
    mov esi, input_string                   ; Point to the start of the input string
    mov ecx, input_len                      ; Set loop counter tho the len of the string

push_loop:
    mov al, byte [esi]                      ; Load the current char
    push eax                                ; Push the char onto the stack
    inc esi                                 ; Move to the next char
    loop push_loop                          ; Repeat until we've pushed all chars

    ; Step 2: Pop chars from the stack and store them in reversed_string
    mov edi, reversed_string                 ; Point to the reversed string buffer
    mov ecx, input_len                      ; Set loop counter to the len of the string

pop_loop:
    pop eax                                 ; Pop the char from the stack
    mov [edi], al                           ; Stroe the popped char in the reversed string
    inc edi                                 ; Move to the next position in the reversed string
    loop pop_loop                           ; Repeat until we've popped all chars

    ; Step 3: Print the reversed string
    mov eax, 4                              ; sys_write
    mov ebx, 1                              ; stdout
    mov ecx, reversed_string                ; Load address of reversed string
    mov edx, input_len                      ; Load length of string
    int 0x80


    ; Exit program
    mov eax, 1                              ; sys_exit
    xor ebx, ebx                            ; Exit code 0
    int 0x80