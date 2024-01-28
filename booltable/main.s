	.file	"main.c"
	.text
	.globl	AND
	.type	AND, @function
AND:
.LFB6:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$0, -4(%rbp)
	je	.L2
	cmpl	$0, -8(%rbp)
	je	.L2
	movl	$1, %eax
	jmp	.L4
.L2:
	movl	$0, %eax
.L4:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE6:
	.size	AND, .-AND
	.globl	OR
	.type	OR, @function
OR:
.LFB7:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$0, -4(%rbp)
	jne	.L6
	cmpl	$0, -8(%rbp)
	je	.L7
.L6:
	movl	$1, %eax
	jmp	.L9
.L7:
	movl	$0, %eax
.L9:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE7:
	.size	OR, .-OR
	.globl	NOT
	.type	NOT, @function
NOT:
.LFB8:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jle	.L11
	movl	$0, %eax
	jmp	.L12
.L11:
	movl	$1, %eax
.L12:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE8:
	.size	NOT, .-NOT
	.globl	IMPLIES
	.type	IMPLIES, @function
IMPLIES:
.LFB9:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$8, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	movl	%eax, %edi
	call	NOT
	movl	%eax, %edx
	movl	-8(%rbp), %eax
	movl	%eax, %esi
	movl	%edx, %edi
	call	OR
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE9:
	.size	IMPLIES, .-IMPLIES
	.globl	BICOND
	.type	BICOND, @function
BICOND:
.LFB10:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	movl	-4(%rbp), %eax
	cmpl	-8(%rbp), %eax
	jne	.L16
	movl	$1, %eax
	jmp	.L17
.L16:
	movl	$0, %eax
.L17:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE10:
	.size	BICOND, .-BICOND
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
.LFB11:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	top(%rip), %eax
	testl	%eax, %eax
	js	.L19
	movl	top(%rip), %eax
	cltq
	leaq	stack(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	jmp	.L21
.L19:
	movl	$0, %eax
.L21:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE11:
	.size	stacktop, .-stacktop
	.globl	iskali
	.type	iskali, @function
iskali:
.LFB12:
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
.LFE12:
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
.LFB13:
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
	jmp	.L25
.L26:
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
.L25:
	movl	top(%rip), %eax
	cmpl	%eax, -4(%rbp)
	jle	.L26
	leaq	.LC2(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE13:
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
.LFB14:
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
	je	.L28
	cmpb	$62, -4(%rbp)
	je	.L28
	cmpb	$118, -4(%rbp)
	je	.L28
	cmpb	$38, -4(%rbp)
	je	.L28
	cmpb	$86, -4(%rbp)
	je	.L28
	cmpb	$94, -4(%rbp)
	jne	.L29
.L28:
	movl	$1, %eax
	jmp	.L31
.L29:
	movl	$0, %eax
.L31:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE14:
	.size	isoperator, .-isoperator
	.globl	isunaryoperator
	.type	isunaryoperator, @function
isunaryoperator:
.LFB15:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, %eax
	movb	%al, -4(%rbp)
	cmpb	$126, -4(%rbp)
	je	.L33
	cmpb	$45, -4(%rbp)
	jne	.L34
.L33:
	movl	$1, %eax
	jmp	.L36
.L34:
	movl	$0, %eax
.L36:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE15:
	.size	isunaryoperator, .-isunaryoperator
	.globl	isletter
	.type	isletter, @function
isletter:
.LFB16:
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
	jle	.L38
	cmpb	$90, -4(%rbp)
	jle	.L39
.L38:
	cmpb	$96, -4(%rbp)
	jle	.L40
	cmpb	$122, -4(%rbp)
	jg	.L40
.L39:
	cmpb	$118, -4(%rbp)
	je	.L40
	cmpb	$86, -4(%rbp)
	je	.L40
	movl	$1, %eax
	jmp	.L42
.L40:
	movl	$0, %eax
.L42:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE16:
	.size	isletter, .-isletter
	.globl	prec
	.type	prec, @function
prec:
.LFB17:
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
	jne	.L44
	movl	$0, %eax
	jmp	.L45
.L44:
	cmpb	$61, -4(%rbp)
	jne	.L46
	movl	$1, %eax
	jmp	.L45
.L46:
	cmpb	$62, -4(%rbp)
	jne	.L47
	movl	$2, %eax
	jmp	.L45
.L47:
	cmpb	$118, -4(%rbp)
	je	.L48
	cmpb	$86, -4(%rbp)
	je	.L48
	cmpb	$43, -4(%rbp)
	jne	.L49
.L48:
	movl	$3, %eax
	jmp	.L45
.L49:
	cmpb	$38, -4(%rbp)
	je	.L50
	cmpb	$94, -4(%rbp)
	je	.L50
	cmpb	$42, -4(%rbp)
	jne	.L51
.L50:
	movl	$4, %eax
	jmp	.L45
.L51:
	cmpb	$126, -4(%rbp)
	je	.L52
	cmpb	$45, -4(%rbp)
	jne	.L53
.L52:
	movl	$5, %eax
	jmp	.L45
.L53:
	movl	$-1, %eax
.L45:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE17:
	.size	prec, .-prec
	.globl	keep
	.type	keep, @function
keep:
.LFB18:
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
.LFE18:
	.size	keep, .-keep
	.globl	pop
	.type	pop, @function
pop:
.LFB19:
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
.LFE19:
	.size	pop, .-pop
	.globl	push
	.type	push, @function
push:
.LFB20:
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
	jle	.L58
	movl	top(%rip), %eax
	addl	$1, %eax
	movl	%eax, top(%rip)
	movl	top(%rip), %eax
	cltq
	leaq	stack(%rip), %rcx
	movzbl	-20(%rbp), %edx
	movb	%dl, (%rax,%rcx)
	jmp	.L60
.L58:
	movl	$0, %eax
	call	pop
	movsbl	-20(%rbp), %eax
	movl	%eax, %edi
	call	push
.L60:
	nop
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE20:
	.size	push, .-push
	.globl	inttopos
	.type	inttopos, @function
inttopos:
.LFB21:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	$0, -4(%rbp)
	jmp	.L62
.L71:
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	isletter
	testl	%eax, %eax
	je	.L63
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	keep
	jmp	.L64
.L63:
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	isoperator
	testl	%eax, %eax
	jne	.L65
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	isunaryoperator
	testl	%eax, %eax
	je	.L66
.L65:
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	push
	jmp	.L64
.L66:
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$40, %al
	jne	.L67
	movl	top(%rip), %eax
	addl	$1, %eax
	movl	%eax, top(%rip)
	movl	top(%rip), %eax
	cltq
	leaq	stack(%rip), %rdx
	movb	$40, (%rax,%rdx)
	jmp	.L64
.L67:
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$41, %al
	jne	.L68
	jmp	.L69
.L70:
	movl	$0, %eax
	call	pop
.L69:
	movl	$0, %eax
	call	stacktop
	cmpb	$40, %al
	jne	.L70
	movl	top(%rip), %eax
	subl	$1, %eax
	movl	%eax, top(%rip)
	jmp	.L64
.L68:
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$32, %al
.L64:
	addl	$1, -4(%rbp)
.L62:
	movl	-4(%rbp), %eax
	cltq
	leaq	infix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	testb	%al, %al
	jne	.L71
	jmp	.L72
.L73:
	movl	$0, %eax
	call	pop
.L72:
	movl	$0, %eax
	call	iskali
	testl	%eax, %eax
	je	.L73
	movl	$0, %edi
	call	keep
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE21:
	.size	inttopos, .-inttopos
	.globl	eval2
	.type	eval2, @function
eval2:
.LFB22:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)
	movl	$400, %edi
	call	malloc@PLT
	movq	%rax, -24(%rbp)
	movl	$-1, -40(%rbp)
	movl	$0, -32(%rbp)
	movl	$0, -36(%rbp)
	jmp	.L75
.L85:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$112, %al
	jne	.L76
	addl	$1, -40(%rbp)
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movq	-56(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, (%rdx)
	jmp	.L77
.L76:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$113, %al
	jne	.L78
	addl	$1, -40(%rbp)
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movq	-56(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, (%rdx)
	jmp	.L77
.L78:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	isunaryoperator
	testl	%eax, %eax
	je	.L79
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	-40(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	movq	-24(%rbp), %rdx
	leaq	(%rcx,%rdx), %rbx
	movl	%eax, %edi
	call	NOT
	movl	%eax, (%rbx)
	jmp	.L77
.L79:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$118, %al
	je	.L80
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$43, %al
	je	.L80
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$86, %al
	jne	.L81
.L80:
	movl	-40(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	-40(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	leaq	-4(%rcx), %rsi
	movq	-24(%rbp), %rcx
	leaq	(%rsi,%rcx), %rbx
	movl	%edx, %esi
	movl	%eax, %edi
	call	OR
	movl	%eax, (%rbx)
	subl	$1, -40(%rbp)
	jmp	.L77
.L81:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$94, %al
	je	.L82
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$38, %al
	jne	.L83
.L82:
	movl	-40(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	-40(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	leaq	-4(%rcx), %rsi
	movq	-24(%rbp), %rcx
	leaq	(%rsi,%rcx), %rbx
	movl	%edx, %esi
	movl	%eax, %edi
	call	AND
	movl	%eax, (%rbx)
	subl	$1, -40(%rbp)
	jmp	.L77
.L83:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$62, %al
	jne	.L84
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-40(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	-40(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	leaq	-4(%rcx), %rsi
	movq	-24(%rbp), %rcx
	leaq	(%rsi,%rcx), %rbx
	movl	%edx, %esi
	movl	%eax, %edi
	call	IMPLIES
	movl	%eax, (%rbx)
	subl	$1, -40(%rbp)
	jmp	.L77
.L84:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$61, %al
	jne	.L77
	movl	-40(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	-40(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	leaq	-4(%rcx), %rsi
	movq	-24(%rbp), %rcx
	leaq	(%rsi,%rcx), %rbx
	movl	%edx, %esi
	movl	%eax, %edi
	call	BICOND
	movl	%eax, (%rbx)
	subl	$1, -40(%rbp)
.L77:
	addl	$1, -36(%rbp)
.L75:
	movl	load(%rip), %eax
	cmpl	%eax, -36(%rbp)
	jle	.L85
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -28(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
	movl	-28(%rbp), %eax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE22:
	.size	eval2, .-eval2
	.globl	eval3
	.type	eval3, @function
eval3:
.LFB23:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)
	movl	$400, %edi
	call	malloc@PLT
	movq	%rax, -24(%rbp)
	movl	$-1, -40(%rbp)
	movl	$0, -32(%rbp)
	movl	$0, -36(%rbp)
	jmp	.L88
.L99:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$112, %al
	jne	.L89
	addl	$1, -40(%rbp)
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movq	-56(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, (%rdx)
	jmp	.L90
.L89:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$113, %al
	jne	.L91
	addl	$1, -40(%rbp)
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movq	-56(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, (%rdx)
	jmp	.L90
.L91:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$114, %al
	jne	.L92
	addl	$1, -40(%rbp)
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movq	-56(%rbp), %rax
	movl	8(%rax), %eax
	movl	%eax, (%rdx)
	jmp	.L90
.L92:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	isunaryoperator
	testl	%eax, %eax
	je	.L93
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	-40(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	movq	-24(%rbp), %rdx
	leaq	(%rcx,%rdx), %rbx
	movl	%eax, %edi
	call	NOT
	movl	%eax, (%rbx)
	jmp	.L90
.L93:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$118, %al
	je	.L94
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$43, %al
	je	.L94
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$86, %al
	jne	.L95
.L94:
	movl	-40(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	-40(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	leaq	-4(%rcx), %rsi
	movq	-24(%rbp), %rcx
	leaq	(%rsi,%rcx), %rbx
	movl	%edx, %esi
	movl	%eax, %edi
	call	OR
	movl	%eax, (%rbx)
	subl	$1, -40(%rbp)
	jmp	.L90
.L95:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$94, %al
	je	.L96
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$38, %al
	jne	.L97
.L96:
	movl	-40(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	-40(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	leaq	-4(%rcx), %rsi
	movq	-24(%rbp), %rcx
	leaq	(%rsi,%rcx), %rbx
	movl	%edx, %esi
	movl	%eax, %edi
	call	AND
	movl	%eax, (%rbx)
	subl	$1, -40(%rbp)
	jmp	.L90
.L97:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$62, %al
	jne	.L98
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-40(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	-40(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	leaq	-4(%rcx), %rsi
	movq	-24(%rbp), %rcx
	leaq	(%rsi,%rcx), %rbx
	movl	%edx, %esi
	movl	%eax, %edi
	call	IMPLIES
	movl	%eax, (%rbx)
	subl	$1, -40(%rbp)
	jmp	.L90
.L98:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$61, %al
	jne	.L90
	movl	-40(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	-40(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	leaq	-4(%rcx), %rsi
	movq	-24(%rbp), %rcx
	leaq	(%rsi,%rcx), %rbx
	movl	%edx, %esi
	movl	%eax, %edi
	call	BICOND
	movl	%eax, (%rbx)
	subl	$1, -40(%rbp)
.L90:
	addl	$1, -36(%rbp)
.L88:
	movl	load(%rip), %eax
	cmpl	%eax, -36(%rbp)
	jle	.L99
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -28(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
	movl	-28(%rbp), %eax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE23:
	.size	eval3, .-eval3
	.globl	eval4
	.type	eval4, @function
eval4:
.LFB24:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	pushq	%rbx
	subq	$56, %rsp
	.cfi_offset 3, -24
	movq	%rdi, -56(%rbp)
	movl	$400, %edi
	call	malloc@PLT
	movq	%rax, -24(%rbp)
	movl	$-1, -40(%rbp)
	movl	$0, -32(%rbp)
	movl	$0, -36(%rbp)
	jmp	.L102
.L114:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$112, %al
	jne	.L103
	addl	$1, -40(%rbp)
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movq	-56(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, (%rdx)
	jmp	.L104
.L103:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$113, %al
	jne	.L105
	addl	$1, -40(%rbp)
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movq	-56(%rbp), %rax
	movl	4(%rax), %eax
	movl	%eax, (%rdx)
	jmp	.L104
.L105:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$114, %al
	jne	.L106
	addl	$1, -40(%rbp)
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movq	-56(%rbp), %rax
	movl	8(%rax), %eax
	movl	%eax, (%rdx)
	jmp	.L104
.L106:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$115, %al
	jne	.L107
	addl	$1, -40(%rbp)
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rax, %rdx
	movq	-56(%rbp), %rax
	movl	12(%rax), %eax
	movl	%eax, (%rdx)
	jmp	.L104
.L107:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	isunaryoperator
	testl	%eax, %eax
	je	.L108
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	-40(%rbp), %edx
	movslq	%edx, %rdx
	leaq	0(,%rdx,4), %rcx
	movq	-24(%rbp), %rdx
	leaq	(%rcx,%rdx), %rbx
	movl	%eax, %edi
	call	NOT
	movl	%eax, (%rbx)
	jmp	.L104
.L108:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$118, %al
	je	.L109
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$43, %al
	je	.L109
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$86, %al
	jne	.L110
.L109:
	movl	-40(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	-40(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	leaq	-4(%rcx), %rsi
	movq	-24(%rbp), %rcx
	leaq	(%rsi,%rcx), %rbx
	movl	%edx, %esi
	movl	%eax, %edi
	call	OR
	movl	%eax, (%rbx)
	subl	$1, -40(%rbp)
	jmp	.L104
.L110:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$94, %al
	je	.L111
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$38, %al
	jne	.L112
.L111:
	movl	-40(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	-40(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	leaq	-4(%rcx), %rsi
	movq	-24(%rbp), %rcx
	leaq	(%rsi,%rcx), %rbx
	movl	%edx, %esi
	movl	%eax, %edi
	call	AND
	movl	%eax, (%rbx)
	subl	$1, -40(%rbp)
	jmp	.L104
.L112:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$62, %al
	jne	.L113
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-40(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	-40(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	leaq	-4(%rcx), %rsi
	movq	-24(%rbp), %rcx
	leaq	(%rsi,%rcx), %rbx
	movl	%edx, %esi
	movl	%eax, %edi
	call	IMPLIES
	movl	%eax, (%rbx)
	subl	$1, -40(%rbp)
	jmp	.L104
.L113:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	cmpb	$61, %al
	jne	.L104
	movl	-40(%rbp), %eax
	cltq
	salq	$2, %rax
	leaq	-4(%rax), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %edx
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rcx
	movq	-24(%rbp), %rax
	addq	%rcx, %rax
	movl	(%rax), %eax
	movl	-40(%rbp), %ecx
	movslq	%ecx, %rcx
	salq	$2, %rcx
	leaq	-4(%rcx), %rsi
	movq	-24(%rbp), %rcx
	leaq	(%rsi,%rcx), %rbx
	movl	%edx, %esi
	movl	%eax, %edi
	call	BICOND
	movl	%eax, (%rbx)
	subl	$1, -40(%rbp)
.L104:
	addl	$1, -36(%rbp)
.L102:
	movl	load(%rip), %eax
	cmpl	%eax, -36(%rbp)
	jle	.L114
	movl	-40(%rbp), %eax
	cltq
	leaq	0(,%rax,4), %rdx
	movq	-24(%rbp), %rax
	addq	%rdx, %rax
	movl	(%rax), %eax
	movl	%eax, -28(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	free@PLT
	movl	-28(%rbp), %eax
	movq	-8(%rbp), %rbx
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE24:
	.size	eval4, .-eval4
	.globl	maptoTF
	.type	maptoTF, @function
maptoTF:
.LFB25:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	%edi, -4(%rbp)
	cmpl	$0, -4(%rbp)
	jne	.L117
	movl	$70, %eax
	jmp	.L118
.L117:
	cmpl	$1, -4(%rbp)
	jne	.L119
	movl	$84, %eax
	jmp	.L118
.L119:
	movl	$114, %eax
.L118:
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE25:
	.size	maptoTF, .-maptoTF
	.section	.rodata
	.align 8
.LC3:
	.string	"------------------------------------------------------Boolean Table------------------------------------------------------\n"
	.align 8
.LC4:
	.string	"Input bool expression\n^ is AND \nv is OR\n> is implication (conditional)\n~ is negation\n= is equivalence (biconditional)\n"
	.align 8
.LC5:
	.string	"\n__________________ENTER A BOOL EXPRESSION IN 4 VARIABLES p,q,r,s__________________\n"
	.text
	.globl	menu
	.type	menu, @function
menu:
.LFB26:
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
	leaq	.LC4(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	.LC5(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE26:
	.size	menu, .-menu
	.section	.rodata
	.align 8
.LC6:
	.string	"first enter how many variables you want in your expression(2,3 or 4) and then enter the bool expression"
.LC7:
	.string	"%d\n"
.LC8:
	.string	"\n p | q | r | s ||"
.LC9:
	.string	" %d | %d | %d | %d || %d\n"
.LC10:
	.string	"\n p | q | r ||"
.LC11:
	.string	" %d | %d | %d || %d\n"
.LC12:
	.string	"\n p | q ||"
.LC13:
	.string	" %d | %d || %d\n"
	.align 8
.LC14:
	.string	"\nsorry cannot do %d variables yet\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB27:
	.cfi_startproc
	endbr64
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$0, %eax
	call	menu
	leaq	.LC6(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	leaq	-40(%rbp), %rax
	movq	%rax, %rsi
	leaq	.LC7(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	__isoc99_scanf@PLT
	movq	stdin(%rip), %rax
	movq	%rax, %rdi
	call	fflush@PLT
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
	movl	$0, -36(%rbp)
	jmp	.L122
.L123:
	movl	-36(%rbp), %eax
	cltq
	leaq	postfix(%rip), %rdx
	movzbl	(%rax,%rdx), %eax
	movsbl	%al, %eax
	movl	%eax, %edi
	call	putchar@PLT
	addl	$1, -36(%rbp)
.L122:
	movl	load(%rip), %eax
	cmpl	%eax, -36(%rbp)
	jle	.L123
	movl	-40(%rbp), %eax
	cmpl	$4, %eax
	jne	.L124
	leaq	.LC8(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, -32(%rbp)
	jmp	.L125
.L132:
	movl	$1, -28(%rbp)
	jmp	.L126
.L131:
	movl	$1, -24(%rbp)
	jmp	.L127
.L130:
	movl	$1, -20(%rbp)
	jmp	.L128
.L129:
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	eval4
	movl	%eax, %esi
	movl	-20(%rbp), %edi
	movl	-24(%rbp), %ecx
	movl	-28(%rbp), %edx
	movl	-32(%rbp), %eax
	movl	%esi, %r9d
	movl	%edi, %r8d
	movl	%eax, %esi
	leaq	.LC9(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-20(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -20(%rbp)
.L128:
	movl	-20(%rbp), %eax
	testl	%eax, %eax
	jns	.L129
	movl	-24(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -24(%rbp)
.L127:
	movl	-24(%rbp), %eax
	testl	%eax, %eax
	jns	.L130
	movl	-28(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -28(%rbp)
.L126:
	movl	-28(%rbp), %eax
	testl	%eax, %eax
	jns	.L131
	movl	-32(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -32(%rbp)
.L125:
	movl	-32(%rbp), %eax
	testl	%eax, %eax
	jns	.L132
	jmp	.L133
.L124:
	movl	-40(%rbp), %eax
	cmpl	$3, %eax
	jne	.L134
	leaq	.LC10(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, -32(%rbp)
	jmp	.L135
.L140:
	movl	$1, -28(%rbp)
	jmp	.L136
.L139:
	movl	$1, -24(%rbp)
	jmp	.L137
.L138:
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	eval3
	movl	%eax, %esi
	movl	-24(%rbp), %ecx
	movl	-28(%rbp), %edx
	movl	-32(%rbp), %eax
	movl	%esi, %r8d
	movl	%eax, %esi
	leaq	.LC11(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-24(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -24(%rbp)
.L137:
	movl	-24(%rbp), %eax
	testl	%eax, %eax
	jns	.L138
	movl	-28(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -28(%rbp)
.L136:
	movl	-28(%rbp), %eax
	testl	%eax, %eax
	jns	.L139
	movl	-32(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -32(%rbp)
.L135:
	movl	-32(%rbp), %eax
	testl	%eax, %eax
	jns	.L140
	jmp	.L133
.L134:
	movl	-40(%rbp), %eax
	cmpl	$2, %eax
	jne	.L141
	leaq	.LC12(%rip), %rax
	movq	%rax, %rdi
	call	puts@PLT
	movl	$1, -32(%rbp)
	jmp	.L142
.L145:
	movl	$1, -28(%rbp)
	jmp	.L143
.L144:
	leaq	-32(%rbp), %rax
	movq	%rax, %rdi
	call	eval2
	movl	%eax, %ecx
	movl	-28(%rbp), %edx
	movl	-32(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC13(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
	movl	-28(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -28(%rbp)
.L143:
	movl	-28(%rbp), %eax
	testl	%eax, %eax
	jns	.L144
	movl	-32(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -32(%rbp)
.L142:
	movl	-32(%rbp), %eax
	testl	%eax, %eax
	jns	.L145
	jmp	.L133
.L141:
	movl	-40(%rbp), %eax
	movl	%eax, %esi
	leaq	.LC14(%rip), %rax
	movq	%rax, %rdi
	movl	$0, %eax
	call	printf@PLT
.L133:
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	subq	%fs:40, %rdx
	je	.L147
	call	__stack_chk_fail@PLT
.L147:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE27:
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
