lw x1, 0(x11) # load a
lw x2, 0(x12) # load b
lw x5, 0(x15) # load i
lw t0, 0(x16) # t0 = address of A[]

add t1, x5, t0 # t1 = address of A[i]
lw t2, 0(t1) # t2 = A[i]

beq x1, x2 true 
add t2, x0, x0 # A[i] = 0
sw t2, 0(t2)
true:
	sub t2, x1, x2 # A[i] = a-b
	sw t2, 0(t2)