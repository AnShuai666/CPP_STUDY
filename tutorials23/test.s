	.file	"test.c"
	.text
	.globl	process
	.type	process, @function
process:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movl	%edx, -16(%rbp)
	movl	-16(%rbp), %ecx
	movl	-12(%rbp), %edx
	movq	-8(%rbp), %rax
	movl	%ecx, %esi
	movl	%edx, %edi
	call	*%rax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	process, .-process
	.section	.rodata
.LC0:
	.string	"%d\n"
	.text
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
	subq	$64, %rsp
	movq	%fs:40, %rax
	movq	%rax, -8(%rbp)
	xorl	%eax, %eax
	movl	$6, -56(%rbp)
	movl	$2, -52(%rbp)
	movq	$t_add, -48(%rbp)
	movq	$t_sub, -40(%rbp)
	movq	$t_mul, -32(%rbp)
	movq	$t_div, -24(%rbp)
	movl	$0, -60(%rbp)
	jmp	.L4
.L5:
	movl	-60(%rbp), %eax
	cltq
	movq	-48(%rbp,%rax,8), %rax
	movl	-52(%rbp), %ecx
	movl	-56(%rbp), %edx
	movl	%ecx, %esi
	movl	%edx, %edi
	call	*%rax
	movl	%eax, %esi
	movl	$.LC0, %edi
	movl	$0, %eax
	call	printf
	addl	$1, -60(%rbp)
.L4:
	cmpl	$3, -60(%rbp)
	jle	.L5
	movl	$0, %eax
	movq	-8(%rbp), %rdx
	xorq	%fs:40, %rdx
	je	.L7
	call	__stack_chk_fail
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1:
	.size	main, .-main
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.10) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
