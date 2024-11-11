lw t0, 0(x16) # load A[]
lw t1, 0(x17) # load B[]
lw x5, 0(x15) # load i
add x5, x0, 1 # i = 1
add t6, x0, 100 # t6 = max 100
loop:
	slli t2, x5, 2 # t2 = i * 4
	add t3, t2, t0 # t3 = A[i]

	lw x3, 0(t3) # x3 = A[i]
	add x4, t2, t1 # x4 = B[i]

	lw t4, 0(x4) # B[i]
	add x3, x0, t4 # A[i] = B[i]

	lw t4, 4(x4) # B[i+1]
	add x3, x0, t4 # A[i] = B[i] + B[i + 1]

	sub t2, t2, 4 # t2 = i * 4 - 4
	add x4, t2, t1
	lw t4, 0(x4)
	add x3, x0, t4 # A[i] = B[i] + B[i+1] + B[i-1]

	sw x3, 0(t3)

	add x5, x5, 1
	blt x5, x6 loop 
	j exit
exit:
