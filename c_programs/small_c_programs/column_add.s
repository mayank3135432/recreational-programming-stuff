	.file	"column_add.c"
	.text
	.globl	A
	.bss
	.align 32
	.type	A, @object
	.size	A, 360
A:
	.zero	360
	.text
	.globl	coladd
	.type	coladd, @function
coladd:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -20(%rbp)
	movl	%esi, -24(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L2
.L3:
	movl	-24(%rbp), %eax
	movslq	%eax, %rcx
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rcx, %rax
	leaq	0(,%rax,4), %rdx
	leaq	A(%rip), %rax
	movl	(%rdx,%rax), %ecx
	movl	-20(%rbp), %eax
	movslq	%eax, %rsi
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rsi, %rax
	leaq	0(,%rax,4), %rdx
	leaq	A(%rip), %rax
	movl	(%rdx,%rax), %eax
	addl	%eax, %ecx
	movl	-24(%rbp), %eax
	movslq	%eax, %rsi
	movl	-4(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rsi, %rax
	leaq	0(,%rax,4), %rdx
	leaq	A(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L2:
	cmpl	$9, -4(%rbp)
	jle	.L3
	nop
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	coladd, .-coladd
	.globl	main
	.type	main, @function
main:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L5
.L8:
	movl	$0, -4(%rbp)
	jmp	.L6
.L7:
	movl	-8(%rbp), %edx
	movl	-4(%rbp), %eax
	leal	(%rdx,%rax), %ecx
	movl	-4(%rbp), %eax
	movslq	%eax, %rsi
	movl	-8(%rbp), %eax
	movslq	%eax, %rdx
	movq	%rdx, %rax
	salq	$3, %rax
	addq	%rdx, %rax
	addq	%rsi, %rax
	leaq	0(,%rax,4), %rdx
	leaq	A(%rip), %rax
	movl	%ecx, (%rdx,%rax)
	addl	$1, -4(%rbp)
.L6:
	cmpl	$8, -4(%rbp)
	jle	.L7
	addl	$1, -8(%rbp)
.L5:
	cmpl	$9, -8(%rbp)
	jle	.L8
	movl	$3, %esi
	movl	$4, %edi
	call	coladd
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (GNU) 13.2.1 20230801"
	.section	.note.GNU-stack,"",@progbits
