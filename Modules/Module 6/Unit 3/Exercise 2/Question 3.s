lw x1, 0(x11) # Load a
lw x2, 0(x12) # Load b
lw x5, 0(x15) # Load i

bne x1, x2, true # if a != b
add x5, x0, x0 # i = 0
sw x5, 0(x15) # store

true:
	sub x5, x1, x2 # i = a - b
	sw x5, 0(x15) # store