# a = b * 3 + i * 4;

lw x2, 0x12			# Load b, size of word
lw x5, 0x15			# load i, size of word
slliw x22, x2, 2 	# b * 4
subw x22, x22, x2 	# x22 = b * 3
slliw x25, x5, 2 	# x25 = i * 4
addw x1, x22, x25 	# x1 = (b * 3) + (i * 4)
sw x1, 0x11			# store 0x11 in x1