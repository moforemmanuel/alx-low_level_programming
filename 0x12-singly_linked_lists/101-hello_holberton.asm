extern printf

section .text
    global main

main:
    push rbp

    mov rdi,fmt
    mov rsi,msg
    mov rax,0
    call printf

    pop rbp

    mov rax,0
    ret

sectionn .data
    msd: db "Hello, Holberton", 0
    fmt: db "%s", 10, 0
