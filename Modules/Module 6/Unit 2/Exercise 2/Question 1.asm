# a = b * 3 + i * 4;

ld x2, 0(x12)			# Load b
ld x5, 0(x15)			# load i
slli x22, x2, 2 		# x22 = b * 4
sub x22, x22, x2 		# x22 = b - b (b*3)
slli x25, x5, 2 		# x25 = i * 4
add x1, x22, x25 		# x1 = (b * 3) + (i * 4)
sw x1, 0(x11)			# store 
