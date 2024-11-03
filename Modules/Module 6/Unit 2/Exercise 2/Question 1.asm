# a = b * 3 + i * 4;

lw x2, 0(x12)		# load b
lw x5, 0(x15)		# load i
slli x20, x2, 2 	# x20 = b * 4
sub x20, x20, x2 	# x20 = b * 3

slli x5, x5, 2 		# i = i * 4

add x1, x20, x5 	# a = b * 3 + i + 4
sw x1, 0(x11)		# store