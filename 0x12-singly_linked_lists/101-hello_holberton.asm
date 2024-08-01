section .data
    hello db "Hello, Holberton", 0x0A, 0

section .text
    global _start
    extern printf

_start:
    ; Push the address of the format string onto the stack
    lea rdi, [rel hello]
    xor rax, rax ; Clear RAX to indicate no floating-point values are passed
    call printf

    ; Exit the program
    mov rax, 60  ; System call number for exit (sys_exit)
    xor rdi, rdi ; Exit code 0
    syscall

