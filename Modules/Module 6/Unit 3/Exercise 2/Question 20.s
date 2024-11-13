lw x5, 0(x15)
lw t0, 0(x16)
lw t1, 0(x17)

add x5, x0, x0 # i = 0
add t6, x0 100 # max

loop:
	slli t2, x5, 2 # i * 4
	add t3, t2, t0 # t3 = address of A[i]
	add t4, t2, t1 # t4 = address of B[i]
	lw x3, 0(t3)
	lw x4, 0(t4)
	blt x3, x4 LESS
	sub x3, x4, x3
	blt x5, t6, loop
	j exit
LESS:
	sub x3, x3, x4
	jr ra

exit: