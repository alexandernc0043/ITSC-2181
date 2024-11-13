lw x5, 0(x15)
lw t0, 0(x16)
lw t1, 0(x17)
add t6, x0, 100
add x5, x0, x0
loop:
	slli t2, x5, 2 # t2 = i * 4
	add t3, t2, t0 # address of A[i]
	add t4, t2, t1 # address of B[i]
	lw x3, 0(t3)	
	lw x4, 0(t4)
	add x3, x0, x4
	sw x3, 0(t3)
	add x5, x5, 1
	bne x5, t6, loop 
	j exit
exit: