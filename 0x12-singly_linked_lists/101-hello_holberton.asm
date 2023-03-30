section .data
    hello db 'Hello, Holberton', 0Ah ; the string to be printed

section .text
    global main
    extern printf

main:
    push rbp
    mov rbp, rsp

    lea rdi, [hello] ; load the address of the string into rdi
    xor eax, eax     ; zero out eax
    call printf      ; call printf with the format string in rdi

    mov rsp, rbp
    pop rbp
    ret
