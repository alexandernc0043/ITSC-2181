# A[4] = a;

# B[8] = b + i;;

lw x6, 24(x16)		#load A[4]
lw x1, 0(x11)		#load a
add x6, x0, x1 		# A[4] = a
sw x6, 24(x16)		#store

lw x7, 32(x17)		#load B[8]
lw x2, 0(x12)		#load b
lw x5, 0(x15)		#load i
add x7, x2, x5 		# B[8] = b + i
sw x7, 32(x17)		#store