# i = a + b;

# A[i] = A[i] + a;

# A[i] = B[i-2] + B[i-1] + B[i] + B[i+1] + B[i+2];

lw x5, 0(x15)		# Load i
lw x1, 0(x11)		# load a
lw x2, 0(x12)		# load b
add x5, x1, x2 		# i = a + b
sw x5, 0(x15) 		# store

slli x20, x5, 2 	# x20 is i * 4
add x21, x16, x20	# x21 is address of A[i]
lw x22, 0(x21)		# x22 = A[i]

add x22, x22, x1 	# A[i] = A[i] + a
sw x22, 0(x21)		# store

sub x23, x20, 8 	# x23 = i - 2
add x24, x17, x23 	# x24 is address of B[i-2]
lw x25, 0(x24)		# x25 = B[i-2]
add x22, x0, x25	# A[i] = B[i-2]

sub x23, x20, 4 	# x23 = i - 1
add x26, x17, x23 	# x26 is address of B[i-1]
lw x27, 0(x26)		# x27 = B[i-1]
add x22, x0, x27 	# A[i] = B[i-2] + B[i-1]

add x28, x17, x20 	# x28 is address of B[i]
lw x29, 0(x28)		# x29 = B[i]
add x22, x0, x29 	# A[i] = B[i-2] + B[i-1] + B[i]

add x23, x20, 4 	# x23 = i + 1
add x24, x17, x23 	# x24 is address of B[i+1]
lw x25, 0(x24)		# x25 = B[i+1]
add x22, x0, x25	# A[i] = B[i-2] + B[i-1] + B[i] + B[i+1]

add x23, x20, 8 	# x23 = i + 1
add x24, x17, x23 	# x24 is address of B[i+1]
lw x25, 0(x24)		# x25 = B[i+2]
add x22, x0, x25	# A[i] = B[i-2] + B[i-1] + B[i] + B[i+1] + B[i+2]
sw x22, 0(x21)		# store