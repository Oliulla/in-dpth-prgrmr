section .bss
    num resb 4   ; Buffer to store converted number

section .text
    global _start

_start:
    ; Push array elements onto the stack (reverse order)
    push dword 40
    push dword 30
    push dword 20
    push dword 10

    mov ecx, 4   ; Number of elements in the array

print_loop:
    cmp ecx, 0   ; Check if all elements are printed
    je done

    pop eax      ; Get the top value from the stack
    call print_number  ; Print the number

    dec ecx      ; Decrement the counter
    jmp print_loop

done:
    ; Exit program
    mov eax, 1   ; sys_exit
    xor ebx, ebx
    int 0x80

; Convert number in EAX to string and print it
print_number:
    mov edi, num + 3   ; Point to the end of buffer
    mov byte [edi], 10 ; Newline character
    dec edi

convert_loop:
    mov edx, 0         ; Clear remainder
    mov ebx, 10        ; Divisor
    div ebx            ; EAX = EAX / 10, remainder in EDX
    add dl, '0'        ; Convert to ASCII
    mov [edi], dl      ; Store character
    dec edi            ; Move buffer pointer left
    test eax, eax      ; Check if quotient is zero
    jnz convert_loop   ; Repeat if not zero

    inc edi            ; Move to the start of the string

    ; Compute length properly
    mov eax, num      ; Load base address of buffer
    add eax, 4        ; num + 4
    sub eax, edi      ; Compute length: (num + 4) - edi
    mov edx, eax      ; Move result to edx

    ; Print the number
    mov eax, 4         ; sys_write
    mov ebx, 1         ; stdout
    mov ecx, edi       ; Pointer to string
    int 0x80

    ret
