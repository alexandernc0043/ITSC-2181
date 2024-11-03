# Note: make sure you understand the semantics of += (or -=, etc). 
# a += 10;

lw x1, 0(x11)	# load a
addi x1, x1, 10	# a = a + 10
sw x1, 0(x11) 	# store