lw x1, 0(x11) # load a
lw x2, 0(x12) # load b
lw t0, 16(x16) # load A[4]

beq x1, x2, equal
add t0, x0, x0 # A[4] = 0
sw t0, 16(x16) # store
equal:
	sub t0, x1, x2 # A[4] = a-b
	sw t0, 16(x16) # store