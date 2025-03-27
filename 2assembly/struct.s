section .data
    person db "John", 0     ; Name followed by null terminator
    age db 25               ; Age (single byte, 25)

section .text
    global _start

_start:
    ; Step 1: Print the name ("John")
    mov eax, 4             ; sys_write
    mov ebx, 1             ; stdout
    mov ecx, person        ; Load address of the name string
    mov edx, 4             ; Length of the string "John"
    int 0x80               ; Make the system call

    ; Step 2: Convert age to a string and print it
    mov al, [age]          ; Load the age value (25)
    add al, '0'            ; Convert the number to its ASCII character ('2' or '5')

    ; Print the first digit (if any)
    mov eax, 4             ; sys_write
    mov ebx, 1             ; stdout
    lea ecx, [age]         ; Load address of the digit character
    mov [ecx], al          ; Store the ASCII value of the digit in age
    mov edx, 1             ; We only have one digit to print
    int 0x80               ; Print the first digit

    ; Step 3: Exit the program
    mov eax, 1             ; sys_exit
    xor ebx, ebx           ; Exit code 0
    int 0x80
