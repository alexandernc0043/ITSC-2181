lw x1, 0(x11) # load a
lw x5, 0(x15) # load b
add t0, x0, 100 # t0 = 100 (max)
lw t1, 0(x16) # address of A[]
add x5, x0, x0 # i = 0
loop:
	slli t2, x5. 2 # t1 = i * 4
	add t3, t2, t1 # address of A[i]
	lw t4, 0(t3) # load A[i]
	add t4, x0, x5 # A[i] = i
	sw t4, 0(t3)
	add x5, x5, 1 # increment
	bne x5, t0, loop #loop
	j exit
exit:
	