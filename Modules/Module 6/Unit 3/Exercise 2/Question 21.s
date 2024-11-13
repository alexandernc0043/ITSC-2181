lw x1, 0(x11)
lw t0, 0(x16)
lw x5, 0(x15)

add x5, x0, x0 # i = 0
add t6, x0, 100 # max
lw x1, 0(x16) # a = A[0]

loop:
	slli t1, x5, 2 # i * 4
	add t3, t0, t1
	lw t4, 0(t3) # A[i]
	bge t4, x1, GREATER
	add x5, x5, 1 # i++
	blt x5, t6, loop 
	j exit
GREATER:
	add x1, x0, t4 # a = A[i]
	jr ra 
exit: