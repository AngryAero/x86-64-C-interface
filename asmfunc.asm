section .text
bits 64
default rel

global asm_DAXPY


; void asm_DAXPY(long long int n, int a, double* x, double* y, double* z)

asm_DAXPY:
	push rsi
	push rbx
	push rbp
	mov rbp, rsp
	add rbp, 16
	add rbp, 8
	add rbp, 8

	xor rbx, rbx
	L1:
		CVTSI2SD xmm1, rdx
		MOVSD xmm2, [r8 + rbx * 8]
		MOVSD xmm3, [r9 + rbx * 8]
		MULSD xmm1, xmm2
		ADDSD xmm1, xmm3
		MOV rsi, [rbp+32]
		MOVSD [rsi + rbx * 8], xmm1
		INC rbx
		LOOP L1

	pop rbp
	pop rbx
	pop rsi
	ret
