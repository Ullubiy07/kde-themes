; Hello World — NASM, x86 32-bit Linux.
bits 32
global _start

section .rodata
    message db "Hello, World!", 10
    length equ $ - message

section .text
_start:
    ; write(stdout, message, length)
    mov eax, 4
    mov ebx, 1
    mov ecx, message
    mov edx, length
    int 0x80

    ; exit(0)
    mov eax, 1
    xor ebx, ebx
    int 0x80
