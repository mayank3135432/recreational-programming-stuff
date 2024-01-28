	.file	"curry.c"
	.text
	.type	addx.0, @function
addx.0:
.LFB1:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movq	%r10, %rax
	movq	%r10, -16(%rbp)
	movl	(%rax), %edx
	movl	-4(%rbp), %eax
	addl	%edx, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	addx.0, .-addx.0
	.globl	add
	.type	add, @function
add:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$64, %rsp
	movl	%edi, -52(%rbp)
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	leaq	16(%rbp), %rax
	movq	%rax, -16(%rbp)
	movl	-52(%rbp), %eax
	movl	%eax, -48(%rbp)
	leaq	-48(%rbp), %rax
	addq	$4, %rax
	leaq	-48(%rbp), %rdx
	movw	$-17591, (%rax)
	leaq	addx.0(%rip), %rcx
	movq	%rcx, 2(%rax)
	movw	$-17847, 10(%rax)
	movq	%rdx, 12(%rax)
	movl	$-1864106167, 20(%rax)
	leaq	-48(%rbp), %rax
	addq	$4, %rax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L5
	call	__stack_chk_fail@PLT
.L5:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	add, .-add
	.section	.rodata
.LC0:
	.string	"%d\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$3, -12(%rbp)
	movl	$-2, -8(%rbp)
	movl	-12(%rbp), %eax
	movl	%eax, %edi
	call	add
	movl	-8(%rbp), %edx
	movl	%edx, %edi
	call	*%rax
	movl	%eax, -4(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (GNU) 13.2.1 20230801"
	.section	.note.GNU-stack,"x",@progbits
