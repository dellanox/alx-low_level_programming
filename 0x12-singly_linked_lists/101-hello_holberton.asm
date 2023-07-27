section .data
    hello_msg db "Hello, Holberton",0
    fmt db "%s",10,0

section .text
    extern printf, exit

global main

main:
    ; Call printf with the hello_msg argument
    mov rdi, fmt
    mov rsi, hello_msg
    xor rax, rax
    call printf

    ; Exit the program
    xor rdi, rdi
    call exit
