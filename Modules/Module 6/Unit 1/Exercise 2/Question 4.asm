# Using ONLY the add, addi, sub and slli instructions to convert the following C statement to the corresponding RISC-V assembly. 
# Assume that the variables f, g, and j are assigned to registers t0, t1, and t2 respectively. 
# You can use other temporary registers such as t3, t4, t5, etc.

# f = t0
# g = t1
# j = t2

# f = g - 3 – j * 15

# f = (g - 3) – (j * 15)

# t4 = j * 15
# t3 = g - 3

# t0 = t3 - t4


slli t4, t2, 3 		# t4 = j * 14
add t4, t4, t2		# t4 += j

sub t3, t1, 3 		# t3 = g - 3

sub t0, t3, t4 		# t0 = t3 - t4