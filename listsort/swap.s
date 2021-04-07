#  code simplified by Lin - note: mov is left to right
	.file	"swap.c"
	.text
	.globl	swap
	.type	swap, @function
swap:
.LFB0:
	.cfi_startproc
	movq	(%rdi), %rax		#  eax = *x  (address in rdi)
	movq	(%rsi), %rdx		#  edx = *y  (address in rsi)
	movq	%rdx, (%rdi)		# put 'em back in opposite locations
	movq	%rax, (%rsi)
	ret				# all done!
	.cfi_endproc
.LFE0:
	.size	swap, .-swap
	.ident	"GCC: (GNU) 4.8.3 20140911 (Red Hat 4.8.3-7)"
	.section	.note.GNU-stack,"",@progbits
