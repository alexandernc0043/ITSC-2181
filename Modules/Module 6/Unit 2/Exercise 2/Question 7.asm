# a = A[10];

# b = B[20];

lw x1, 0(x11)	#load a
lw x6, 40(x16)	#load A[10]
add x1, x0, x6 	# a = A[10]
sw x1, 0(x11)	#store a

lw x2, 0(x12)	#load b
lw x7 80(x17)	#load B[20]
add x2, x0, x7 	# b = B[20]
sw x7, 0(x12)	#store B[20] into b