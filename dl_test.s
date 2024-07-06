	.file	"dl_test.c"
	.section	.rodata
.LC0:
	.string	"done"
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
	pushq	%rbx
	subq	$40, %rsp
	.cfi_offset 3, -24
	movl	%edi, -36(%rbp)
	movq	%rsi, -48(%rbp)
	call	dlerror
	movq	-48(%rbp), %rax
	addq	$8, %rax
	movq	(%rax), %rax
	movl	$1, %esi
	movq	%rax, %rdi
	call	dlopen
	movq	%rax, -24(%rbp)
	cmpq	$0, -24(%rbp)
	jne	.L2
	movq	stderr(%rip), %rbx
	call	dlerror
	movq	%rbx, %rsi
	movq	%rax, %rdi
	call	fputs
	movl	$10, %edi
	call	putchar
	movl	$-1, %eax
	jmp	.L1
.L2:
	movl	$.LC0, %edi
	call	puts
.L1:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (GNU) 4.8.5 20150623 (Red Hat 4.8.5-39)"
	.section	.note.GNU-stack,"",@progbits
