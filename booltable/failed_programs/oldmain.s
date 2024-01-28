	.file	"main.c"
	.text
	.globl	top
	.data
	.align 4
	.type	top, @object
	.size	top, 4
top:
	.long	-1
	.globl	stack
	.bss
	.align 32
	.type	stack, @object
	.size	stack, 100
stack:
	.zero	100
	.text
	.globl	stacktop
	.type	stacktop, @function
stacktop:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	top(%rip), %eax
	testl	%eax, %eax
	js	.L2
	movl	top(%rip), %eax
	cltq
	leaq	stack(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	jmp	.L4
.L2:
	movl	$0, %eax
.L4:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	stacktop, .-stacktop
	.globl	iskali
	.type	iskali, @function
iskali:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	top(%rip), %eax
	cmpl	$-1, %eax
	sete	%al
	movzbl	%al, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	iskali, .-iskali
	.section	.rodata
.LC0:
	.string	"{ "
.LC1:
	.string	"%c ,"
.LC2:
	.string	"\b}"
	.text
	.globl	printstack
	.type	printstack, @function
printstack:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	leaq	.LC0(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	$0, -4(%rbp)
	jmp	.L8
.L9:
	movl	top(%rip), %eax
	cltq
	leaq	stack(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %esi
	leaq	.LC1(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	addl	$1, -4(%rbp)
.L8:
	movl	top(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jle	.L9
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	printstack, .-printstack
	.globl	infix
	.bss
	.align 32
	.type	infix, @object
	.size	infix, 100
infix:
	.zero	100
	.globl	postfix
	.align 32
	.type	postfix, @object
	.size	postfix, 100
postfix:
	.zero	100
	.globl	load
	.data
	.align 4
	.type	load, @object
	.size	load, 4
load:
	.long	-1
	.text
	.globl	isoperator
	.type	isoperator, @function
isoperator:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, %eax
	movb	%al, -4(%rbp)
	cmpb	$61, -4(%rbp)
	je	.L11
	cmpb	$62, -4(%rbp)
	je	.L11
	cmpb	$118, -4(%rbp)
	je	.L11
	cmpb	$38, -4(%rbp)
	je	.L11
	cmpb	$126, -4(%rbp)
	jne	.L12
.L11:
	movl	$1, %eax
	jmp	.L14
.L12:
	movl	$0, %eax
.L14:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	isoperator, .-isoperator
	.globl	isletter
	.type	isletter, @function
isletter:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, %eax
	movb	%al, -4(%rbp)
	cmpb	$64, -4(%rbp)
	jle	.L16
	cmpb	$90, -4(%rbp)
	jle	.L17
.L16:
	cmpb	$96, -4(%rbp)
	jle	.L18
	cmpb	$122, -4(%rbp)
	jg	.L18
.L17:
	cmpb	$118, -4(%rbp)
	je	.L18
	cmpb	$86, -4(%rbp)
	je	.L18
	movl	$1, %eax
	jmp	.L20
.L18:
	movl	$0, %eax
.L20:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	isletter, .-isletter
	.globl	prec
	.type	prec, @function
prec:
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, %eax
	movb	%al, -4(%rbp)
	cmpb	$40, -4(%rbp)
	jne	.L22
	movl	$0, %eax
	jmp	.L23
.L22:
	cmpb	$61, -4(%rbp)
	jne	.L24
	movl	$1, %eax
	jmp	.L23
.L24:
	cmpb	$62, -4(%rbp)
	jne	.L25
	movl	$2, %eax
	jmp	.L23
.L25:
	cmpb	$118, -4(%rbp)
	jne	.L26
	movl	$3, %eax
	jmp	.L23
.L26:
	cmpb	$38, -4(%rbp)
	jne	.L27
	movl	$4, %eax
	jmp	.L23
.L27:
	cmpb	$126, -4(%rbp)
	jne	.L28
	movl	$5, %eax
	jmp	.L23
.L28:
	movl	$-1, %eax
.L23:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	prec, .-prec
	.globl	keep
	.type	keep, @function
keep:
.LFB12:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, %eax
	movb	%al, -4(%rbp)
	movl	load(%rip), %eax
	addl	$1, %eax
	movl	%eax, load(%rip)
	movl	load(%rip), %eax
	cltq
	leaq	postfix(%rip), %rcx
	movzbl	-4(%rbp), %edx
	movb	%dl, (%rax,%rcx)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE12:
	.size	keep, .-keep
	.globl	pop
	.type	pop, @function
pop:
.LFB13:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, %eax
	call	stacktop
	movsbl	%al, %eax
	movl	%eax, %edi
	call	keep
	movl	top(%rip), %eax
	leal	-1(%rax), %edx
	movl	%edx, top(%rip)
	cltq
	leaq	stack(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
	.size	pop, .-pop
	.globl	push
	.type	push, @function
push:
.LFB14:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$24, %rsp
	.cfi_offset 3, -24
	movl	%edi, %eax
	movb	%al, -20(%rbp)
	movsbl	-20(%rbp), %eax
	movl	%eax, %edi
	call	prec
	movl	%eax, %ebx
	movl	$0, %eax
	call	stacktop
	movsbl	%al, %eax
	movl	%eax, %edi
	call	prec
	cmpl	%eax, %ebx
	jle	.L33
	movl	top(%rip), %eax
	addl	$1, %eax
	movl	%eax, top(%rip)
	movl	top(%rip), %eax
	cltq
	leaq	stack(%rip), %rcx
	movzbl	-20(%rbp), %edx
	movb	%dl, (%rax,%rcx)
	jmp	.L35
.L33:
	movl	$0, %eax
	call	pop
	movsbl	-20(%rbp), %eax
	movl	%eax, %edi
	call	push
.L35:
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	push, .-push
	.globl	inttopos
	.type	inttopos, @function
inttopos:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	jmp	.L37
.L45:
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	isletter
	testl	%eax, %eax
	je	.L38
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	keep
	jmp	.L39
.L38:
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	isoperator
	testl	%eax, %eax
	je	.L40
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	push
	jmp	.L39
.L40:
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$40, %al
	jne	.L41
	movl	top(%rip), %eax
	addl	$1, %eax
	movl	%eax, top(%rip)
	movl	top(%rip), %eax
	cltq
	leaq	stack(%rip), %rdx
	movb	$40, (%rax,%rdx)
	jmp	.L39
.L41:
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$41, %al
	jne	.L42
	jmp	.L43
.L44:
	movl	$0, %eax
	call	pop
.L43:
	movl	$0, %eax
	call	stacktop
	cmpb	$40, %al
	jne	.L44
	movl	top(%rip), %eax
	subl	$1, %eax
	movl	%eax, top(%rip)
	jmp	.L39
.L42:
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$32, %al
.L39:
	addl	$1, -4(%rbp)
.L37:
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	testb	%al, %al
	jne	.L45
	jmp	.L46
.L47:
	movl	$0, %eax
	call	pop
.L46:
	movl	$0, %eax
	call	iskali
	testl	%eax, %eax
	je	.L47
	movl	$0, %edi
	call	keep
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	inttopos, .-inttopos
	.section	.rodata
	.align 8
.LC3:
	.string	"---------------------------Boolean Table---------------------------\n"
	.text
	.globl	menu
	.type	menu, @function
menu:
.LFB16:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	leaq	.LC3(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	menu, .-menu
	.globl	main
	.type	main, @function
main:
.LFB17:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	stdin(%rip), %rax
	movq	%rax, %rdx
	movl	$100, %esi
	leaq	infix(%rip), %rax
	movq	%rax, %rdi
	call	fgets@PLT
	movq	stdin(%rip), %rax
	movq	%rax, %rdi
	call	fflush@PLT
	movl	$0, %eax
	call	inttopos
	movl	$0, -4(%rbp)
	jmp	.L50
.L51:
	movl	-4(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	putchar@PLT
	addl	$1, -4(%rbp)
.L50:
	movl	load(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jle	.L51
	movl	$10, %edi
	call	putchar@PLT
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 11.4.0-1ubuntu1~22.04) 11.4.0"
	.section	.note.GNU-stack,"",@progbits
	.section	.note.gnu.property,"a"
	.align 8
	.long	1f - 0f
	.long	4f - 1f
	.long	5
0:
	.string	"GNU"
1:
	.align 8
	.long	0xc0000002
	.long	3f - 2f
2:
	.long	0x3
3:
	.align 8
4:
