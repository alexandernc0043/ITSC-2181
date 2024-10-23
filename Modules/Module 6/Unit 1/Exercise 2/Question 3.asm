# Using ONLY the add, sub and slli instruction to convert the following C statement to the corresponding RISC-V assembly. 
# Assume that the variables f, g, and j are integers assigned to registers t0, t1, and t2 respectively. 
# You can use other temporary registers such as t3, t4, t5, t6, etc.

 

# f = g * 5 – j * 32
# f = (g * 5) – (j * 32)

# t3 = (g * 4) + t1 (g)
# t4 = (j * 32) + t2 (j)

# t0 = f
# t1 = g
# t2 = j

slli t3, t1, 2		# t3 = g * 4 
add t3, t3, t1		# t3 += g

slli t4, t2, 5		# t4 = j * 32
add t4, t4, t2		# t4 += j 

sub t0, t3, t4		# t0 = t3 - t4