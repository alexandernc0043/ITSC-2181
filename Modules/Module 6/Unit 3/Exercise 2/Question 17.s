lw x1, 0(x11)
lw x5, 0(x15)
lw t0, 0(x16)
add x5, x0, x0 # i = 0 

loop:
	add x5, x5, 1 # i++
	slli t1, x5, 2 # t1 = i * 4
	add t2, t0, t1 # t2 = address of A[i]
	lw t3, 0(t2) # t3 = A[i]
	bne t3, x1, loop 
	j exit
exit:
	sw x5, 0(x15)