section .data
    hello db "Hello, Holberton", 10, 0  ; The message to be printed with a newline character

section .text
    global main
    extern printf

main:
    push rdi
    lea rdi, [hello]
    call printf
    add rsp, 8  ; Restore the stack pointer
    ret

