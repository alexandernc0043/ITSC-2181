// Question 5

A[8] = a;
B[10] = b + i;

lw x1, 0(x11) // load a
sw x1, 32(x16) // store a into A[8] (4 * 8 = 32)
lw x2, 0(x12) // load b
lw x5, 0(x15) // load i
add x22, x2, x5 // b + i
sw x22, 40(x17) // store b+i (x22) into B[10]