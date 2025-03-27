section .data
    input_string db "himel", 0xA, 0  ; Null-terminated string
    input_len equ $-input_string ; Len of the string (Excluding null terminator)

section .text
    global _start

_start:
    ; Step 1: Initialize the pointer to the input string
    mov esi, input_string   ; Point to the start of the input string

convert_loop:
    ; Step 2: Load the current char
    mov al, byte [esi]      ; Load the current char from the string
    test al, al             ; Test if it's the null terminator (end of string)
    jz done                 ; If it's null we're done

    ; Step 3: Check if the char is a lowercase letter
    cmp al, 'a'             ; Compare with 'a' (ASCII 97)
    jl not_lowercase        ; If less than 'a', it's not a lowercase letter
    cmp al, 'z'             ; Compare with 'z' (ASCII 122)
    jg not_lowercase        ; If greater than 'z', it's not a lowercase letter

    ; Step 4: Covert lowercase to uppercase by subtracting 32
    sub al, 32              ; Convert to uppercase (ASCII difference is 32)

not_lowercase:
    ; Step 5: Store the (Possibly converted) char back into the string
    mov [esi], al           ; Store the char back into the string
    inc esi                 ; Move to the next char in the string
    jmp convert_loop        ; Repeat the loop

done:
    ; Step 6: Print the modified string
    mov eax, 4              ; sys_write
    mov ebx, 1              ; stdout
    mov ecx, input_string   ; Load address of the modified string
    mov edx, input_len      ; Load the len of the string
    int 0x80

    ; Stpe 7: Exit the program
    mov eax, 1              ; sys_exit
    xor ebx, ebx            ; Exit code 0
    int 0x80