lw x1, 0(x11) # Load a
lw x2, 0(x12) # Load b
lw x5, 0(x15) # Load i
beq x1, x2, equal # if a == b
equal:
	addi x5, x0, x0 # i = 0
