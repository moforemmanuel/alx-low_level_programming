section .data
    msg DB "Hello, Holberton",10      ; 10 is the ASCII code for a new line (LF)
    msgSize EQU $ - msg

global main

section .text

main:
    mov rax, 4          ; function 4
    mov rbx, 1          ; stdout
    mov rcx, msg        ; msg
    mov rdx, msgSize    ; size 
    int 0x80
    mov rax, 1          ; function 1
    mov rbx, 0          ; code
    int 0x80
    ret
