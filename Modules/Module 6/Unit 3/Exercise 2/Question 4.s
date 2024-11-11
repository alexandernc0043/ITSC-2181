lw x1, 0(x11) # Load a
lw x2, 0(x12) # Load b

bge x1, x2, true
add x2, x2, 1 # b++
sw x2, 0(x12) # store
true:
	add x1, x1, 1 # a++	
	sw x1, 0(x11) # store