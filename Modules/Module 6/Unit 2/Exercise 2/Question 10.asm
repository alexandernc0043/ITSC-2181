# i = a + b;

# A[i] = A[i] + a;

# a = B[i];

# b = A[i];

# a += B[i-1];

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


add x23, x17, x20	# x23 is address of B[i]
lw x24, 0(x23)		# x24 = B[i]
add x1, x0, x24 	# a = B[i]
sw x1, 0(x11)		# store


add x2, x0, x22		# b = A[i]
sw x2, 0(x12)		# store

sub x20, x20, 4 	# x20 = i * 4 - 1 (i-1)
add x25, x17, x20	# x25 is address of B[i-1]
lw x26, 0(x25)		# x26 = B[i-1]
add x1, x1, x26		# a += B[i-1]
sw x1, 0(x11)	# store