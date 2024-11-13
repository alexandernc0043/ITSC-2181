lw x1, 0(x11)
lw x5, 0(x15)
lw t0, 0(x16)

add x5, x0, x0 # i = 0
add t6, x0, 100 # max
loop:
	slli t1, x5, 2 # i * 4
	add t2, t0, t1 # address of A[i]
	lw t3, 0(t2) # A[i]
	add x5, x5, 1 # increment
	beq t3, x1, break
	blt x5, t6, break
	bne t3, x1, loop
break: