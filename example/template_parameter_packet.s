	.file	"template_parameter_packet.cpp"
	.section	.rodata
	.type	_ZStL19piecewise_construct, @object
	.size	_ZStL19piecewise_construct, 1
_ZStL19piecewise_construct:
	.zero	1
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.text
	.globl	main
	.type	main, @function
main:
.LFB1201:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movl	$5, -8(%rbp)
	movl	$4, -16(%rbp)
	movl	$3, -24(%rbp)
	movl	$2, -28(%rbp)
	movl	$1, -32(%rbp)
	leaq	-8(%rbp), %rdi
	leaq	-16(%rbp), %rcx
	leaq	-24(%rbp), %rdx
	leaq	-28(%rbp), %rsi
	leaq	-32(%rbp), %rax
	movq	%rdi, %r8
	movq	%rax, %rdi
	call	_Z12sum_templateIiIiiiiEET_RKS0_DpRKT0_
	movl	%eax, %esi
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEi
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$5, -28(%rbp)
	movabsq	$4616639978017495450, %rax
	movq	%rax, -8(%rbp)
	movl	$3, -32(%rbp)
	movabsq	$4612811918334230528, %rax
	movq	%rax, -16(%rbp)
	movabsq	$4607632778762754458, %rax
	movq	%rax, -24(%rbp)
	leaq	-28(%rbp), %rdi
	leaq	-8(%rbp), %rcx
	leaq	-32(%rbp), %rdx
	leaq	-16(%rbp), %rsi
	leaq	-24(%rbp), %rax
	movq	%rdi, %r8
	movq	%rax, %rdi
	call	_Z12sum_templateIdIdidiEET_RKS0_DpRKT0_
	movsd	%xmm0, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	movl	$_ZSt4cout, %edi
	call	_ZNSolsEd
	movl	$_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_, %esi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E
	movl	$0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1201:
	.size	main, .-main
	.section	.text._Z12sum_templateIiIiiiiEET_RKS0_DpRKT0_,"axG",@progbits,_Z12sum_templateIiIiiiiEET_RKS0_DpRKT0_,comdat
	.weak	_Z12sum_templateIiIiiiiEET_RKS0_DpRKT0_
	.type	_Z12sum_templateIiIiiiiEET_RKS0_DpRKT0_, @function
_Z12sum_templateIiIiiiiEET_RKS0_DpRKT0_:
.LFB1256:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	%rcx, -32(%rbp)
	movq	%r8, -40(%rbp)
	movq	-40(%rbp), %rcx
	movq	-32(%rbp), %rdx
	movq	-24(%rbp), %rsi
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_Z12sum_templateIiIiiiEET_RKS0_DpRKT0_
	movq	-8(%rbp), %rdx
	movl	(%rdx), %edx
	addl	%edx, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1256:
	.size	_Z12sum_templateIiIiiiiEET_RKS0_DpRKT0_, .-_Z12sum_templateIiIiiiiEET_RKS0_DpRKT0_
	.weak	_Z12sum_templateIiJiiiiEET_RKS0_DpRKT0_
	.set	_Z12sum_templateIiJiiiiEET_RKS0_DpRKT0_,_Z12sum_templateIiIiiiiEET_RKS0_DpRKT0_
	.section	.text._Z12sum_templateIdIdidiEET_RKS0_DpRKT0_,"axG",@progbits,_Z12sum_templateIdIdidiEET_RKS0_DpRKT0_,comdat
	.weak	_Z12sum_templateIdIdidiEET_RKS0_DpRKT0_
	.type	_Z12sum_templateIdIdidiEET_RKS0_DpRKT0_, @function
_Z12sum_templateIdIdidiEET_RKS0_DpRKT0_:
.LFB1259:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	%rcx, -32(%rbp)
	movq	%r8, -40(%rbp)
	movq	-40(%rbp), %rcx
	movq	-32(%rbp), %rdx
	movq	-24(%rbp), %rsi
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_Z12sum_templateIdIidiEET_RKS0_DpRKT0_
	movq	-8(%rbp), %rax
	movsd	(%rax), %xmm1
	addsd	%xmm1, %xmm0
	movsd	%xmm0, -48(%rbp)
	movq	-48(%rbp), %rax
	movq	%rax, -48(%rbp)
	movsd	-48(%rbp), %xmm0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1259:
	.size	_Z12sum_templateIdIdidiEET_RKS0_DpRKT0_, .-_Z12sum_templateIdIdidiEET_RKS0_DpRKT0_
	.weak	_Z12sum_templateIdJdidiEET_RKS0_DpRKT0_
	.set	_Z12sum_templateIdJdidiEET_RKS0_DpRKT0_,_Z12sum_templateIdIdidiEET_RKS0_DpRKT0_
	.section	.text._Z12sum_templateIiIiiiEET_RKS0_DpRKT0_,"axG",@progbits,_Z12sum_templateIiIiiiEET_RKS0_DpRKT0_,comdat
	.weak	_Z12sum_templateIiIiiiEET_RKS0_DpRKT0_
	.type	_Z12sum_templateIiIiiiEET_RKS0_DpRKT0_, @function
_Z12sum_templateIiIiiiEET_RKS0_DpRKT0_:
.LFB1303:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	%rcx, -32(%rbp)
	movq	-32(%rbp), %rdx
	movq	-24(%rbp), %rcx
	movq	-16(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_Z12sum_templateIiIiiEET_RKS0_DpRKT0_
	movq	-8(%rbp), %rdx
	movl	(%rdx), %edx
	addl	%edx, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1303:
	.size	_Z12sum_templateIiIiiiEET_RKS0_DpRKT0_, .-_Z12sum_templateIiIiiiEET_RKS0_DpRKT0_
	.weak	_Z12sum_templateIiJiiiEET_RKS0_DpRKT0_
	.set	_Z12sum_templateIiJiiiEET_RKS0_DpRKT0_,_Z12sum_templateIiIiiiEET_RKS0_DpRKT0_
	.section	.text._Z12sum_templateIdIidiEET_RKS0_DpRKT0_,"axG",@progbits,_Z12sum_templateIdIidiEET_RKS0_DpRKT0_,comdat
	.weak	_Z12sum_templateIdIidiEET_RKS0_DpRKT0_
	.type	_Z12sum_templateIdIidiEET_RKS0_DpRKT0_, @function
_Z12sum_templateIdIidiEET_RKS0_DpRKT0_:
.LFB1306:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$48, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	%rcx, -32(%rbp)
	movq	-32(%rbp), %rdx
	movq	-24(%rbp), %rcx
	movq	-16(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	_Z12sum_templateIiIdiEET_RKS0_DpRKT0_
	cvtsi2sd	%eax, %xmm0
	movq	-8(%rbp), %rax
	movsd	(%rax), %xmm1
	addsd	%xmm1, %xmm0
	movsd	%xmm0, -40(%rbp)
	movq	-40(%rbp), %rax
	movq	%rax, -40(%rbp)
	movsd	-40(%rbp), %xmm0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1306:
	.size	_Z12sum_templateIdIidiEET_RKS0_DpRKT0_, .-_Z12sum_templateIdIidiEET_RKS0_DpRKT0_
	.weak	_Z12sum_templateIdJidiEET_RKS0_DpRKT0_
	.set	_Z12sum_templateIdJidiEET_RKS0_DpRKT0_,_Z12sum_templateIdIidiEET_RKS0_DpRKT0_
	.section	.text._Z12sum_templateIiIiiEET_RKS0_DpRKT0_,"axG",@progbits,_Z12sum_templateIiIiiEET_RKS0_DpRKT0_,comdat
	.weak	_Z12sum_templateIiIiiEET_RKS0_DpRKT0_
	.type	_Z12sum_templateIiIiiEET_RKS0_DpRKT0_, @function
_Z12sum_templateIiIiiEET_RKS0_DpRKT0_:
.LFB1335:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_Z12sum_templateIiIiEET_RKS0_DpRKT0_
	movq	-8(%rbp), %rdx
	movl	(%rdx), %edx
	addl	%edx, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1335:
	.size	_Z12sum_templateIiIiiEET_RKS0_DpRKT0_, .-_Z12sum_templateIiIiiEET_RKS0_DpRKT0_
	.weak	_Z12sum_templateIiJiiEET_RKS0_DpRKT0_
	.set	_Z12sum_templateIiJiiEET_RKS0_DpRKT0_,_Z12sum_templateIiIiiEET_RKS0_DpRKT0_
	.section	.text._Z12sum_templateIiIdiEET_RKS0_DpRKT0_,"axG",@progbits,_Z12sum_templateIiIdiEET_RKS0_DpRKT0_,comdat
	.weak	_Z12sum_templateIiIdiEET_RKS0_DpRKT0_
	.type	_Z12sum_templateIiIdiEET_RKS0_DpRKT0_, @function
_Z12sum_templateIiIdiEET_RKS0_DpRKT0_:
.LFB1337:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	%rdx, -24(%rbp)
	movq	-24(%rbp), %rdx
	movq	-16(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_Z12sum_templateIdIiEET_RKS0_DpRKT0_
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	cvtsi2sd	%eax, %xmm1
	addsd	%xmm1, %xmm0
	cvttsd2si	%xmm0, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1337:
	.size	_Z12sum_templateIiIdiEET_RKS0_DpRKT0_, .-_Z12sum_templateIiIdiEET_RKS0_DpRKT0_
	.weak	_Z12sum_templateIiJdiEET_RKS0_DpRKT0_
	.set	_Z12sum_templateIiJdiEET_RKS0_DpRKT0_,_Z12sum_templateIiIdiEET_RKS0_DpRKT0_
	.section	.text._Z12sum_templateIiIiEET_RKS0_DpRKT0_,"axG",@progbits,_Z12sum_templateIiIiEET_RKS0_DpRKT0_,comdat
	.weak	_Z12sum_templateIiIiEET_RKS0_DpRKT0_
	.type	_Z12sum_templateIiIiEET_RKS0_DpRKT0_, @function
_Z12sum_templateIiIiEET_RKS0_DpRKT0_:
.LFB1340:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_Z12sum_templateIiET_RKS0_
	movq	-8(%rbp), %rdx
	movl	(%rdx), %edx
	addl	%edx, %eax
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1340:
	.size	_Z12sum_templateIiIiEET_RKS0_DpRKT0_, .-_Z12sum_templateIiIiEET_RKS0_DpRKT0_
	.weak	_Z12sum_templateIiJiEET_RKS0_DpRKT0_
	.set	_Z12sum_templateIiJiEET_RKS0_DpRKT0_,_Z12sum_templateIiIiEET_RKS0_DpRKT0_
	.section	.text._Z12sum_templateIdIiEET_RKS0_DpRKT0_,"axG",@progbits,_Z12sum_templateIdIiEET_RKS0_DpRKT0_,comdat
	.weak	_Z12sum_templateIdIiEET_RKS0_DpRKT0_
	.type	_Z12sum_templateIdIiEET_RKS0_DpRKT0_, @function
_Z12sum_templateIdIiEET_RKS0_DpRKT0_:
.LFB1341:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	movq	-16(%rbp), %rax
	movq	%rax, %rdi
	call	_Z12sum_templateIiET_RKS0_
	cvtsi2sd	%eax, %xmm0
	movq	-8(%rbp), %rax
	movsd	(%rax), %xmm1
	addsd	%xmm1, %xmm0
	movsd	%xmm0, -24(%rbp)
	movq	-24(%rbp), %rax
	movq	%rax, -24(%rbp)
	movsd	-24(%rbp), %xmm0
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1341:
	.size	_Z12sum_templateIdIiEET_RKS0_DpRKT0_, .-_Z12sum_templateIdIiEET_RKS0_DpRKT0_
	.weak	_Z12sum_templateIdJiEET_RKS0_DpRKT0_
	.set	_Z12sum_templateIdJiEET_RKS0_DpRKT0_,_Z12sum_templateIdIiEET_RKS0_DpRKT0_
	.section	.text._Z12sum_templateIiET_RKS0_,"axG",@progbits,_Z12sum_templateIiET_RKS0_,comdat
	.weak	_Z12sum_templateIiET_RKS0_
	.type	_Z12sum_templateIiET_RKS0_, @function
_Z12sum_templateIiET_RKS0_:
.LFB1344:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movl	(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1344:
	.size	_Z12sum_templateIiET_RKS0_, .-_Z12sum_templateIiET_RKS0_
	.text
	.type	_Z41__static_initialization_and_destruction_0ii, @function
_Z41__static_initialization_and_destruction_0ii:
.LFB1363:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movl	%edi, -4(%rbp)
	movl	%esi, -8(%rbp)
	cmpl	$1, -4(%rbp)
	jne	.L21
	cmpl	$65535, -8(%rbp)
	jne	.L21
	movl	$_ZStL8__ioinit, %edi
	call	_ZNSt8ios_base4InitC1Ev
	movl	$__dso_handle, %edx
	movl	$_ZStL8__ioinit, %esi
	movl	$_ZNSt8ios_base4InitD1Ev, %edi
	call	__cxa_atexit
.L21:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1363:
	.size	_Z41__static_initialization_and_destruction_0ii, .-_Z41__static_initialization_and_destruction_0ii
	.type	_GLOBAL__sub_I_main, @function
_GLOBAL__sub_I_main:
.LFB1364:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movl	$65535, %esi
	movl	$1, %edi
	call	_Z41__static_initialization_and_destruction_0ii
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1364:
	.size	_GLOBAL__sub_I_main, .-_GLOBAL__sub_I_main
	.section	.init_array,"aw"
	.align 8
	.quad	_GLOBAL__sub_I_main
	.hidden	__dso_handle
	.ident	"GCC: (Ubuntu 4.8.4-2ubuntu1~14.04.3) 4.8.4"
	.section	.note.GNU-stack,"",@progbits
