global strlen

section .text

strlen:
	push rcx
	mov rcx, 0

loop:
	cmp byte [rdi], 0
	je end_loop

	inc rcx
	inc rdi
	jmp loop


end_loop:
	mov rax, rcx
	pop rcx
	ret
