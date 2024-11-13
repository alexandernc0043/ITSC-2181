lw x5, 0(x15)
lw t0, 0(x16)
lw t1, 0(x17)
add x5, x0, 0
add t6, x0, 100 #max
loop:
	slli t2, x5, 2 # i * 4
	add t3, t0, t2 # address of A[i]
	lw x3, 0(t3) # A[i]
	add t4, t1, t2 # address of B[i]
	lw x4, 0(t4)
	bge x3, x4, if
	add x5, x5, 1
	blt x5, t6, loop
if:
	add x1, x0, x3 # a = A[i]
	add x3, x0, x4 # A[i] = B[i]
	add x4, x0, x1 # B[i] = a
	jr ra
exit: