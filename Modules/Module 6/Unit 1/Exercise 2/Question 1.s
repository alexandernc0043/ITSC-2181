Using ONLY the add, sub and slli instruction to convert the following C statements to the corresponding RISC-V assembly. 
Assume that the variables i is integer assigned to registers t0. You can use register x0, which contains 0 and cannot be modified. 
i = 1;

i *= 4;

asm : 
add t0, x0, x0 			# t0 = x0 (0) + x0 (0)
add t0, t0, 1			# t0 = t0 (0) + 1

slli t0, t0, 2 			# t0 = 1 , shift left 2,
