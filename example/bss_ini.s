	.file	"bss_ini.cpp"
	.local	_ZL1a
	.comm	_ZL1a,4,4
	.globl	b
	.bss
	.align 4
	.type	b, @object
	.size	b, 4
b:
	.zero	4
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.local	_ZZ4mainE1c
	.comm	_ZZ4mainE1c,4,4
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
