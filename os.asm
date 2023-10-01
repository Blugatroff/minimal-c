section .note.GNU-stack noalloc noexec nowrite progbits

global write
global _start
extern main

section .text
write:
    mov rax, 1
    syscall
    ret

_start:
    pop rdi
    mov rsi, rsp
    call main
    mov rax, 60
    mov rdi, 0
    syscall

