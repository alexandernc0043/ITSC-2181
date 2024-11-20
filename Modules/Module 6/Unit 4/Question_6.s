// Question 6

i = a + b;

A[i] = A[i] + a;

A[i] = B[i-2] + B[i] + B[i+2];

lw x1, 0(x11) // load a
lw x2, 0(x12) // load b
add x5, x1, x2 // i = a + b
sw x5, 0(x15) // store


slli x5, x5, 2 // i * 4 (Our buffer)
add x22, x16, x5 // x22 is address of A[i]

sw x1, 0(x22) // store a (x1) into A[i] (x22)

add x27, x5, x17 // x27 = address of B + i
lw x20, -8(x27) // B[i-2]
lw x21, 0(x27) // B[i]
lw x23, 8(x27) // B[i+2]

add x6, x20, x21 // x6 = B[i-2] + B[i]
add x6, x6, x23 // x6 = B[i-2] + B[i] + B[i+2]
sw x6, 0(x22) // store x6 into x22 (A[i])