# a = b * 33 + i * 2; //Hint: 33 = 32 + 1

lw x2, 0(x12)	# load b
lw x5, 0(x15)	# load i
slli x20, x2, 5 # x20 = b * 32
add x20, x20, x2# x20 = b * 33
slli x5, x5, 2 	# i = i * 2
add x1, x20, x5 # a = b * 33 + i * 2
sw x1, 0(x11)