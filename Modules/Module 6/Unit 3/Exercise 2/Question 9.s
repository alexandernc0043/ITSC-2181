lw x1, 0(x11) # load a
lw x2, 0(x12) # load b
lw t0, 16(x16) # load A[4]

bne t0, x1, true
add t0, x2, x0 # A[4] = b
sw t0, 16(x16) # store

true:
	add t0, x1, x0 # A[4] = a
	sw t0, 16(x16) # store