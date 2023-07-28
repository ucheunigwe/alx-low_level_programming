section .data
    hello db "Hello, Holberton", 0

section .text
    global main

extern printf

main:
    ; Clear XMM registers to avoid segmentation fault with printf
    xorps xmm0, xmm0
    xorps xmm1, xmm1
    xorps xmm2, xmm2
    xorps xmm3, xmm3
    xorps xmm4, xmm4
    xorps xmm5, xmm5
    xorps xmm6, xmm6
    xorps xmm7, xmm7

    ; Move the format string address to rdi (first argument for printf)
    lea rdi, [hello]

    ; Call printf
    call printf

    ; Clear the stack
    add rsp, 8

    ; Return from the function
    ret

