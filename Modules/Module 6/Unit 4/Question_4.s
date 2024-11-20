// Question 4

a = b * 7 + i * 64

lw x2, 0(x12) // load b
slli x22, x2, 3 // b * 8
sub x22, x22, x2 // b-b (b*7)
lw x5, 0(x15) // load i
slli x5, x5, 6 // i * 64
add x22, x22, x5 // i * 64 + b * 7
sw x22, 0(x11) // store into a