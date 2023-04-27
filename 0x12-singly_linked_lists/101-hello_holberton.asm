global    main                ; the standard gcc entry point
extern    printf              ; the C function, to be called

section .data                ; Data section, initialized variables
msg:      db "Hello, Holberton", 0 ; C string needs 0
fmt:      db "%s", 10, 0          ; The printf format, "\n",'0'

section .text                ; Code section.

main:                         ; the program label for the entry point
    push rbp                  ; Set up stack frame, must be aligned
    mov rdi, fmt              ; Move the address of fmt to rdi (first argument for printf)
    mov rsi, msg              ; Move the address of msg to rsi (second argument for printf)
    mov rax, 0                ; or can be  xor  rax,rax (set rax to 0)
    call printf               ; Call the printf function with the format string and message
    pop rbp                   ; Restore stack
    mov rax, 0                ; Normal, no error, return value
    ret                       ; Return from main
