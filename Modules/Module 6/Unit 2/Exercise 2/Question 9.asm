# A[10] = B[10] + a;

# A[20] = A[20] + B[20];

# A[30] += B[30];

lw x6, 40(x16)	#load A[10]
lw x7, 40(x17)	#load B[10]
lw x1, 0(x11)	#load a
add x6, x7, x1 	#A[10] = B[10] + a
sw x6, 40(x16)	#store

lw x8, 80(x16) 	#load A[20]
lw x9, 80(x17)	#load B[20]
add x8, x8, x9	#A[20] = A[20] + B[20]
sw x8, 80(x16)	#store

lw x10, 120(x16)	#load A[30]
lw x22, 120(x17)	#load B[30]
add x10, x10, x22	#A[30] += B[30]
sw x10, 120(x16)	#store