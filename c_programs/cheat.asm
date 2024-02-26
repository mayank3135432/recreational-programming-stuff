coladd:
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-20], edi
        mov     DWORD PTR [rbp-24], esi
        mov     DWORD PTR [rbp-4], 0
        jmp     .L2
.L3:
        mov     eax, DWORD PTR [rbp-24]
        movsx   rcx, eax
        mov     eax, DWORD PTR [rbp-4]
        movsx   rdx, eax
        mov     rax, rdx
        sal     rax, 3
        add     rax, rdx
        add     rax, rcx
        mov     ecx, DWORD PTR A[0+rax*4]
        mov     eax, DWORD PTR [rbp-20]
        movsx   rsi, eax
        mov     eax, DWORD PTR [rbp-4]
        movsx   rdx, eax
        mov     rax, rdx
        sal     rax, 3
        add     rax, rdx
        add     rax, rsi
        mov     eax, DWORD PTR A[0+rax*4]
        add     ecx, eax
        mov     eax, DWORD PTR [rbp-24]
        movsx   rsi, eax
        mov     eax, DWORD PTR [rbp-4]
        movsx   rdx, eax
        mov     rax, rdx
        sal     rax, 3
        add     rax, rdx
        add     rax, rsi
        mov     DWORD PTR A[0+rax*4], ecx
        add     DWORD PTR [rbp-4], 1
.L2:
        cmp     DWORD PTR [rbp-4], 9
        jle     .L3
        nop
        nop
        pop     rbp
        ret