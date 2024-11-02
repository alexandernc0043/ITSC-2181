# a = b * 33 + i * 2; //Hint: 33 = 32 + 1

ld x2, 0(x12)		# load b
ld x5, 0(x15)		# load i
slli x22, x2, 5 	# x22 = b * 5
add x22, x22, x2 	# x22 = x22 + b
slli x23, x5, 1 	# x23 = i * 2
add x1, x22, x23 	# x1 = x22 (b * 3) + (i * 2)
sw x1, 0(x11)		# store