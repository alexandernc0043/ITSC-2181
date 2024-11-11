lw x1, 0(x11) # load a
lw x2, 0(x12) # load b
lw x5, 0(x15) # load i
lw t0, 0(x16) # t0 = address of A[]
lw t1, 0(x17) # t1 = address of B[]

slli t3, x5, 2 # t3 = i * 4
add t4, t3, t0 # t4 = address of A[i]
add t5, t3, t1 # t5 = address of B[i]

lw x3, 0(t4) # x3 = A[i]
lw x4, 0(t5) # x4 = B[i]

beq x3, x4, true
sub x3, x3, x4 # A[i] = A[i] - B[i]
sw x3, 0(t4)
true:
	add x3, x0, x0 # A[i] = 0
	sw x3, 0(t4)